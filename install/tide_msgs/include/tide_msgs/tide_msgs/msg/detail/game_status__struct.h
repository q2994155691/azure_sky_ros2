// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tide_msgs:msg/GameStatus.idl
// generated code does not contain a copyright notice

#ifndef TIDE_MSGS__MSG__DETAIL__GAME_STATUS__STRUCT_H_
#define TIDE_MSGS__MSG__DETAIL__GAME_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/GameStatus in the package tide_msgs.
typedef struct tide_msgs__msg__GameStatus
{
  uint8_t game_type;
  uint8_t game_progress;
  uint16_t stage_remain_time;
  uint64_t sync_timestamp;
} tide_msgs__msg__GameStatus;

// Struct for a sequence of tide_msgs__msg__GameStatus.
typedef struct tide_msgs__msg__GameStatus__Sequence
{
  tide_msgs__msg__GameStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tide_msgs__msg__GameStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TIDE_MSGS__MSG__DETAIL__GAME_STATUS__STRUCT_H_
