// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from arm_interfaces:msg/Telemetry.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "arm_interfaces/msg/telemetry.hpp"


#ifndef ARM_INTERFACES__MSG__DETAIL__TELEMETRY__BUILDER_HPP_
#define ARM_INTERFACES__MSG__DETAIL__TELEMETRY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "arm_interfaces/msg/detail/telemetry__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace arm_interfaces
{

namespace msg
{

namespace builder
{

class Init_Telemetry_accelerometer
{
public:
  explicit Init_Telemetry_accelerometer(::arm_interfaces::msg::Telemetry & msg)
  : msg_(msg)
  {}
  ::arm_interfaces::msg::Telemetry accelerometer(::arm_interfaces::msg::Telemetry::_accelerometer_type arg)
  {
    msg_.accelerometer = std::move(arg);
    return std::move(msg_);
  }

private:
  ::arm_interfaces::msg::Telemetry msg_;
};

class Init_Telemetry_pressure
{
public:
  explicit Init_Telemetry_pressure(::arm_interfaces::msg::Telemetry & msg)
  : msg_(msg)
  {}
  Init_Telemetry_accelerometer pressure(::arm_interfaces::msg::Telemetry::_pressure_type arg)
  {
    msg_.pressure = std::move(arg);
    return Init_Telemetry_accelerometer(msg_);
  }

private:
  ::arm_interfaces::msg::Telemetry msg_;
};

class Init_Telemetry_temperature
{
public:
  explicit Init_Telemetry_temperature(::arm_interfaces::msg::Telemetry & msg)
  : msg_(msg)
  {}
  Init_Telemetry_pressure temperature(::arm_interfaces::msg::Telemetry::_temperature_type arg)
  {
    msg_.temperature = std::move(arg);
    return Init_Telemetry_pressure(msg_);
  }

private:
  ::arm_interfaces::msg::Telemetry msg_;
};

class Init_Telemetry_altitude
{
public:
  Init_Telemetry_altitude()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Telemetry_temperature altitude(::arm_interfaces::msg::Telemetry::_altitude_type arg)
  {
    msg_.altitude = std::move(arg);
    return Init_Telemetry_temperature(msg_);
  }

private:
  ::arm_interfaces::msg::Telemetry msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::arm_interfaces::msg::Telemetry>()
{
  return arm_interfaces::msg::builder::Init_Telemetry_altitude();
}

}  // namespace arm_interfaces

#endif  // ARM_INTERFACES__MSG__DETAIL__TELEMETRY__BUILDER_HPP_
