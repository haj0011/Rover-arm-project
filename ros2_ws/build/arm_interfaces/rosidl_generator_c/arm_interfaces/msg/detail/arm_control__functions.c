// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from arm_interfaces:msg/ArmControl.idl
// generated code does not contain a copyright notice
#include "arm_interfaces/msg/detail/arm_control__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
arm_interfaces__msg__ArmControl__init(arm_interfaces__msg__ArmControl * msg)
{
  if (!msg) {
    return false;
  }
  // axis_0
  // axis_1
  // axis_2
  // axis_3
  // claw
  return true;
}

void
arm_interfaces__msg__ArmControl__fini(arm_interfaces__msg__ArmControl * msg)
{
  if (!msg) {
    return;
  }
  // axis_0
  // axis_1
  // axis_2
  // axis_3
  // claw
}

bool
arm_interfaces__msg__ArmControl__are_equal(const arm_interfaces__msg__ArmControl * lhs, const arm_interfaces__msg__ArmControl * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // axis_0
  if (lhs->axis_0 != rhs->axis_0) {
    return false;
  }
  // axis_1
  if (lhs->axis_1 != rhs->axis_1) {
    return false;
  }
  // axis_2
  if (lhs->axis_2 != rhs->axis_2) {
    return false;
  }
  // axis_3
  if (lhs->axis_3 != rhs->axis_3) {
    return false;
  }
  // claw
  if (lhs->claw != rhs->claw) {
    return false;
  }
  return true;
}

bool
arm_interfaces__msg__ArmControl__copy(
  const arm_interfaces__msg__ArmControl * input,
  arm_interfaces__msg__ArmControl * output)
{
  if (!input || !output) {
    return false;
  }
  // axis_0
  output->axis_0 = input->axis_0;
  // axis_1
  output->axis_1 = input->axis_1;
  // axis_2
  output->axis_2 = input->axis_2;
  // axis_3
  output->axis_3 = input->axis_3;
  // claw
  output->claw = input->claw;
  return true;
}

arm_interfaces__msg__ArmControl *
arm_interfaces__msg__ArmControl__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arm_interfaces__msg__ArmControl * msg = (arm_interfaces__msg__ArmControl *)allocator.allocate(sizeof(arm_interfaces__msg__ArmControl), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(arm_interfaces__msg__ArmControl));
  bool success = arm_interfaces__msg__ArmControl__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
arm_interfaces__msg__ArmControl__destroy(arm_interfaces__msg__ArmControl * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    arm_interfaces__msg__ArmControl__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
arm_interfaces__msg__ArmControl__Sequence__init(arm_interfaces__msg__ArmControl__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arm_interfaces__msg__ArmControl * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(arm_interfaces__msg__ArmControl)) {
      return false;
    }
    data = (arm_interfaces__msg__ArmControl *)allocator.zero_allocate(size, sizeof(arm_interfaces__msg__ArmControl), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = arm_interfaces__msg__ArmControl__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        arm_interfaces__msg__ArmControl__fini(&data[i - 1]);
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
arm_interfaces__msg__ArmControl__Sequence__fini(arm_interfaces__msg__ArmControl__Sequence * array)
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
      arm_interfaces__msg__ArmControl__fini(&array->data[i]);
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

arm_interfaces__msg__ArmControl__Sequence *
arm_interfaces__msg__ArmControl__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arm_interfaces__msg__ArmControl__Sequence * array = (arm_interfaces__msg__ArmControl__Sequence *)allocator.allocate(sizeof(arm_interfaces__msg__ArmControl__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = arm_interfaces__msg__ArmControl__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
arm_interfaces__msg__ArmControl__Sequence__destroy(arm_interfaces__msg__ArmControl__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    arm_interfaces__msg__ArmControl__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
arm_interfaces__msg__ArmControl__Sequence__are_equal(const arm_interfaces__msg__ArmControl__Sequence * lhs, const arm_interfaces__msg__ArmControl__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!arm_interfaces__msg__ArmControl__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
arm_interfaces__msg__ArmControl__Sequence__copy(
  const arm_interfaces__msg__ArmControl__Sequence * input,
  arm_interfaces__msg__ArmControl__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(arm_interfaces__msg__ArmControl)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(arm_interfaces__msg__ArmControl);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    arm_interfaces__msg__ArmControl * data =
      (arm_interfaces__msg__ArmControl *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!arm_interfaces__msg__ArmControl__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          arm_interfaces__msg__ArmControl__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!arm_interfaces__msg__ArmControl__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
