// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from arm_interfaces:msg/ArmControl.idl
// generated code does not contain a copyright notice
#include "arm_interfaces/msg/detail/arm_control__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "arm_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "arm_interfaces/msg/detail/arm_control__struct.h"
#include "arm_interfaces/msg/detail/arm_control__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _ArmControl__ros_msg_type = arm_interfaces__msg__ArmControl;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_arm_interfaces
bool cdr_serialize_arm_interfaces__msg__ArmControl(
  const arm_interfaces__msg__ArmControl * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: axis_0
  {
    cdr << ros_message->axis_0;
  }

  // Field name: axis_1
  {
    cdr << ros_message->axis_1;
  }

  // Field name: axis_2
  {
    cdr << ros_message->axis_2;
  }

  // Field name: axis_3
  {
    cdr << ros_message->axis_3;
  }

  // Field name: claw
  {
    cdr << ros_message->claw;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_arm_interfaces
bool cdr_deserialize_arm_interfaces__msg__ArmControl(
  eprosima::fastcdr::Cdr & cdr,
  arm_interfaces__msg__ArmControl * ros_message)
{
  // Field name: axis_0
  {
    cdr >> ros_message->axis_0;
  }

  // Field name: axis_1
  {
    cdr >> ros_message->axis_1;
  }

  // Field name: axis_2
  {
    cdr >> ros_message->axis_2;
  }

  // Field name: axis_3
  {
    cdr >> ros_message->axis_3;
  }

  // Field name: claw
  {
    cdr >> ros_message->claw;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_arm_interfaces
size_t get_serialized_size_arm_interfaces__msg__ArmControl(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ArmControl__ros_msg_type * ros_message = static_cast<const _ArmControl__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: axis_0
  {
    size_t item_size = sizeof(ros_message->axis_0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: axis_1
  {
    size_t item_size = sizeof(ros_message->axis_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: axis_2
  {
    size_t item_size = sizeof(ros_message->axis_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: axis_3
  {
    size_t item_size = sizeof(ros_message->axis_3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: claw
  {
    size_t item_size = sizeof(ros_message->claw);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_arm_interfaces
size_t max_serialized_size_arm_interfaces__msg__ArmControl(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: axis_0
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: axis_1
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: axis_2
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: axis_3
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: claw
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = arm_interfaces__msg__ArmControl;
    is_plain =
      (
      offsetof(DataType, claw) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_arm_interfaces
bool cdr_serialize_key_arm_interfaces__msg__ArmControl(
  const arm_interfaces__msg__ArmControl * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: axis_0
  {
    cdr << ros_message->axis_0;
  }

  // Field name: axis_1
  {
    cdr << ros_message->axis_1;
  }

  // Field name: axis_2
  {
    cdr << ros_message->axis_2;
  }

  // Field name: axis_3
  {
    cdr << ros_message->axis_3;
  }

  // Field name: claw
  {
    cdr << ros_message->claw;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_arm_interfaces
size_t get_serialized_size_key_arm_interfaces__msg__ArmControl(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ArmControl__ros_msg_type * ros_message = static_cast<const _ArmControl__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: axis_0
  {
    size_t item_size = sizeof(ros_message->axis_0);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: axis_1
  {
    size_t item_size = sizeof(ros_message->axis_1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: axis_2
  {
    size_t item_size = sizeof(ros_message->axis_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: axis_3
  {
    size_t item_size = sizeof(ros_message->axis_3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: claw
  {
    size_t item_size = sizeof(ros_message->claw);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_arm_interfaces
size_t max_serialized_size_key_arm_interfaces__msg__ArmControl(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: axis_0
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: axis_1
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: axis_2
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: axis_3
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: claw
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = arm_interfaces__msg__ArmControl;
    is_plain =
      (
      offsetof(DataType, claw) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _ArmControl__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const arm_interfaces__msg__ArmControl * ros_message = static_cast<const arm_interfaces__msg__ArmControl *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_arm_interfaces__msg__ArmControl(ros_message, cdr);
}

static bool _ArmControl__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  arm_interfaces__msg__ArmControl * ros_message = static_cast<arm_interfaces__msg__ArmControl *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_arm_interfaces__msg__ArmControl(cdr, ros_message);
}

static uint32_t _ArmControl__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_arm_interfaces__msg__ArmControl(
      untyped_ros_message, 0));
}

static size_t _ArmControl__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_arm_interfaces__msg__ArmControl(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ArmControl = {
  "arm_interfaces::msg",
  "ArmControl",
  _ArmControl__cdr_serialize,
  _ArmControl__cdr_deserialize,
  _ArmControl__get_serialized_size,
  _ArmControl__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _ArmControl__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ArmControl,
  get_message_typesupport_handle_function,
  &arm_interfaces__msg__ArmControl__get_type_hash,
  &arm_interfaces__msg__ArmControl__get_type_description,
  &arm_interfaces__msg__ArmControl__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, arm_interfaces, msg, ArmControl)() {
  return &_ArmControl__type_support;
}

#if defined(__cplusplus)
}
#endif
