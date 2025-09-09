// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from tide_msgs:msg/GameRobotPos.idl
// generated code does not contain a copyright notice

#ifndef TIDE_MSGS__MSG__DETAIL__GAME_ROBOT_POS__FUNCTIONS_H_
#define TIDE_MSGS__MSG__DETAIL__GAME_ROBOT_POS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "tide_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "tide_msgs/msg/detail/game_robot_pos__struct.h"

/// Initialize msg/GameRobotPos message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * tide_msgs__msg__GameRobotPos
 * )) before or use
 * tide_msgs__msg__GameRobotPos__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_tide_msgs
bool
tide_msgs__msg__GameRobotPos__init(tide_msgs__msg__GameRobotPos * msg);

/// Finalize msg/GameRobotPos message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tide_msgs
void
tide_msgs__msg__GameRobotPos__fini(tide_msgs__msg__GameRobotPos * msg);

/// Create msg/GameRobotPos message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * tide_msgs__msg__GameRobotPos__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tide_msgs
tide_msgs__msg__GameRobotPos *
tide_msgs__msg__GameRobotPos__create();

/// Destroy msg/GameRobotPos message.
/**
 * It calls
 * tide_msgs__msg__GameRobotPos__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tide_msgs
void
tide_msgs__msg__GameRobotPos__destroy(tide_msgs__msg__GameRobotPos * msg);

/// Check for msg/GameRobotPos message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tide_msgs
bool
tide_msgs__msg__GameRobotPos__are_equal(const tide_msgs__msg__GameRobotPos * lhs, const tide_msgs__msg__GameRobotPos * rhs);

/// Copy a msg/GameRobotPos message.
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
tide_msgs__msg__GameRobotPos__copy(
  const tide_msgs__msg__GameRobotPos * input,
  tide_msgs__msg__GameRobotPos * output);

/// Initialize array of msg/GameRobotPos messages.
/**
 * It allocates the memory for the number of elements and calls
 * tide_msgs__msg__GameRobotPos__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_tide_msgs
bool
tide_msgs__msg__GameRobotPos__Sequence__init(tide_msgs__msg__GameRobotPos__Sequence * array, size_t size);

/// Finalize array of msg/GameRobotPos messages.
/**
 * It calls
 * tide_msgs__msg__GameRobotPos__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tide_msgs
void
tide_msgs__msg__GameRobotPos__Sequence__fini(tide_msgs__msg__GameRobotPos__Sequence * array);

/// Create array of msg/GameRobotPos messages.
/**
 * It allocates the memory for the array and calls
 * tide_msgs__msg__GameRobotPos__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_tide_msgs
tide_msgs__msg__GameRobotPos__Sequence *
tide_msgs__msg__GameRobotPos__Sequence__create(size_t size);

/// Destroy array of msg/GameRobotPos messages.
/**
 * It calls
 * tide_msgs__msg__GameRobotPos__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_tide_msgs
void
tide_msgs__msg__GameRobotPos__Sequence__destroy(tide_msgs__msg__GameRobotPos__Sequence * array);

/// Check for msg/GameRobotPos message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_tide_msgs
bool
tide_msgs__msg__GameRobotPos__Sequence__are_equal(const tide_msgs__msg__GameRobotPos__Sequence * lhs, const tide_msgs__msg__GameRobotPos__Sequence * rhs);

/// Copy an array of msg/GameRobotPos messages.
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
tide_msgs__msg__GameRobotPos__Sequence__copy(
  const tide_msgs__msg__GameRobotPos__Sequence * input,
  tide_msgs__msg__GameRobotPos__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // TIDE_MSGS__MSG__DETAIL__GAME_ROBOT_POS__FUNCTIONS_H_
