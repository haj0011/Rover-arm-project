// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from arm_interfaces:msg/ArmControl.idl
// generated code does not contain a copyright notice
#ifndef ARM_INTERFACES__MSG__DETAIL__ARM_CONTROL__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define ARM_INTERFACES__MSG__DETAIL__ARM_CONTROL__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "arm_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "arm_interfaces/msg/detail/arm_control__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_arm_interfaces
bool cdr_serialize_arm_interfaces__msg__ArmControl(
  const arm_interfaces__msg__ArmControl * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_arm_interfaces
bool cdr_deserialize_arm_interfaces__msg__ArmControl(
  eprosima::fastcdr::Cdr &,
  arm_interfaces__msg__ArmControl * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_arm_interfaces
size_t get_serialized_size_arm_interfaces__msg__ArmControl(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_arm_interfaces
size_t max_serialized_size_arm_interfaces__msg__ArmControl(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_arm_interfaces
bool cdr_serialize_key_arm_interfaces__msg__ArmControl(
  const arm_interfaces__msg__ArmControl * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_arm_interfaces
size_t get_serialized_size_key_arm_interfaces__msg__ArmControl(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_arm_interfaces
size_t max_serialized_size_key_arm_interfaces__msg__ArmControl(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_arm_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, arm_interfaces, msg, ArmControl)();

#ifdef __cplusplus
}
#endif

#endif  // ARM_INTERFACES__MSG__DETAIL__ARM_CONTROL__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
