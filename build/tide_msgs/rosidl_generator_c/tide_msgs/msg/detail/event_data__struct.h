// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tide_msgs:msg/EventData.idl
// generated code does not contain a copyright notice

#ifndef TIDE_MSGS__MSG__DETAIL__EVENT_DATA__STRUCT_H_
#define TIDE_MSGS__MSG__DETAIL__EVENT_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/EventData in the package tide_msgs.
typedef struct tide_msgs__msg__EventData
{
  uint32_t event_data;
} tide_msgs__msg__EventData;

// Struct for a sequence of tide_msgs__msg__EventData.
typedef struct tide_msgs__msg__EventData__Sequence
{
  tide_msgs__msg__EventData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tide_msgs__msg__EventData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TIDE_MSGS__MSG__DETAIL__EVENT_DATA__STRUCT_H_
