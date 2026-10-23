#!/usr/bin/env python3
# Rover arm ground station
import os
import signal
import sys
import time

os.environ["SDL_VIDEODRIVER"] = "dummy"
os.environ["SDL_JOYSTICK_ALLOW_BACKGROUND_EVENTS"] = "1"

import pygame
from pygame._sdl2 import controller
from pyqtgraph.Qt import QtCore, QtGui, QtWidgets

DEADZONE = 0.15
SPEED = [20, 20, 30, 30]        # degrees per second
HOME = [77, 85, 0, 0]           # Tier.ino start angles

AXES = ["LEFTX", "LEFTY", "RIGHTX", "RIGHTY", "TRIGGERLEFT", "TRIGGERRIGHT"]
BUTTONS = ["A", "B", "X", "Y", "BACK", "START", "LEFTSHOULDER", "RIGHTSHOULDER"]
BLUE, GREEN, RED, AMBER = "#1f6feb", "#1a7f37", "#cf222e", "#bf8700"

STYLE = """
QWidget { font-size: 18px; }
QGroupBox { background: #f2f3f5; border: 1px solid #dfe2e6; border-radius: 10px; margin-top: 28px; padding: 12px; }
QGroupBox::title { subcontrol-origin: margin; left: 12px; color: #8c959f; }
QLabel#title { font-size: 26px; font-weight: bold; }
QLabel#big { font-size: 40px; font-weight: bold; }
"""


class PadView(QtWidgets.QWidget):
    def __init__(self):
        super().__init__()
        self.axes, self.buttons, self.connected = {}, {}, False
        self.setMinimumSize(320, 215)

    def paintEvent(self, event):
        a, b = self.axes, self.buttons
        p = QtGui.QPainter(self)
        p.setRenderHint(QtGui.QPainter.RenderHint.Antialiasing)
        scale = min(self.width() / 640, self.height() / 430)
        p.translate((self.width() - 640 * scale) / 2, (self.height() - 430 * scale) / 2)
        p.scale(scale, scale)

        def paint(fill, outline=None):
            p.setPen(QtGui.QPen(QtGui.QColor(outline), 2) if outline else QtGui.QPen(QtCore.Qt.PenStyle.NoPen))
            p.setBrush(QtGui.QColor(fill))

        def write(rect, text, color, size):
            font = p.font()
            font.setPixelSize(size)
            font.setBold(True)
            p.setFont(font)
            p.setPen(QtGui.QColor(color))
            p.drawText(rect, QtCore.Qt.AlignmentFlag.AlignCenter, text)

        # triggers and bumpers
        for x, trigger, bumper, name in ((110, "TRIGGERLEFT", "LEFTSHOULDER", "LB"),
                                         (380, "TRIGGERRIGHT", "RIGHTSHOULDER", "RB")):
            paint("#d8dce1")
            p.drawRoundedRect(QtCore.QRectF(x, 14, 150, 16), 6, 6)
            if a.get(trigger, 0) > 0.02:
                paint(BLUE)
                p.drawRoundedRect(QtCore.QRectF(x, 14, 150 * a[trigger], 16), 6, 6)
            box = QtCore.QRectF(x, 42, 150, 36)
            paint(BLUE if b.get(bumper) else "#d8dce1", "#bfc5cc")
            p.drawRoundedRect(box, 8, 8)
            write(box, name, "white" if b.get(bumper) else "#57606a", 18)

        # body
        paint("#e4e7eb", "#bfc5cc")
        p.drawRoundedRect(QtCore.QRectF(40, 92, 560, 322), 92, 92)

        # sticks
        for x, y, side, color in ((175, 200, "LEFT", BLUE), (410, 318, "RIGHT", GREEN)):
            paint("white", "#c6ccd3")
            p.drawEllipse(QtCore.QPointF(x, y), 60, 60)
            paint(color)
            p.drawEllipse(QtCore.QPointF(x + 38 * a.get(side + "X", 0), y + 38 * a.get(side + "Y", 0)), 20, 20)

        # back and start
        for x, name in ((285, "BACK"), (355, "START")):
            paint(BLUE if b.get(name) else "#cfd4da", "#b3bac2")
            p.drawEllipse(QtCore.QPointF(x, 200), 11, 11)

        # A B X Y
        for name, x, y, color in (("Y", 510, 156, AMBER), ("X", 466, 200, BLUE),
                                  ("B", 554, 200, RED), ("A", 510, 244, GREEN)):
            paint(color if b.get(name) else "#f6f7f9", color)
            p.drawEllipse(QtCore.QPointF(x, y), 20, 20)
            write(QtCore.QRectF(x - 20, y - 20, 40, 40), name, "white" if b.get(name) else "#57606a", 19)

        if not self.connected:
            box = QtCore.QRectF(70, 196, 500, 76)
            paint("#f2ffffff")
            p.drawRect(box)
            write(box, "No controller", RED, 38)
        p.end()


