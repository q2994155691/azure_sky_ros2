// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tide_msgs:msg/GameRobotPos.idl
// generated code does not contain a copyright notice

#ifndef TIDE_MSGS__MSG__DETAIL__GAME_ROBOT_POS__STRUCT_H_
#define TIDE_MSGS__MSG__DETAIL__GAME_ROBOT_POS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/GameRobotPos in the package tide_msgs.
typedef struct tide_msgs__msg__GameRobotPos
{
  float x;
  float y;
  float angle;
} tide_msgs__msg__GameRobotPos;

// Struct for a sequence of tide_msgs__msg__GameRobotPos.
typedef struct tide_msgs__msg__GameRobotPos__Sequence
{
  tide_msgs__msg__GameRobotPos * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tide_msgs__msg__GameRobotPos__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TIDE_MSGS__MSG__DETAIL__GAME_ROBOT_POS__STRUCT_H_
