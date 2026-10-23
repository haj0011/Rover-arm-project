#!/usr/bin/env python3
"""
Controls
    LT / RT-base motor left / right (harder = faster)
    Left stick-up/down     shoulder
    Right stick-up/down     elbow
    Rightstick-left/right  wrist
    LB / RB-claw close / open
    B-return to home
    Start-timer start / stop
"""
import math
import os
import signal
import sys
import time

os.environ.setdefault("SDL_VIDEODRIVER", "dummy")                  
os.environ.setdefault("SDL_JOYSTICK_ALLOW_BACKGROUND_EVENTS", "1")  
os.environ.setdefault("PYGAME_HIDE_SUPPORT_PROMPT", "1")

import pygame
from pygame._sdl2 import controller as sdl_pad
import pyqtgraph as pg                      
from pyqtgraph.Qt import QtCore, QtGui, QtWidgets

# setting
RATE_HZ = 25         
DEADZONE = 0.15       
HOME_SPEED = 45    

JOINTS = [("Shoulder", "ly",        77,    0, 180,   20),
          ("Elbow",    "ry",        85,    0, 180,   20),
          ("Wrist",    "rx",         0,    0, 180,   30),
          ("Claw",     "bumpers",    0,    0, 180,   30)]
TAGS = {"ly": "LS ↕", "ry": "RS ↕", "lx": "LS ↔", "rx": "RS ↔", "bumpers": "LB RB"}

INK, MUTED, PANEL, EDGE = "#1f2328", "#8c959f", "#f2f3f5", "#dfe2e6"
BLUE, GREEN, RED, AMBER = "#1f6feb", "#1a7f37", "#cf222e", "#bf8700"

STYLE = f"""
QWidget {{ color: {INK}; font-family: "Ubuntu", "DejaVu Sans", sans-serif; font-size: 15px; }}
QWidget#root {{ background: #ffffff; }}
QFrame#panel {{ background: {PANEL}; border: 1px solid {EDGE}; border-radius: 10px; }}
QFrame#sep {{ background: {EDGE}; border: none; }}
QLabel {{ background: transparent; border: none; }}
QLabel#title {{ color: {MUTED}; font-size: 13px; }}
QLabel#h1 {{ font-size: 24px; font-weight: bold; }}
QLabel#clock {{ font-family: "Ubuntu Mono", "DejaVu Sans Mono", monospace; font-size: 36px; font-weight: bold; }}
QLabel#axis {{ font-size: 20px; }}
QLabel#tag {{ color: {MUTED}; font-size: 14px; }}
QLabel#value {{ font-size: 40px; font-weight: bold; }}
QPushButton {{ background: #ffffff; border: 1px solid #cdd2d8; border-radius: 7px; padding: 8px 18px; font-size: 16px; }}
QPushButton:hover {{ background: #f6f8fa; }}
QPushButton:pressed {{ background: #eaeef2; }}
"""


def dz(v):
    """jawn deadzone."""
    return 0.0 if abs(v) < DEADZONE else math.copysign((abs(v) - DEADZONE) / (1 - DEADZONE), v)


class Gamepad:
    AXES = {"lx": "LEFTX", "ly": "LEFTY", "rx": "RIGHTX", "ry": "RIGHTY", "lt": "TRIGGERLEFT", "rt": "TRIGGERRIGHT"}
    BUTTONS = {"a": "A", "b": "B", "x": "X", "y": "Y", "lb": "LEFTSHOULDER", "rb": "RIGHTSHOULDER",
               "back": "BACK", "start": "START"}

    def __init__(self):
        pygame.display.init()    
        pygame.joystick.init()
        sdl_pad.init()
        self.pad = None

    def read(self):
        pygame.event.get()      
        if self.pad is not None and not self.pad.attached():
            self.pad.quit()
            self.pad = None
        if self.pad is None:
            for i in range(sdl_pad.get_count()):
                if sdl_pad.is_controller(i):
                    try:
                        self.pad = sdl_pad.Controller(i)
                        break
                    except pygame.error:
                        pass
        s = {"connected": self.pad is not None}
        for key, name in self.AXES.items():
            raw = self.pad.get_axis(getattr(pygame, "CONTROLLER_AXIS_" + name)) if self.pad else 0
            s[key] = max(-1.0, min(1.0, raw / 32767))
        for key, name in self.BUTTONS.items():
            s[key] = bool(self.pad and self.pad.get_button(getattr(pygame, "CONTROLLER_BUTTON_" + name)))
        return s


