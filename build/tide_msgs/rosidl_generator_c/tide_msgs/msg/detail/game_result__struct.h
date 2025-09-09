// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tide_msgs:msg/GameResult.idl
// generated code does not contain a copyright notice

#ifndef TIDE_MSGS__MSG__DETAIL__GAME_RESULT__STRUCT_H_
#define TIDE_MSGS__MSG__DETAIL__GAME_RESULT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/GameResult in the package tide_msgs.
typedef struct tide_msgs__msg__GameResult
{
  uint8_t winner;
} tide_msgs__msg__GameResult;

// Struct for a sequence of tide_msgs__msg__GameResult.
typedef struct tide_msgs__msg__GameResult__Sequence
{
  tide_msgs__msg__GameResult * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tide_msgs__msg__GameResult__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TIDE_MSGS__MSG__DETAIL__GAME_RESULT__STRUCT_H_
