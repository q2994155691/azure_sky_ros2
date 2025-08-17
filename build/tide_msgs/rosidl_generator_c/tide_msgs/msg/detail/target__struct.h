// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tide_msgs:msg/Target.idl
// generated code does not contain a copyright notice

#ifndef TIDE_MSGS__MSG__DETAIL__TARGET__STRUCT_H_
#define TIDE_MSGS__MSG__DETAIL__TARGET__STRUCT_H_

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
// Member 'id'
#include "rosidl_runtime_c/string.h"
// Member 'position'
#include "geometry_msgs/msg/detail/point__struct.h"
// Member 'velocity'
#include "geometry_msgs/msg/detail/vector3__struct.h"

/// Struct defined in msg/Target in the package tide_msgs.
typedef struct tide_msgs__msg__Target
{
  std_msgs__msg__Header header;
  bool tracking;
  rosidl_runtime_c__String id;
  int32_t armors_num;
  geometry_msgs__msg__Point position;
  geometry_msgs__msg__Vector3 velocity;
  double yaw;
  double v_yaw;
  double radius_1;
  double radius_2;
  double dz;
} tide_msgs__msg__Target;

// Struct for a sequence of tide_msgs__msg__Target.
typedef struct tide_msgs__msg__Target__Sequence
{
  tide_msgs__msg__Target * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tide_msgs__msg__Target__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TIDE_MSGS__MSG__DETAIL__TARGET__STRUCT_H_
