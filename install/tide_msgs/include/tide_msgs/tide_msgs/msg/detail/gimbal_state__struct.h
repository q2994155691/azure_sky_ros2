// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tide_msgs:msg/GimbalState.idl
// generated code does not contain a copyright notice

#ifndef TIDE_MSGS__MSG__DETAIL__GIMBAL_STATE__STRUCT_H_
#define TIDE_MSGS__MSG__DETAIL__GIMBAL_STATE__STRUCT_H_

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

/// Struct defined in msg/GimbalState in the package tide_msgs.
typedef struct tide_msgs__msg__GimbalState
{
  std_msgs__msg__Header header;
  uint8_t mode;
  bool is_tracking;
  double pitch_ref;
  double yaw_ref;
  double pitch_cur;
  double yaw_cur;
} tide_msgs__msg__GimbalState;

// Struct for a sequence of tide_msgs__msg__GimbalState.
typedef struct tide_msgs__msg__GimbalState__Sequence
{
  tide_msgs__msg__GimbalState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tide_msgs__msg__GimbalState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TIDE_MSGS__MSG__DETAIL__GIMBAL_STATE__STRUCT_H_