class FlightDay(QtWidgets.QWidget):
    def __init__(self):
        super().__init__()
        self.setWindowTitle("Flight Day")
        self.setStyleSheet(STYLE)
        self.resize(1100, 600)

        pygame.init()
        controller.init()
        self.pad = None
        self.angles = list(HOME)    # shoulder, elbow, wrist, claw
        self.base = 0.0             # -1 left, +1 right
        self.started = None
        self.saved = 0.0
        self.start_held = False
        self.last = time.monotonic()

        # top row
        title = QtWidgets.QLabel("Rover Arm")
        title.setObjectName("title")
        self.clock = QtWidgets.QLabel("00:00:00")
        self.clock.setObjectName("big")
        self.start_btn = QtWidgets.QPushButton("Start")
        self.start_btn.clicked.connect(self.toggle_timer)
        reset_btn = QtWidgets.QPushButton("Reset")
        reset_btn.clicked.connect(self.reset_timer)
        top = QtWidgets.QHBoxLayout()
        top.addWidget(title)
        top.addStretch()
        top.addWidget(self.clock)
        top.addWidget(self.start_btn)
        top.addWidget(reset_btn)

        # controller panel
        pad_box = QtWidgets.QGroupBox("Controller")
        self.view = PadView()
        QtWidgets.QVBoxLayout(pad_box).addWidget(self.view)

        # angles panel
        angle_box = QtWidgets.QGroupBox("Angles")
        form = QtWidgets.QFormLayout(angle_box)
        form.setVerticalSpacing(18)
        self.values = []
        for name in ["Base", "Shoulder", "Elbow", "Wrist", "Claw"]:
            value = QtWidgets.QLabel()
            value.setObjectName("big")
            form.addRow(name, value)
            self.values.append(value)

        body = QtWidgets.QHBoxLayout()
        body.addWidget(pad_box, 3)
        body.addWidget(angle_box, 2)
        layout = QtWidgets.QVBoxLayout(self)
        layout.addLayout(top)
        layout.addLayout(body)

        self.loop = QtCore.QTimer(self)
        self.loop.timeout.connect(self.tick)
        self.loop.start(40)    # 25 times a second

    def read_controller(self):
        pygame.event.get()
        if self.pad and not self.pad.attached():
            self.pad = None
        if self.pad is None:
            for i in range(controller.get_count()):
                if controller.is_controller(i):
                    self.pad = controller.Controller(i)
                    break
        axes, buttons = {}, {}
        for name in AXES:
            axes[name] = self.pad.get_axis(getattr(pygame, "CONTROLLER_AXIS_" + name)) / 32767 if self.pad else 0.0
        for name in BUTTONS:
            buttons[name] = bool(self.pad and self.pad.get_button(getattr(pygame, "CONTROLLER_BUTTON_" + name)))
        return axes, buttons

    def tick(self):
        now = time.monotonic()
        dt = min(now - self.last, 0.1)
        self.last = now
        axes, buttons = self.read_controller()

        if buttons["START"] and not self.start_held:    # once per press
            self.toggle_timer()
        self.start_held = buttons["START"]

        # stick up is positive
        moves = [-axes["LEFTY"], -axes["RIGHTY"], axes["RIGHTX"],
                 int(buttons["RIGHTSHOULDER"]) - int(buttons["LEFTSHOULDER"])]
        for i, move in enumerate(moves):
            if abs(move) > DEADZONE:
                self.angles[i] = min(180, max(0, self.angles[i] + SPEED[i] * move * dt))
        self.base = axes["TRIGGERRIGHT"] - axes["TRIGGERLEFT"]
        if abs(self.base) < DEADZONE:
            self.base = 0.0

        self.send()

        self.view.axes, self.view.buttons, self.view.connected = axes, buttons, self.pad is not None
        self.view.update()
        t = int(self.timer_seconds())
        self.clock.setText(f"{t // 3600:02d}:{t // 60 % 60:02d}:{t % 60:02d}")
        self.values[0].setText(f"{round(self.base * 100)}%")
        for label, angle in zip(self.values[1:], self.angles):
            label.setText(f"{round(angle)}°")

    def send(self):
        speed = round(150 * abs(self.base))
        direction = 2 if speed == 0 else (1 if self.base > 0 else 0)
        s1, s2, s3, s4 = (round(a) for a in self.angles)
        line = f"A,{speed},{direction},{s1},{s2},{s3},{s4}"
        if line != getattr(self, "last_line", None):
            print(line)
            self.last_line = line

    # flight timer
    def timer_seconds(self):
        running = time.monotonic() - self.started if self.started is not None else 0.0
        return self.saved + running

    def toggle_timer(self):
        if self.started is None:
            self.started = time.monotonic()
            self.start_btn.setText("Stop")
        else:
            self.saved = self.timer_seconds()
            self.started = None
            self.start_btn.setText("Start")

    def reset_timer(self):
        self.started, self.saved = None, 0.0
        self.start_btn.setText("Start")


if __name__ == "__main__":
    signal.signal(signal.SIGINT, signal.SIG_DFL)
    app = QtWidgets.QApplication(sys.argv)
    app.setStyle("Fusion")
    window = FlightDay()
    window.show()
    sys.exit(app.exec() if hasattr(app, "exec") else app.exec_())