class PadView(QtWidgets.QWidget):
    #Live drawing of the controller.
    W, H = 640, 430       

    def __init__(self):
        super().__init__()
        self.s = {}
        self.setMinimumSize(320, 215)

    def show_state(self, s):
        self.s = s
        self.update()

    def paintEvent(self, _event):
        s, R, P = self.s, QtCore.QRectF, QtCore.QPointF
        p = QtGui.QPainter(self)
        p.setRenderHint(QtGui.QPainter.RenderHint.Antialiasing)
        k = min(self.width() / self.W, self.height() / self.H)
        p.translate((self.width() - self.W * k) / 2, (self.height() - self.H * k) / 2)
        p.scale(k, k)

        def fill(color, outline=None, width=2.0):
            p.setPen(QtGui.QPen(QtGui.QColor(outline), width) if outline else QtGui.QPen(QtCore.Qt.PenStyle.NoPen))
            p.setBrush(QtGui.QBrush(QtGui.QColor(color)))

        def text(rect, t, color, size):
            font = QtGui.QFont()
            font.setPixelSize(size)
            font.setBold(True)
            p.setFont(font)
            p.setPen(QtGui.QColor(color))
            p.drawText(rect, QtCore.Qt.AlignmentFlag.AlignCenter, t)

        # triggers and bumpers
        for x, trig, bump in ((110, "lt", "lb"), (380, "rt", "rb")):
            bar = R(x, 14, 150, 16)
            fill("#d8dce1")
            p.drawRoundedRect(bar, 6, 6)
            p.save()
            p.setClipRect(R(x, 14, 150 * s.get(trig, 0.0), 16))
            fill(BLUE)
            p.drawRoundedRect(bar, 6, 6)
            p.restore()
            on = s.get(bump, False)
            box = R(x, 42, 150, 36)
            fill(BLUE if on else "#d8dce1", "#bfc5cc", 1.5)
            p.drawRoundedRect(box, 8, 8)
            text(box, bump.upper(), "#ffffff" if on else "#57606a", 18)

        # body
        fill("#e4e7eb", "#bfc5cc")
        p.drawRoundedRect(R(40, 92, 560, 322), 92, 92)

        # sticks
        for (cx, cy), kx, ky, color in (((175, 200), "lx", "ly", BLUE), ((410, 318), "rx", "ry", GREEN)):
            fill("#ffffff", "#c6ccd3")
            p.drawEllipse(P(cx, cy), 60, 60)
            fill(color)
            p.drawEllipse(P(cx + 38 * s.get(kx, 0.0), cy + 38 * s.get(ky, 0.0)), 20, 20)

        # back / start
        for x, key in ((285, "back"), (355, "start")):
            fill(BLUE if s.get(key) else "#cfd4da", "#b3bac2", 1.5)
            p.drawEllipse(P(x, 200), 11, 11)

        # face buttons
        for key, dx, dy, color in (("y", 0, -44, AMBER), ("x", -44, 0, BLUE), ("b", 44, 0, RED), ("a", 0, 44, GREEN)):
            on = s.get(key, False)
            c = P(510 + dx, 200 + dy)
            fill(color if on else "#f6f7f9", color, 2.5)
            p.drawEllipse(c, 20, 20)
            text(R(c.x() - 20, c.y() - 20, 40, 40), key.upper(), "#ffffff" if on else "#57606a", 19)

        if not s.get("connected"):
            box = R(70, 196, 500, 76)
            fill("#f2ffffff")
            p.drawRect(box)
            text(box, "No controller", RED, 38)
        p.end()


class Panel(QtWidgets.QFrame):
    """Grey rounded box"""
    def __init__(self, title):
        super().__init__()
        self.setObjectName("panel")
        self.box = QtWidgets.QVBoxLayout(self)
        self.box.setContentsMargins(16, 10, 16, 16)
        label = QtWidgets.QLabel(title)
        label.setObjectName("title")
        self.box.addWidget(label)


