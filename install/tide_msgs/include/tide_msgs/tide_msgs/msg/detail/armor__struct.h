// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tide_msgs:msg/Armor.idl
// generated code does not contain a copyright notice

#ifndef TIDE_MSGS__MSG__DETAIL__ARMOR__STRUCT_H_
#define TIDE_MSGS__MSG__DETAIL__ARMOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'number'
// Member 'type'
#include "rosidl_runtime_c/string.h"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.h"
// Member 'kpts'
#include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in msg/Armor in the package tide_msgs.
typedef struct tide_msgs__msg__Armor
{
  rosidl_runtime_c__String number;
  rosidl_runtime_c__String type;
  float distance_to_image_center;
  geometry_msgs__msg__Pose pose;
  geometry_msgs__msg__Point__Sequence kpts;
} tide_msgs__msg__Armor;

// Struct for a sequence of tide_msgs__msg__Armor.
typedef struct tide_msgs__msg__Armor__Sequence
{
  tide_msgs__msg__Armor * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tide_msgs__msg__Armor__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TIDE_MSGS__MSG__DETAIL__ARMOR__STRUCT_H_
