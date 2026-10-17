// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from arm_interfaces:msg/ArmControl.idl
// generated code does not contain a copyright notice

#include "arm_interfaces/msg/detail/arm_control__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_arm_interfaces
const rosidl_type_hash_t *
arm_interfaces__msg__ArmControl__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x66, 0xeb, 0x6f, 0x16, 0xd7, 0xfe, 0x1b, 0x79,
      0xa8, 0x28, 0xc2, 0xdc, 0x64, 0xaa, 0x29, 0x0f,
      0x67, 0x9d, 0xb3, 0xd1, 0x39, 0x7a, 0xd1, 0x35,
      0x7c, 0x34, 0x8d, 0x75, 0x51, 0xc7, 0xe6, 0x29,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char arm_interfaces__msg__ArmControl__TYPE_NAME[] = "arm_interfaces/msg/ArmControl";

// Define type names, field names, and default values
static char arm_interfaces__msg__ArmControl__FIELD_NAME__axis_0[] = "axis_0";
static char arm_interfaces__msg__ArmControl__FIELD_NAME__axis_1[] = "axis_1";
static char arm_interfaces__msg__ArmControl__FIELD_NAME__axis_2[] = "axis_2";
static char arm_interfaces__msg__ArmControl__FIELD_NAME__axis_3[] = "axis_3";
static char arm_interfaces__msg__ArmControl__FIELD_NAME__claw[] = "claw";

static rosidl_runtime_c__type_description__Field arm_interfaces__msg__ArmControl__FIELDS[] = {
  {
    {arm_interfaces__msg__ArmControl__FIELD_NAME__axis_0, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {arm_interfaces__msg__ArmControl__FIELD_NAME__axis_1, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {arm_interfaces__msg__ArmControl__FIELD_NAME__axis_2, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {arm_interfaces__msg__ArmControl__FIELD_NAME__axis_3, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {arm_interfaces__msg__ArmControl__FIELD_NAME__claw, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
arm_interfaces__msg__ArmControl__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {arm_interfaces__msg__ArmControl__TYPE_NAME, 29, 29},
      {arm_interfaces__msg__ArmControl__FIELDS, 5, 5},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float64 axis_0\n"
  "float64 axis_1\n"
  "float64 axis_2\n"
  "float64 axis_3\n"
  "float64 claw";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
arm_interfaces__msg__ArmControl__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {arm_interfaces__msg__ArmControl__TYPE_NAME, 29, 29},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 72, 72},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
arm_interfaces__msg__ArmControl__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *arm_interfaces__msg__ArmControl__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
