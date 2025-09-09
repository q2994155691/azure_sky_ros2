// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tide_msgs:msg/Armors.idl
// generated code does not contain a copyright notice

#ifndef TIDE_MSGS__MSG__DETAIL__ARMORS__STRUCT_H_
#define TIDE_MSGS__MSG__DETAIL__ARMORS__STRUCT_H_

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
// Member 'armors'
#include "tide_msgs/msg/detail/armor__struct.h"

/// Struct defined in msg/Armors in the package tide_msgs.
typedef struct tide_msgs__msg__Armors
{
  std_msgs__msg__Header header;
  tide_msgs__msg__Armor__Sequence armors;
} tide_msgs__msg__Armors;

// Struct for a sequence of tide_msgs__msg__Armors.
typedef struct tide_msgs__msg__Armors__Sequence
{
  tide_msgs__msg__Armors * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tide_msgs__msg__Armors__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TIDE_MSGS__MSG__DETAIL__ARMORS__STRUCT_H_
