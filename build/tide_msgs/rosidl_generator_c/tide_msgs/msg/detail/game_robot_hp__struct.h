// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tide_msgs:msg/GameRobotHP.idl
// generated code does not contain a copyright notice

#ifndef TIDE_MSGS__MSG__DETAIL__GAME_ROBOT_HP__STRUCT_H_
#define TIDE_MSGS__MSG__DETAIL__GAME_ROBOT_HP__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/GameRobotHP in the package tide_msgs.
typedef struct tide_msgs__msg__GameRobotHP
{
  uint16_t red1robot_hp;
  uint16_t red2robot_hp;
  uint16_t red3robot_hp;
  uint16_t red4robot_hp;
  uint16_t reserved1;
  uint16_t red7robot_hp;
  uint16_t redoutpost_hp;
  uint16_t redbase_hp;
  uint16_t blue1robot_hp;
  uint16_t blue2robot_hp;
  uint16_t blue3robot_hp;
  uint16_t blue4robot_hp;
  uint16_t reserved2;
  uint16_t blue7robot_hp;
  uint16_t blueoutpost_hp;
  uint16_t bluebase_hp;
} tide_msgs__msg__GameRobotHP;

// Struct for a sequence of tide_msgs__msg__GameRobotHP.
typedef struct tide_msgs__msg__GameRobotHP__Sequence
{
  tide_msgs__msg__GameRobotHP * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tide_msgs__msg__GameRobotHP__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TIDE_MSGS__MSG__DETAIL__GAME_ROBOT_HP__STRUCT_H_
