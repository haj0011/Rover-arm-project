// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from arm_interfaces:msg/Telemetry.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "arm_interfaces/msg/detail/telemetry__rosidl_typesupport_introspection_c.h"
#include "arm_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "arm_interfaces/msg/detail/telemetry__functions.h"
#include "arm_interfaces/msg/detail/telemetry__struct.h"


// Include directives for member types
// Member `accelerometer`
#include "geometry_msgs/msg/vector3.h"
// Member `accelerometer`
#include "geometry_msgs/msg/detail/vector3__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void arm_interfaces__msg__Telemetry__rosidl_typesupport_introspection_c__Telemetry_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  arm_interfaces__msg__Telemetry__init(message_memory);
}

void arm_interfaces__msg__Telemetry__rosidl_typesupport_introspection_c__Telemetry_fini_function(void * message_memory)
{
  arm_interfaces__msg__Telemetry__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember arm_interfaces__msg__Telemetry__rosidl_typesupport_introspection_c__Telemetry_message_member_array[4] = {
  {
    "altitude",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arm_interfaces__msg__Telemetry, altitude),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "temperature",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arm_interfaces__msg__Telemetry, temperature),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pressure",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arm_interfaces__msg__Telemetry, pressure),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "accelerometer",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arm_interfaces__msg__Telemetry, accelerometer),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers arm_interfaces__msg__Telemetry__rosidl_typesupport_introspection_c__Telemetry_message_members = {
  "arm_interfaces__msg",  // message namespace
  "Telemetry",  // message name
  4,  // number of fields
  sizeof(arm_interfaces__msg__Telemetry),
  false,  // has_any_key_member_
  arm_interfaces__msg__Telemetry__rosidl_typesupport_introspection_c__Telemetry_message_member_array,  // message members
  arm_interfaces__msg__Telemetry__rosidl_typesupport_introspection_c__Telemetry_init_function,  // function to initialize message memory (memory has to be allocated)
  arm_interfaces__msg__Telemetry__rosidl_typesupport_introspection_c__Telemetry_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t arm_interfaces__msg__Telemetry__rosidl_typesupport_introspection_c__Telemetry_message_type_support_handle = {
  0,
  &arm_interfaces__msg__Telemetry__rosidl_typesupport_introspection_c__Telemetry_message_members,
  get_message_typesupport_handle_function,
  &arm_interfaces__msg__Telemetry__get_type_hash,
  &arm_interfaces__msg__Telemetry__get_type_description,
  &arm_interfaces__msg__Telemetry__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_arm_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, arm_interfaces, msg, Telemetry)() {
  arm_interfaces__msg__Telemetry__rosidl_typesupport_introspection_c__Telemetry_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  if (!arm_interfaces__msg__Telemetry__rosidl_typesupport_introspection_c__Telemetry_message_type_support_handle.typesupport_identifier) {
    arm_interfaces__msg__Telemetry__rosidl_typesupport_introspection_c__Telemetry_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &arm_interfaces__msg__Telemetry__rosidl_typesupport_introspection_c__Telemetry_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
