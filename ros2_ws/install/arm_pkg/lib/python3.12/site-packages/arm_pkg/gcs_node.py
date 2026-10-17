import rclpy
from rclpy.node import Node
from arm_interfaces.msg import ArmControl, Telemetry

class GroundStationNode(Node):
    def __init__(self):
        super().__init__('ground_station_node')
        self.publisher_ = self.create_publisher(ArmControl, 'arm_control', 10)
        self.subscription = self.create_subscription(
            Telemetry, 'telem', self.listener_callback, 10)
        self.timer = self.create_timer(0.1, self.tick)  # 10 Hz

    def listener_callback(self, msg):
        self.get_logger().info(
            '\n'
            f'Altitude: {msg.altitude:.2f}\n'
            f'Pressure: {msg.pressure:.2f}\n'
            f'Temperature: {msg.temperature:.2f}\n'
            f'Accelerometer: ({msg.accelerometer.x:.2f}, {msg.accelerometer.y:.2f}, {msg.accelerometer.z:.2f})\n'
        )

    def tick(self):
        msg = ArmControl()
        msg.axis_0 = 0.0
        msg.axis_1 = 20.0
        msg.axis_2 = -10.5
        msg.axis_3 = 0.0
        msg.claw = 20.0
        self.publisher_.publish(msg)

def main():
    rclpy.init()
    node = GroundStationNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()