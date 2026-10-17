// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from arm_interfaces:msg/Telemetry.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "arm_interfaces/msg/telemetry.h"


#ifndef ARM_INTERFACES__MSG__DETAIL__TELEMETRY__STRUCT_H_
#define ARM_INTERFACES__MSG__DETAIL__TELEMETRY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'accelerometer'
#include "geometry_msgs/msg/detail/vector3__struct.h"

/// Struct defined in msg/Telemetry in the package arm_interfaces.
typedef struct arm_interfaces__msg__Telemetry
{
  double altitude;
  double temperature;
  double pressure;
  geometry_msgs__msg__Vector3 accelerometer;
} arm_interfaces__msg__Telemetry;

// Struct for a sequence of arm_interfaces__msg__Telemetry.
typedef struct arm_interfaces__msg__Telemetry__Sequence
{
  arm_interfaces__msg__Telemetry * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} arm_interfaces__msg__Telemetry__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ARM_INTERFACES__MSG__DETAIL__TELEMETRY__STRUCT_H_
