// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from arm_interfaces:msg/Telemetry.idl
// generated code does not contain a copyright notice

#include "arm_interfaces/msg/detail/telemetry__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_arm_interfaces
const rosidl_type_hash_t *
arm_interfaces__msg__Telemetry__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x35, 0x29, 0xf3, 0xc3, 0xb5, 0x3a, 0xa0, 0xd9,
      0x83, 0x38, 0x88, 0x9b, 0x5c, 0xb2, 0x57, 0x1b,
      0x45, 0x08, 0x2a, 0x1c, 0x73, 0x51, 0xb7, 0x3d,
      0x82, 0x57, 0xec, 0x28, 0x36, 0x95, 0xdb, 0x92,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "geometry_msgs/msg/detail/vector3__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t geometry_msgs__msg__Vector3__EXPECTED_HASH = {1, {
    0xcc, 0x12, 0xfe, 0x83, 0xe4, 0xc0, 0x27, 0x19,
    0xf1, 0xce, 0x80, 0x70, 0xbf, 0xd1, 0x4a, 0xec,
    0xd4, 0x0f, 0x75, 0xa9, 0x66, 0x96, 0xa6, 0x7a,
    0x2a, 0x1f, 0x37, 0xf7, 0xdb, 0xb0, 0x76, 0x5d,
  }};
#endif

static char arm_interfaces__msg__Telemetry__TYPE_NAME[] = "arm_interfaces/msg/Telemetry";
static char geometry_msgs__msg__Vector3__TYPE_NAME[] = "geometry_msgs/msg/Vector3";

// Define type names, field names, and default values
static char arm_interfaces__msg__Telemetry__FIELD_NAME__altitude[] = "altitude";
static char arm_interfaces__msg__Telemetry__FIELD_NAME__temperature[] = "temperature";
static char arm_interfaces__msg__Telemetry__FIELD_NAME__pressure[] = "pressure";
static char arm_interfaces__msg__Telemetry__FIELD_NAME__accelerometer[] = "accelerometer";

static rosidl_runtime_c__type_description__Field arm_interfaces__msg__Telemetry__FIELDS[] = {
  {
    {arm_interfaces__msg__Telemetry__FIELD_NAME__altitude, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {arm_interfaces__msg__Telemetry__FIELD_NAME__temperature, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {arm_interfaces__msg__Telemetry__FIELD_NAME__pressure, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {arm_interfaces__msg__Telemetry__FIELD_NAME__accelerometer, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {geometry_msgs__msg__Vector3__TYPE_NAME, 25, 25},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription arm_interfaces__msg__Telemetry__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {geometry_msgs__msg__Vector3__TYPE_NAME, 25, 25},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
arm_interfaces__msg__Telemetry__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {arm_interfaces__msg__Telemetry__TYPE_NAME, 28, 28},
      {arm_interfaces__msg__Telemetry__FIELDS, 4, 4},
    },
    {arm_interfaces__msg__Telemetry__REFERENCED_TYPE_DESCRIPTIONS, 1, 1},
  };
  if (!constructed) {
    assert(0 == memcmp(&geometry_msgs__msg__Vector3__EXPECTED_HASH, geometry_msgs__msg__Vector3__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = geometry_msgs__msg__Vector3__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float64 altitude\n"
  "float64 temperature\n"
  "float64 pressure\n"
  "\n"
  "geometry_msgs/Vector3 accelerometer";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
arm_interfaces__msg__Telemetry__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {arm_interfaces__msg__Telemetry__TYPE_NAME, 28, 28},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 90, 90},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
arm_interfaces__msg__Telemetry__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[2];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 2, 2};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *arm_interfaces__msg__Telemetry__get_individual_type_description_source(NULL),
    sources[1] = *geometry_msgs__msg__Vector3__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
