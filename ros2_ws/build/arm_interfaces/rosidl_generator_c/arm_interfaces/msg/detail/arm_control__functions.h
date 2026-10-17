// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from arm_interfaces:msg/ArmControl.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "arm_interfaces/msg/arm_control.h"


#ifndef ARM_INTERFACES__MSG__DETAIL__ARM_CONTROL__FUNCTIONS_H_
#define ARM_INTERFACES__MSG__DETAIL__ARM_CONTROL__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/type_description/type_description__struct.h"
#include "rosidl_runtime_c/type_description/type_source__struct.h"
#include "rosidl_runtime_c/type_hash.h"
#include "rosidl_runtime_c/visibility_control.h"
#include "arm_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "arm_interfaces/msg/detail/arm_control__struct.h"

/// Initialize msg/ArmControl message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * arm_interfaces__msg__ArmControl
 * )) before or use
 * arm_interfaces__msg__ArmControl__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_arm_interfaces
bool
arm_interfaces__msg__ArmControl__init(arm_interfaces__msg__ArmControl * msg);

/// Finalize msg/ArmControl message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_arm_interfaces
void
arm_interfaces__msg__ArmControl__fini(arm_interfaces__msg__ArmControl * msg);

/// Create msg/ArmControl message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * arm_interfaces__msg__ArmControl__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_arm_interfaces
arm_interfaces__msg__ArmControl *
arm_interfaces__msg__ArmControl__create(void);

/// Destroy msg/ArmControl message.
/**
 * It calls
 * arm_interfaces__msg__ArmControl__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_arm_interfaces
void
arm_interfaces__msg__ArmControl__destroy(arm_interfaces__msg__ArmControl * msg);

/// Check for msg/ArmControl message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_arm_interfaces
bool
arm_interfaces__msg__ArmControl__are_equal(const arm_interfaces__msg__ArmControl * lhs, const arm_interfaces__msg__ArmControl * rhs);

/// Copy a msg/ArmControl message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_arm_interfaces
bool
arm_interfaces__msg__ArmControl__copy(
  const arm_interfaces__msg__ArmControl * input,
  arm_interfaces__msg__ArmControl * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_arm_interfaces
const rosidl_type_hash_t *
arm_interfaces__msg__ArmControl__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_arm_interfaces
const rosidl_runtime_c__type_description__TypeDescription *
arm_interfaces__msg__ArmControl__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_arm_interfaces
const rosidl_runtime_c__type_description__TypeSource *
arm_interfaces__msg__ArmControl__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_arm_interfaces
const rosidl_runtime_c__type_description__TypeSource__Sequence *
arm_interfaces__msg__ArmControl__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of msg/ArmControl messages.
/**
 * It allocates the memory for the number of elements and calls
 * arm_interfaces__msg__ArmControl__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_arm_interfaces
bool
arm_interfaces__msg__ArmControl__Sequence__init(arm_interfaces__msg__ArmControl__Sequence * array, size_t size);

/// Finalize array of msg/ArmControl messages.
/**
 * It calls
 * arm_interfaces__msg__ArmControl__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_arm_interfaces
void
arm_interfaces__msg__ArmControl__Sequence__fini(arm_interfaces__msg__ArmControl__Sequence * array);

/// Create array of msg/ArmControl messages.
/**
 * It allocates the memory for the array and calls
 * arm_interfaces__msg__ArmControl__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_arm_interfaces
arm_interfaces__msg__ArmControl__Sequence *
arm_interfaces__msg__ArmControl__Sequence__create(size_t size);

/// Destroy array of msg/ArmControl messages.
/**
 * It calls
 * arm_interfaces__msg__ArmControl__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_arm_interfaces
void
arm_interfaces__msg__ArmControl__Sequence__destroy(arm_interfaces__msg__ArmControl__Sequence * array);

/// Check for msg/ArmControl message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_arm_interfaces
bool
arm_interfaces__msg__ArmControl__Sequence__are_equal(const arm_interfaces__msg__ArmControl__Sequence * lhs, const arm_interfaces__msg__ArmControl__Sequence * rhs);

/// Copy an array of msg/ArmControl messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_arm_interfaces
bool
arm_interfaces__msg__ArmControl__Sequence__copy(
  const arm_interfaces__msg__ArmControl__Sequence * input,
  arm_interfaces__msg__ArmControl__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ARM_INTERFACES__MSG__DETAIL__ARM_CONTROL__FUNCTIONS_H_
