// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from tide_msgs:msg/RefereeData.idl
// generated code does not contain a copyright notice

#ifndef TIDE_MSGS__MSG__DETAIL__REFEREE_DATA__FUNCTIONS_H_
#define TIDE_MSGS__MSG__DETAIL__REFEREE_DATA__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "tide_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "tide_msgs/msg/detail/referee_data__struct.h"

/// Initialize msg/RefereeData message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * tide_msgs__msg__RefereeData
 * )) before or use
 * tide_msgs__msg__RefereeData__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_tide_msgs
bool
tide_msgs__msg__RefereeData__init(tide_msgs__msg__RefereeData * msg);

/// Finalize msg/RefereeData message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tide_msgs
void
tide_msgs__msg__RefereeData__fini(tide_msgs__msg__RefereeData * msg);

/// Create msg/RefereeData message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * tide_msgs__msg__RefereeData__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tide_msgs
tide_msgs__msg__RefereeData *
tide_msgs__msg__RefereeData__create();

/// Destroy msg/RefereeData message.
/**
 * It calls
 * tide_msgs__msg__RefereeData__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tide_msgs
void
tide_msgs__msg__RefereeData__destroy(tide_msgs__msg__RefereeData * msg);

/// Check for msg/RefereeData message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tide_msgs
bool
tide_msgs__msg__RefereeData__are_equal(const tide_msgs__msg__RefereeData * lhs, const tide_msgs__msg__RefereeData * rhs);

/// Copy a msg/RefereeData message.
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
ROSIDL_GENERATOR_C_PUBLIC_tide_msgs
bool
tide_msgs__msg__RefereeData__copy(
  const tide_msgs__msg__RefereeData * input,
  tide_msgs__msg__RefereeData * output);

/// Initialize array of msg/RefereeData messages.
/**
 * It allocates the memory for the number of elements and calls
 * tide_msgs__msg__RefereeData__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_tide_msgs
bool
tide_msgs__msg__RefereeData__Sequence__init(tide_msgs__msg__RefereeData__Sequence * array, size_t size);

/// Finalize array of msg/RefereeData messages.
/**
 * It calls
 * tide_msgs__msg__RefereeData__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tide_msgs
void
tide_msgs__msg__RefereeData__Sequence__fini(tide_msgs__msg__RefereeData__Sequence * array);

/// Create array of msg/RefereeData messages.
/**
 * It allocates the memory for the array and calls
 * tide_msgs__msg__RefereeData__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tide_msgs
tide_msgs__msg__RefereeData__Sequence *
tide_msgs__msg__RefereeData__Sequence__create(size_t size);

/// Destroy array of msg/RefereeData messages.
/**
 * It calls
 * tide_msgs__msg__RefereeData__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tide_msgs
void
tide_msgs__msg__RefereeData__Sequence__destroy(tide_msgs__msg__RefereeData__Sequence * array);

/// Check for msg/RefereeData message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tide_msgs
bool
tide_msgs__msg__RefereeData__Sequence__are_equal(const tide_msgs__msg__RefereeData__Sequence * lhs, const tide_msgs__msg__RefereeData__Sequence * rhs);

/// Copy an array of msg/RefereeData messages.
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
ROSIDL_GENERATOR_C_PUBLIC_tide_msgs
bool
tide_msgs__msg__RefereeData__Sequence__copy(
  const tide_msgs__msg__RefereeData__Sequence * input,
  tide_msgs__msg__RefereeData__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // TIDE_MSGS__MSG__DETAIL__REFEREE_DATA__FUNCTIONS_H_
