// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tide_msgs:msg/FdFrame.idl
// generated code does not contain a copyright notice

#ifndef TIDE_MSGS__MSG__DETAIL__FD_FRAME__STRUCT_H_
#define TIDE_MSGS__MSG__DETAIL__FD_FRAME__STRUCT_H_

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
// Member 'data'
#include "rosidl_runtime_c/primitives_sequence.h"

// constants for array fields with an upper bound
// data
enum
{
  tide_msgs__msg__FdFrame__data__MAX_SIZE = 64
};

/// Struct defined in msg/FdFrame in the package tide_msgs.
typedef struct tide_msgs__msg__FdFrame
{
  std_msgs__msg__Header header;
  uint32_t id;
  bool is_extended;
  bool is_error;
  uint8_t len;
  rosidl_runtime_c__uint8__Sequence data;
} tide_msgs__msg__FdFrame;

// Struct for a sequence of tide_msgs__msg__FdFrame.
typedef struct tide_msgs__msg__FdFrame__Sequence
{
  tide_msgs__msg__FdFrame * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tide_msgs__msg__FdFrame__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TIDE_MSGS__MSG__DETAIL__FD_FRAME__STRUCT_H_
