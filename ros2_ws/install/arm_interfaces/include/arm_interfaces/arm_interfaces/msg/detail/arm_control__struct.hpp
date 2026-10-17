// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from arm_interfaces:msg/ArmControl.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "arm_interfaces/msg/arm_control.hpp"


#ifndef ARM_INTERFACES__MSG__DETAIL__ARM_CONTROL__STRUCT_HPP_
#define ARM_INTERFACES__MSG__DETAIL__ARM_CONTROL__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__arm_interfaces__msg__ArmControl __attribute__((deprecated))
#else
# define DEPRECATED__arm_interfaces__msg__ArmControl __declspec(deprecated)
#endif

namespace arm_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ArmControl_
{
  using Type = ArmControl_<ContainerAllocator>;

  explicit ArmControl_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->axis_0 = 0.0;
      this->axis_1 = 0.0;
      this->axis_2 = 0.0;
      this->axis_3 = 0.0;
      this->claw = 0.0;
    }
  }

  explicit ArmControl_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->axis_0 = 0.0;
      this->axis_1 = 0.0;
      this->axis_2 = 0.0;
      this->axis_3 = 0.0;
      this->claw = 0.0;
    }
  }

  // field types and members
  using _axis_0_type =
    double;
  _axis_0_type axis_0;
  using _axis_1_type =
    double;
  _axis_1_type axis_1;
  using _axis_2_type =
    double;
  _axis_2_type axis_2;
  using _axis_3_type =
    double;
  _axis_3_type axis_3;
  using _claw_type =
    double;
  _claw_type claw;

  // setters for named parameter idiom
  Type & set__axis_0(
    const double & _arg)
  {
    this->axis_0 = _arg;
    return *this;
  }
  Type & set__axis_1(
    const double & _arg)
  {
    this->axis_1 = _arg;
    return *this;
  }
  Type & set__axis_2(
    const double & _arg)
  {
    this->axis_2 = _arg;
    return *this;
  }
  Type & set__axis_3(
    const double & _arg)
  {
    this->axis_3 = _arg;
    return *this;
  }
  Type & set__claw(
    const double & _arg)
  {
    this->claw = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    arm_interfaces::msg::ArmControl_<ContainerAllocator> *;
  using ConstRawPtr =
    const arm_interfaces::msg::ArmControl_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<arm_interfaces::msg::ArmControl_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<arm_interfaces::msg::ArmControl_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      arm_interfaces::msg::ArmControl_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<arm_interfaces::msg::ArmControl_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      arm_interfaces::msg::ArmControl_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<arm_interfaces::msg::ArmControl_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<arm_interfaces::msg::ArmControl_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<arm_interfaces::msg::ArmControl_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__arm_interfaces__msg__ArmControl
    std::shared_ptr<arm_interfaces::msg::ArmControl_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__arm_interfaces__msg__ArmControl
    std::shared_ptr<arm_interfaces::msg::ArmControl_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ArmControl_ & other) const
  {
    if (this->axis_0 != other.axis_0) {
      return false;
    }
    if (this->axis_1 != other.axis_1) {
      return false;
    }
    if (this->axis_2 != other.axis_2) {
      return false;
    }
    if (this->axis_3 != other.axis_3) {
      return false;
    }
    if (this->claw != other.claw) {
      return false;
    }
    return true;
  }
  bool operator!=(const ArmControl_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ArmControl_

// alias to use template instance with default allocator
using ArmControl =
  arm_interfaces::msg::ArmControl_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace arm_interfaces

#endif  // ARM_INTERFACES__MSG__DETAIL__ARM_CONTROL__STRUCT_HPP_
