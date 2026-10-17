// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from arm_interfaces:msg/ArmControl.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "arm_interfaces/msg/arm_control.h"


#ifndef ARM_INTERFACES__MSG__DETAIL__ARM_CONTROL__STRUCT_H_
#define ARM_INTERFACES__MSG__DETAIL__ARM_CONTROL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/ArmControl in the package arm_interfaces.
typedef struct arm_interfaces__msg__ArmControl
{
  double axis_0;
  double axis_1;
  double axis_2;
  double axis_3;
  double claw;
} arm_interfaces__msg__ArmControl;

// Struct for a sequence of arm_interfaces__msg__ArmControl.
typedef struct arm_interfaces__msg__ArmControl__Sequence
{
  arm_interfaces__msg__ArmControl * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} arm_interfaces__msg__ArmControl__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ARM_INTERFACES__MSG__DETAIL__ARM_CONTROL__STRUCT_H_
