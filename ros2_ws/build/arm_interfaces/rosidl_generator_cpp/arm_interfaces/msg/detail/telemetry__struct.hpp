// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from arm_interfaces:msg/Telemetry.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "arm_interfaces/msg/telemetry.hpp"


#ifndef ARM_INTERFACES__MSG__DETAIL__TELEMETRY__STRUCT_HPP_
#define ARM_INTERFACES__MSG__DETAIL__TELEMETRY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'accelerometer'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__arm_interfaces__msg__Telemetry __attribute__((deprecated))
#else
# define DEPRECATED__arm_interfaces__msg__Telemetry __declspec(deprecated)
#endif

namespace arm_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Telemetry_
{
  using Type = Telemetry_<ContainerAllocator>;

  explicit Telemetry_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : accelerometer(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->altitude = 0.0;
      this->temperature = 0.0;
      this->pressure = 0.0;
    }
  }

  explicit Telemetry_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : accelerometer(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->altitude = 0.0;
      this->temperature = 0.0;
      this->pressure = 0.0;
    }
  }

  // field types and members
  using _altitude_type =
    double;
  _altitude_type altitude;
  using _temperature_type =
    double;
  _temperature_type temperature;
  using _pressure_type =
    double;
  _pressure_type pressure;
  using _accelerometer_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _accelerometer_type accelerometer;

  // setters for named parameter idiom
  Type & set__altitude(
    const double & _arg)
  {
    this->altitude = _arg;
    return *this;
  }
  Type & set__temperature(
    const double & _arg)
  {
    this->temperature = _arg;
    return *this;
  }
  Type & set__pressure(
    const double & _arg)
  {
    this->pressure = _arg;
    return *this;
  }
  Type & set__accelerometer(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->accelerometer = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    arm_interfaces::msg::Telemetry_<ContainerAllocator> *;
  using ConstRawPtr =
    const arm_interfaces::msg::Telemetry_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<arm_interfaces::msg::Telemetry_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<arm_interfaces::msg::Telemetry_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      arm_interfaces::msg::Telemetry_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<arm_interfaces::msg::Telemetry_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      arm_interfaces::msg::Telemetry_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<arm_interfaces::msg::Telemetry_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<arm_interfaces::msg::Telemetry_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<arm_interfaces::msg::Telemetry_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__arm_interfaces__msg__Telemetry
    std::shared_ptr<arm_interfaces::msg::Telemetry_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__arm_interfaces__msg__Telemetry
    std::shared_ptr<arm_interfaces::msg::Telemetry_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Telemetry_ & other) const
  {
    if (this->altitude != other.altitude) {
      return false;
    }
    if (this->temperature != other.temperature) {
      return false;
    }
    if (this->pressure != other.pressure) {
      return false;
    }
    if (this->accelerometer != other.accelerometer) {
      return false;
    }
    return true;
  }
  bool operator!=(const Telemetry_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Telemetry_

// alias to use template instance with default allocator
using Telemetry =
  arm_interfaces::msg::Telemetry_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace arm_interfaces

#endif  // ARM_INTERFACES__MSG__DETAIL__TELEMETRY__STRUCT_HPP_
