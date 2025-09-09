// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tide_msgs:msg/GroundRobot.idl
// generated code does not contain a copyright notice

#ifndef TIDE_MSGS__MSG__DETAIL__GROUND_ROBOT__STRUCT_H_
#define TIDE_MSGS__MSG__DETAIL__GROUND_ROBOT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/GroundRobot in the package tide_msgs.
typedef struct tide_msgs__msg__GroundRobot
{
  float hero_x;
  float hero_y;
  float engineer_x;
  float engineer_y;
  float standard_3_x;
  float standard_3_y;
  float standard_4_x;
  float standard_4_y;
  float reserved1;
  float reserved2;
} tide_msgs__msg__GroundRobot;

// Struct for a sequence of tide_msgs__msg__GroundRobot.
typedef struct tide_msgs__msg__GroundRobot__Sequence
{
  tide_msgs__msg__GroundRobot * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tide_msgs__msg__GroundRobot__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TIDE_MSGS__MSG__DETAIL__GROUND_ROBOT__STRUCT_H_
