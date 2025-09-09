// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tide_msgs:msg/DebugArmor.idl
// generated code does not contain a copyright notice

#ifndef TIDE_MSGS__MSG__DETAIL__DEBUG_ARMOR__STRUCT_H_
#define TIDE_MSGS__MSG__DETAIL__DEBUG_ARMOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'type'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/DebugArmor in the package tide_msgs.
typedef struct tide_msgs__msg__DebugArmor
{
  int32_t center_x;
  rosidl_runtime_c__String type;
  float light_ratio;
  float center_distance;
  float angle;
} tide_msgs__msg__DebugArmor;

// Struct for a sequence of tide_msgs__msg__DebugArmor.
typedef struct tide_msgs__msg__DebugArmor__Sequence
{
  tide_msgs__msg__DebugArmor * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tide_msgs__msg__DebugArmor__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TIDE_MSGS__MSG__DETAIL__DEBUG_ARMOR__STRUCT_H_
