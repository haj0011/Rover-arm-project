// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from arm_interfaces:msg/Telemetry.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "arm_interfaces/msg/telemetry.hpp"


#ifndef ARM_INTERFACES__MSG__DETAIL__TELEMETRY__TRAITS_HPP_
#define ARM_INTERFACES__MSG__DETAIL__TELEMETRY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "arm_interfaces/msg/detail/telemetry__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'accelerometer'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"

namespace arm_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const Telemetry & msg,
  std::ostream & out)
{
  out << "{";
  // member: altitude
  {
    out << "altitude: ";
    rosidl_generator_traits::value_to_yaml(msg.altitude, out);
    out << ", ";
  }

  // member: temperature
  {
    out << "temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.temperature, out);
    out << ", ";
  }

  // member: pressure
  {
    out << "pressure: ";
    rosidl_generator_traits::value_to_yaml(msg.pressure, out);
    out << ", ";
  }

  // member: accelerometer
  {
    out << "accelerometer: ";
    to_flow_style_yaml(msg.accelerometer, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Telemetry & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: altitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "altitude: ";
    rosidl_generator_traits::value_to_yaml(msg.altitude, out);
    out << "\n";
  }

  // member: temperature
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "temperature: ";
    rosidl_generator_traits::value_to_yaml(msg.temperature, out);
    out << "\n";
  }

  // member: pressure
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pressure: ";
    rosidl_generator_traits::value_to_yaml(msg.pressure, out);
    out << "\n";
  }

  // member: accelerometer
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accelerometer:\n";
    to_block_style_yaml(msg.accelerometer, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Telemetry & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace arm_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use arm_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const arm_interfaces::msg::Telemetry & msg,
  std::ostream & out, size_t indentation = 0)
{
  arm_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use arm_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const arm_interfaces::msg::Telemetry & msg)
{
  return arm_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<arm_interfaces::msg::Telemetry>()
{
  return "arm_interfaces::msg::Telemetry";
}

template<>
inline const char * name<arm_interfaces::msg::Telemetry>()
{
  return "arm_interfaces/msg/Telemetry";
}

template<>
struct has_fixed_size<arm_interfaces::msg::Telemetry>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Vector3>::value> {};

template<>
struct has_bounded_size<arm_interfaces::msg::Telemetry>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Vector3>::value> {};

template<>
struct is_message<arm_interfaces::msg::Telemetry>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ARM_INTERFACES__MSG__DETAIL__TELEMETRY__TRAITS_HPP_
