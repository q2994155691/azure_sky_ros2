// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tide_msgs:msg/DebugLights.idl
// generated code does not contain a copyright notice

#ifndef TIDE_MSGS__MSG__DETAIL__DEBUG_LIGHTS__STRUCT_H_
#define TIDE_MSGS__MSG__DETAIL__DEBUG_LIGHTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'data'
#include "tide_msgs/msg/detail/debug_light__struct.h"

/// Struct defined in msg/DebugLights in the package tide_msgs.
typedef struct tide_msgs__msg__DebugLights
{
  tide_msgs__msg__DebugLight__Sequence data;
} tide_msgs__msg__DebugLights;

// Struct for a sequence of tide_msgs__msg__DebugLights.
typedef struct tide_msgs__msg__DebugLights__Sequence
{
  tide_msgs__msg__DebugLights * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tide_msgs__msg__DebugLights__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TIDE_MSGS__MSG__DETAIL__DEBUG_LIGHTS__STRUCT_H_
