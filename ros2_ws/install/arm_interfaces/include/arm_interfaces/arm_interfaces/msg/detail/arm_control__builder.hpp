// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from arm_interfaces:msg/ArmControl.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "arm_interfaces/msg/arm_control.hpp"


#ifndef ARM_INTERFACES__MSG__DETAIL__ARM_CONTROL__BUILDER_HPP_
#define ARM_INTERFACES__MSG__DETAIL__ARM_CONTROL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "arm_interfaces/msg/detail/arm_control__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace arm_interfaces
{

namespace msg
{

namespace builder
{

class Init_ArmControl_claw
{
public:
  explicit Init_ArmControl_claw(::arm_interfaces::msg::ArmControl & msg)
  : msg_(msg)
  {}
  ::arm_interfaces::msg::ArmControl claw(::arm_interfaces::msg::ArmControl::_claw_type arg)
  {
    msg_.claw = std::move(arg);
    return std::move(msg_);
  }

private:
  ::arm_interfaces::msg::ArmControl msg_;
};

class Init_ArmControl_axis_3
{
public:
  explicit Init_ArmControl_axis_3(::arm_interfaces::msg::ArmControl & msg)
  : msg_(msg)
  {}
  Init_ArmControl_claw axis_3(::arm_interfaces::msg::ArmControl::_axis_3_type arg)
  {
    msg_.axis_3 = std::move(arg);
    return Init_ArmControl_claw(msg_);
  }

private:
  ::arm_interfaces::msg::ArmControl msg_;
};

class Init_ArmControl_axis_2
{
public:
  explicit Init_ArmControl_axis_2(::arm_interfaces::msg::ArmControl & msg)
  : msg_(msg)
  {}
  Init_ArmControl_axis_3 axis_2(::arm_interfaces::msg::ArmControl::_axis_2_type arg)
  {
    msg_.axis_2 = std::move(arg);
    return Init_ArmControl_axis_3(msg_);
  }

private:
  ::arm_interfaces::msg::ArmControl msg_;
};

class Init_ArmControl_axis_1
{
public:
  explicit Init_ArmControl_axis_1(::arm_interfaces::msg::ArmControl & msg)
  : msg_(msg)
  {}
  Init_ArmControl_axis_2 axis_1(::arm_interfaces::msg::ArmControl::_axis_1_type arg)
  {
    msg_.axis_1 = std::move(arg);
    return Init_ArmControl_axis_2(msg_);
  }

private:
  ::arm_interfaces::msg::ArmControl msg_;
};

class Init_ArmControl_axis_0
{
public:
  Init_ArmControl_axis_0()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ArmControl_axis_1 axis_0(::arm_interfaces::msg::ArmControl::_axis_0_type arg)
  {
    msg_.axis_0 = std::move(arg);
    return Init_ArmControl_axis_1(msg_);
  }

private:
  ::arm_interfaces::msg::ArmControl msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::arm_interfaces::msg::ArmControl>()
{
  return arm_interfaces::msg::builder::Init_ArmControl_axis_0();
}

}  // namespace arm_interfaces

#endif  // ARM_INTERFACES__MSG__DETAIL__ARM_CONTROL__BUILDER_HPP_