class FlightDay(QtWidgets.QWidget):
    def __init__(self):
        super().__init__()
        self.setObjectName("root")
        self.setAttribute(QtCore.Qt.WidgetAttribute.WA_StyledBackground, True)
        self.setStyleSheet(STYLE)
        self.setWindowTitle("Flight Day")
        self.resize(1200, 720)

        self.pad = Gamepad()
        self.angles = [float(j[2]) for j in JOINTS]   
        self.base = 0.0                            
        self.homing = False
        self.prev = {}                                
        self.run_from, self.banked = None, 0.0        
        self.last = time.monotonic()

        # timer Start 
        title = QtWidgets.QLabel("Rover Arm")
        title.setObjectName("h1")
        self.clock = QtWidgets.QLabel("00:00:00")
        self.clock.setObjectName("clock")
        self.start_btn = self.button("Start", self.toggle_clock)
        head = QtWidgets.QHBoxLayout()
        head.addWidget(title)
        head.addStretch(1)
        head.addWidget(self.clock)
        head.addSpacing(10)
        head.addWidget(self.start_btn)
        head.addWidget(self.button("Reset", self.reset_clock))

        # controller drawing
        pad_panel = Panel("Controller")
        self.view = PadView()
        pad_panel.box.addWidget(self.view, 1)

        # angles
        axes = Panel("Angles")
        grid = QtWidgets.QGridLayout()
        grid.setHorizontalSpacing(16)
        rows = [("Base", "LT RT")] + [(j[0], TAGS[j[1]]) for j in JOINTS]
        self.values = []
        for i, (name, tag) in enumerate(rows):
            if i:
                sep = QtWidgets.QFrame()
                sep.setObjectName("sep")
                sep.setFixedHeight(1)
                grid.addWidget(sep, 2 * i - 1, 0, 1, 3)
            for col, (words, obj) in enumerate(((name, "axis"), (tag, "tag"))):
                label = QtWidgets.QLabel(words)
                label.setObjectName(obj)
                grid.addWidget(label, 2 * i, col)
            value = QtWidgets.QLabel()
            value.setObjectName("value")
            value.setAlignment(QtCore.Qt.AlignmentFlag.AlignRight | QtCore.Qt.AlignmentFlag.AlignVCenter)
            grid.addWidget(value, 2 * i, 2)
            grid.setRowStretch(2 * i, 1)
            self.values.append(value)
        grid.setColumnStretch(2, 1)
        axes.box.addLayout(grid, 1)

        body = QtWidgets.QHBoxLayout()
        body.setSpacing(16)
        body.addWidget(pad_panel, 3)
        body.addWidget(axes, 2)
        root = QtWidgets.QVBoxLayout(self)
        root.setContentsMargins(22, 14, 22, 22)
        root.setSpacing(14)
        root.addLayout(head)
        root.addLayout(body, 1)

        self.loop = QtCore.QTimer(self)
        self.loop.timeout.connect(self.tick)
        self.loop.start(1000 // RATE_HZ)
        self.tick()

    def button(self, words, slot):
        b = QtWidgets.QPushButton(words)
        b.setFocusPolicy(QtCore.Qt.FocusPolicy.NoFocus) 
        b.clicked.connect(slot)
        return b

    # update loop
    def tick(self):
        now = time.monotonic()
        dt, self.last = min(now - self.last, 0.1), now
        s = self.pad.read()
        if s["start"] and not self.prev.get("start"):
            self.toggle_clock()
        if s["b"] and not self.prev.get("b"):
            self.homing = True
        self.prev = s

        inputs = {"ly": -dz(s["ly"]), "ry": -dz(s["ry"]), "lx": dz(s["lx"]), "rx": dz(s["rx"]),
                  "bumpers": float(s["rb"]) - float(s["lb"])}          
        if any(inputs[j[1]] for j in JOINTS):
            self.homing = False                                        
        for i, (_, key, home, lo, hi, speed) in enumerate(JOINTS):
            if self.homing:
                step = HOME_SPEED * dt
                self.angles[i] += max(-step, min(step, home - self.angles[i]))
            else:
                self.angles[i] += speed * inputs[key] * dt
            self.angles[i] = max(lo, min(hi, self.angles[i]))
        self.base = dz(s["rt"]) - dz(s["lt"])

        self.send()
        self.refresh(s)



#print to terminal, gonna change when dinith and I implement ROS2
    def send(self):
        speed = round(150 * abs(self.base))
        direction = 2 if speed == 0 else (1 if self.base > 0 else 0)
        s1, s2, s3, s4 = (round(a) for a in self.angles)
        line = f"A,{speed},{direction},{s1},{s2},{s3},{s4}"
        if line != getattr(self, "last_line", None):
            print(line)
            self.last_line = line







    def refresh(self, s):
        self.view.show_state(s)
        t = int(self.elapsed())
        self.clock.setText(f"{t // 3600:02d}:{t // 60 % 60:02d}:{t % 60:02d}")
        pct = round(100 * abs(self.base))
        texts = ["0%" if pct == 0 else f"◀ {pct}%" if self.base < 0 else f"{pct}% ▶"]
        texts += [f"{round(a)}°" for a in self.angles]
        for label, words in zip(self.values, texts):
            label.setText(words)

    # flight timer 
    def elapsed(self):
        return self.banked + (time.monotonic() - self.run_from if self.run_from is not None else 0.0)

    def toggle_clock(self):
        if self.run_from is None:
            self.run_from = time.monotonic()
        else:
            self.banked, self.run_from = self.elapsed(), None
        self.start_btn.setText("Start" if self.run_from is None else "Stop")

    def reset_clock(self):
        self.run_from, self.banked = None, 0.0
        self.start_btn.setText("Start")

    def closeEvent(self, event):
        self.loop.stop()
        pygame.quit()
        event.accept()


def main():
    app = pg.mkQApp("FlightDayMain")
    app.setStyle("Fusion")
    win = FlightDay()
    win.show()
    signal.signal(signal.SIGINT, lambda *_: win.close())   # Ctrl+C 
    sys.exit(app.exec() if hasattr(app, "exec") else app.exec_())


if __name__ == "__main__":
    main()
