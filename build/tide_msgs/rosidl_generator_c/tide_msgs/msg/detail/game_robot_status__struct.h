// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tide_msgs:msg/GameRobotStatus.idl
// generated code does not contain a copyright notice

#ifndef TIDE_MSGS__MSG__DETAIL__GAME_ROBOT_STATUS__STRUCT_H_
#define TIDE_MSGS__MSG__DETAIL__GAME_ROBOT_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/GameRobotStatus in the package tide_msgs.
typedef struct tide_msgs__msg__GameRobotStatus
{
  uint8_t robot_id;
  uint8_t robot_level;
  uint16_t current_hp;
  uint16_t maximum_hp;
  /// 机器人枪口热量每秒冷却值
  uint16_t shooter_barrel_cooling_value;
  /// 机器人枪口热量上限
  uint16_t shooter_barrel_heat_limit;
  uint16_t chassis_power_limit;
  uint8_t power_management_gimbal_output;
  uint8_t power_management_chassis_output;
  uint8_t power_management_shooter_output;
} tide_msgs__msg__GameRobotStatus;

// Struct for a sequence of tide_msgs__msg__GameRobotStatus.
typedef struct tide_msgs__msg__GameRobotStatus__Sequence
{
  tide_msgs__msg__GameRobotStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tide_msgs__msg__GameRobotStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TIDE_MSGS__MSG__DETAIL__GAME_ROBOT_STATUS__STRUCT_H_
