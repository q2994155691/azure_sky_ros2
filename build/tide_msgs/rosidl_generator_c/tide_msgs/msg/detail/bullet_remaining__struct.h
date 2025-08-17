// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tide_msgs:msg/BulletRemaining.idl
// generated code does not contain a copyright notice

#ifndef TIDE_MSGS__MSG__DETAIL__BULLET_REMAINING__STRUCT_H_
#define TIDE_MSGS__MSG__DETAIL__BULLET_REMAINING__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/BulletRemaining in the package tide_msgs.
typedef struct tide_msgs__msg__BulletRemaining
{
  /// 17mm弹丸剩余数量
  uint16_t bullet_remaining_num_17mm;
  /// 42mm弹丸剩余数量
  uint16_t bullet_remaining_num_42mm;
  /// 剩余金币数量
  uint16_t coin_remaining_num;
} tide_msgs__msg__BulletRemaining;

// Struct for a sequence of tide_msgs__msg__BulletRemaining.
typedef struct tide_msgs__msg__BulletRemaining__Sequence
{
  tide_msgs__msg__BulletRemaining * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tide_msgs__msg__BulletRemaining__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TIDE_MSGS__MSG__DETAIL__BULLET_REMAINING__STRUCT_H_
