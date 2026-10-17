import rclpy
from rclpy.node import Node
from arm_interfaces.msg import ArmControl, Telemetry

import serial

class ArmNode(Node):
    def __init__(self):
        super().__init__('arm_node')
        self.publisher_ = self.create_publisher(Telemetry, 'telem', 10)
        self.subscription = self.create_subscription(
            ArmControl, 'arm_control', self.listener_callback, 10)
        self.timer = self.create_timer(0.1, self.tick)  # 10 Hz

    def listener_callback(self, msg):
        self.get_logger().info(
            '\n'
            f'Control: axes=({msg.axis_0:.2f}, {msg.axis_1:.2f}, '
            f'{msg.axis_2:.2f}, {msg.axis_3:.2f}) claw={msg.claw:.2f}'
        )

    def tick(self):
        msg = Telemetry()
        msg.altitude = 0.0
        msg.pressure = 0.5
        msg.temperature = -0.5
        msg.accelerometer.x = 0.0
        msg.accelerometer.y = 1.2
        msg.accelerometer.z = 3.4
        self.publisher_.publish(msg)

def main():
    rclpy.init()
    node = ArmNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()