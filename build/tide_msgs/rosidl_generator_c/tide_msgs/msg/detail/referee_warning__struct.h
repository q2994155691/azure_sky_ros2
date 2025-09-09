// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tide_msgs:msg/RefereeWarning.idl
// generated code does not contain a copyright notice

#ifndef TIDE_MSGS__MSG__DETAIL__REFEREE_WARNING__STRUCT_H_
#define TIDE_MSGS__MSG__DETAIL__REFEREE_WARNING__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/RefereeWarning in the package tide_msgs.
typedef struct tide_msgs__msg__RefereeWarning
{
  uint8_t level;
  uint8_t offending_robot_id;
  uint8_t count;
} tide_msgs__msg__RefereeWarning;

// Struct for a sequence of tide_msgs__msg__RefereeWarning.
typedef struct tide_msgs__msg__RefereeWarning__Sequence
{
  tide_msgs__msg__RefereeWarning * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tide_msgs__msg__RefereeWarning__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TIDE_MSGS__MSG__DETAIL__REFEREE_WARNING__STRUCT_H_
