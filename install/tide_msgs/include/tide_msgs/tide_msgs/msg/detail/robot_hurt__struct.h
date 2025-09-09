// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tide_msgs:msg/RobotHurt.idl
// generated code does not contain a copyright notice

#ifndef TIDE_MSGS__MSG__DETAIL__ROBOT_HURT__STRUCT_H_
#define TIDE_MSGS__MSG__DETAIL__ROBOT_HURT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/RobotHurt in the package tide_msgs.
typedef struct tide_msgs__msg__RobotHurt
{
  uint8_t armor_id;
  uint8_t hurt_type;
} tide_msgs__msg__RobotHurt;

// Struct for a sequence of tide_msgs__msg__RobotHurt.
typedef struct tide_msgs__msg__RobotHurt__Sequence
{
  tide_msgs__msg__RobotHurt * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tide_msgs__msg__RobotHurt__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TIDE_MSGS__MSG__DETAIL__ROBOT_HURT__STRUCT_H_
