// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from arm_interfaces:msg/Telemetry.idl
// generated code does not contain a copyright notice
#include "arm_interfaces/msg/detail/telemetry__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `accelerometer`
#include "geometry_msgs/msg/detail/vector3__functions.h"

bool
arm_interfaces__msg__Telemetry__init(arm_interfaces__msg__Telemetry * msg)
{
  if (!msg) {
    return false;
  }
  // altitude
  // temperature
  // pressure
  // accelerometer
  if (!geometry_msgs__msg__Vector3__init(&msg->accelerometer)) {
    arm_interfaces__msg__Telemetry__fini(msg);
    return false;
  }
  return true;
}

void
arm_interfaces__msg__Telemetry__fini(arm_interfaces__msg__Telemetry * msg)
{
  if (!msg) {
    return;
  }
  // altitude
  // temperature
  // pressure
  // accelerometer
  geometry_msgs__msg__Vector3__fini(&msg->accelerometer);
}

bool
arm_interfaces__msg__Telemetry__are_equal(const arm_interfaces__msg__Telemetry * lhs, const arm_interfaces__msg__Telemetry * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // altitude
  if (lhs->altitude != rhs->altitude) {
    return false;
  }
  // temperature
  if (lhs->temperature != rhs->temperature) {
    return false;
  }
  // pressure
  if (lhs->pressure != rhs->pressure) {
    return false;
  }
  // accelerometer
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->accelerometer), &(rhs->accelerometer)))
  {
    return false;
  }
  return true;
}

bool
arm_interfaces__msg__Telemetry__copy(
  const arm_interfaces__msg__Telemetry * input,
  arm_interfaces__msg__Telemetry * output)
{
  if (!input || !output) {
    return false;
  }
  // altitude
  output->altitude = input->altitude;
  // temperature
  output->temperature = input->temperature;
  // pressure
  output->pressure = input->pressure;
  // accelerometer
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->accelerometer), &(output->accelerometer)))
  {
    return false;
  }
  return true;
}

arm_interfaces__msg__Telemetry *
arm_interfaces__msg__Telemetry__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arm_interfaces__msg__Telemetry * msg = (arm_interfaces__msg__Telemetry *)allocator.allocate(sizeof(arm_interfaces__msg__Telemetry), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(arm_interfaces__msg__Telemetry));
  bool success = arm_interfaces__msg__Telemetry__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
arm_interfaces__msg__Telemetry__destroy(arm_interfaces__msg__Telemetry * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    arm_interfaces__msg__Telemetry__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
arm_interfaces__msg__Telemetry__Sequence__init(arm_interfaces__msg__Telemetry__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arm_interfaces__msg__Telemetry * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(arm_interfaces__msg__Telemetry)) {
      return false;
    }
    data = (arm_interfaces__msg__Telemetry *)allocator.zero_allocate(size, sizeof(arm_interfaces__msg__Telemetry), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = arm_interfaces__msg__Telemetry__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        arm_interfaces__msg__Telemetry__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
arm_interfaces__msg__Telemetry__Sequence__fini(arm_interfaces__msg__Telemetry__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      arm_interfaces__msg__Telemetry__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

arm_interfaces__msg__Telemetry__Sequence *
arm_interfaces__msg__Telemetry__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arm_interfaces__msg__Telemetry__Sequence * array = (arm_interfaces__msg__Telemetry__Sequence *)allocator.allocate(sizeof(arm_interfaces__msg__Telemetry__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = arm_interfaces__msg__Telemetry__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
arm_interfaces__msg__Telemetry__Sequence__destroy(arm_interfaces__msg__Telemetry__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    arm_interfaces__msg__Telemetry__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
arm_interfaces__msg__Telemetry__Sequence__are_equal(const arm_interfaces__msg__Telemetry__Sequence * lhs, const arm_interfaces__msg__Telemetry__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!arm_interfaces__msg__Telemetry__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
arm_interfaces__msg__Telemetry__Sequence__copy(
  const arm_interfaces__msg__Telemetry__Sequence * input,
  arm_interfaces__msg__Telemetry__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(arm_interfaces__msg__Telemetry)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(arm_interfaces__msg__Telemetry);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    arm_interfaces__msg__Telemetry * data =
      (arm_interfaces__msg__Telemetry *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!arm_interfaces__msg__Telemetry__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          arm_interfaces__msg__Telemetry__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!arm_interfaces__msg__Telemetry__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
