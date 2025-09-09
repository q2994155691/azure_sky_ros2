// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from tide_msgs:msg/SentryInfo.idl
// generated code does not contain a copyright notice

#ifndef TIDE_MSGS__MSG__DETAIL__SENTRY_INFO__FUNCTIONS_H_
#define TIDE_MSGS__MSG__DETAIL__SENTRY_INFO__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "tide_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "tide_msgs/msg/detail/sentry_info__struct.h"

/// Initialize msg/SentryInfo message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * tide_msgs__msg__SentryInfo
 * )) before or use
 * tide_msgs__msg__SentryInfo__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_tide_msgs
bool
tide_msgs__msg__SentryInfo__init(tide_msgs__msg__SentryInfo * msg);

/// Finalize msg/SentryInfo message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tide_msgs
void
tide_msgs__msg__SentryInfo__fini(tide_msgs__msg__SentryInfo * msg);

/// Create msg/SentryInfo message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * tide_msgs__msg__SentryInfo__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tide_msgs
tide_msgs__msg__SentryInfo *
tide_msgs__msg__SentryInfo__create();

/// Destroy msg/SentryInfo message.
/**
 * It calls
 * tide_msgs__msg__SentryInfo__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tide_msgs
void
tide_msgs__msg__SentryInfo__destroy(tide_msgs__msg__SentryInfo * msg);

/// Check for msg/SentryInfo message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tide_msgs
bool
tide_msgs__msg__SentryInfo__are_equal(const tide_msgs__msg__SentryInfo * lhs, const tide_msgs__msg__SentryInfo * rhs);

/// Copy a msg/SentryInfo message.
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
tide_msgs__msg__SentryInfo__copy(
  const tide_msgs__msg__SentryInfo * input,
  tide_msgs__msg__SentryInfo * output);

/// Initialize array of msg/SentryInfo messages.
/**
 * It allocates the memory for the number of elements and calls
 * tide_msgs__msg__SentryInfo__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_tide_msgs
bool
tide_msgs__msg__SentryInfo__Sequence__init(tide_msgs__msg__SentryInfo__Sequence * array, size_t size);

/// Finalize array of msg/SentryInfo messages.
/**
 * It calls
 * tide_msgs__msg__SentryInfo__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tide_msgs
void
tide_msgs__msg__SentryInfo__Sequence__fini(tide_msgs__msg__SentryInfo__Sequence * array);

/// Create array of msg/SentryInfo messages.
/**
 * It allocates the memory for the array and calls
 * tide_msgs__msg__SentryInfo__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tide_msgs
tide_msgs__msg__SentryInfo__Sequence *
tide_msgs__msg__SentryInfo__Sequence__create(size_t size);

/// Destroy array of msg/SentryInfo messages.
/**
 * It calls
 * tide_msgs__msg__SentryInfo__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tide_msgs
void
tide_msgs__msg__SentryInfo__Sequence__destroy(tide_msgs__msg__SentryInfo__Sequence * array);

/// Check for msg/SentryInfo message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tide_msgs
bool
tide_msgs__msg__SentryInfo__Sequence__are_equal(const tide_msgs__msg__SentryInfo__Sequence * lhs, const tide_msgs__msg__SentryInfo__Sequence * rhs);

/// Copy an array of msg/SentryInfo messages.
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
tide_msgs__msg__SentryInfo__Sequence__copy(
  const tide_msgs__msg__SentryInfo__Sequence * input,
  tide_msgs__msg__SentryInfo__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // TIDE_MSGS__MSG__DETAIL__SENTRY_INFO__FUNCTIONS_H_
