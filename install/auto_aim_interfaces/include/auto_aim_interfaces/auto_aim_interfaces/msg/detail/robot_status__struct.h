// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from auto_aim_interfaces:msg/RobotStatus.idl
// generated code does not contain a copyright notice

#ifndef AUTO_AIM_INTERFACES__MSG__DETAIL__ROBOT_STATUS__STRUCT_H_
#define AUTO_AIM_INTERFACES__MSG__DETAIL__ROBOT_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/RobotStatus in the package auto_aim_interfaces.
typedef struct auto_aim_interfaces__msg__RobotStatus
{
  std_msgs__msg__Header header;
  /// Gimbal angles in radians
  double yaw;
  double pitch;
  /// Gimbal velocities in rad/s
  double yaw_velocity;
  double pitch_velocity;
  /// Motor currents in A
  double yaw_current;
  double pitch_current;
  /// Motor temperatures in °C
  uint8_t yaw_temperature;
  uint8_t pitch_temperature;
} auto_aim_interfaces__msg__RobotStatus;

// Struct for a sequence of auto_aim_interfaces__msg__RobotStatus.
typedef struct auto_aim_interfaces__msg__RobotStatus__Sequence
{
  auto_aim_interfaces__msg__RobotStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} auto_aim_interfaces__msg__RobotStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AUTO_AIM_INTERFACES__MSG__DETAIL__ROBOT_STATUS__STRUCT_H_
