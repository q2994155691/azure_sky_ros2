// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tide_msgs:msg/ShooterCmd.idl
// generated code does not contain a copyright notice

#ifndef TIDE_MSGS__MSG__DETAIL__SHOOTER_CMD__STRUCT_H_
#define TIDE_MSGS__MSG__DETAIL__SHOOTER_CMD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/ShooterCmd in the package tide_msgs.
typedef struct tide_msgs__msg__ShooterCmd
{
  uint8_t mode;
  double bullet_velocity;
  double shooting_freq;
} tide_msgs__msg__ShooterCmd;

// Struct for a sequence of tide_msgs__msg__ShooterCmd.
typedef struct tide_msgs__msg__ShooterCmd__Sequence
{
  tide_msgs__msg__ShooterCmd * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tide_msgs__msg__ShooterCmd__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TIDE_MSGS__MSG__DETAIL__SHOOTER_CMD__STRUCT_H_
