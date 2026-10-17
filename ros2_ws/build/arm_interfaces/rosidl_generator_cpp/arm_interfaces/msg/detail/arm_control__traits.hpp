// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from arm_interfaces:msg/ArmControl.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "arm_interfaces/msg/arm_control.hpp"


#ifndef ARM_INTERFACES__MSG__DETAIL__ARM_CONTROL__TRAITS_HPP_
#define ARM_INTERFACES__MSG__DETAIL__ARM_CONTROL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "arm_interfaces/msg/detail/arm_control__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace arm_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const ArmControl & msg,
  std::ostream & out)
{
  out << "{";
  // member: axis_0
  {
    out << "axis_0: ";
    rosidl_generator_traits::value_to_yaml(msg.axis_0, out);
    out << ", ";
  }

  // member: axis_1
  {
    out << "axis_1: ";
    rosidl_generator_traits::value_to_yaml(msg.axis_1, out);
    out << ", ";
  }

  // member: axis_2
  {
    out << "axis_2: ";
    rosidl_generator_traits::value_to_yaml(msg.axis_2, out);
    out << ", ";
  }

  // member: axis_3
  {
    out << "axis_3: ";
    rosidl_generator_traits::value_to_yaml(msg.axis_3, out);
    out << ", ";
  }

  // member: claw
  {
    out << "claw: ";
    rosidl_generator_traits::value_to_yaml(msg.claw, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ArmControl & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: axis_0
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "axis_0: ";
    rosidl_generator_traits::value_to_yaml(msg.axis_0, out);
    out << "\n";
  }

  // member: axis_1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "axis_1: ";
    rosidl_generator_traits::value_to_yaml(msg.axis_1, out);
    out << "\n";
  }

  // member: axis_2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "axis_2: ";
    rosidl_generator_traits::value_to_yaml(msg.axis_2, out);
    out << "\n";
  }

  // member: axis_3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "axis_3: ";
    rosidl_generator_traits::value_to_yaml(msg.axis_3, out);
    out << "\n";
  }

  // member: claw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "claw: ";
    rosidl_generator_traits::value_to_yaml(msg.claw, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ArmControl & msg, bool use_flow_style = false)
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
  const arm_interfaces::msg::ArmControl & msg,
  std::ostream & out, size_t indentation = 0)
{
  arm_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use arm_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const arm_interfaces::msg::ArmControl & msg)
{
  return arm_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<arm_interfaces::msg::ArmControl>()
{
  return "arm_interfaces::msg::ArmControl";
}

template<>
inline const char * name<arm_interfaces::msg::ArmControl>()
{
  return "arm_interfaces/msg/ArmControl";
}

template<>
struct has_fixed_size<arm_interfaces::msg::ArmControl>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<arm_interfaces::msg::ArmControl>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<arm_interfaces::msg::ArmControl>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ARM_INTERFACES__MSG__DETAIL__ARM_CONTROL__TRAITS_HPP_
