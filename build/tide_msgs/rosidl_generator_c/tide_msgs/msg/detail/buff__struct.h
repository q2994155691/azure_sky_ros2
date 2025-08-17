// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tide_msgs:msg/Buff.idl
// generated code does not contain a copyright notice

#ifndef TIDE_MSGS__MSG__DETAIL__BUFF__STRUCT_H_
#define TIDE_MSGS__MSG__DETAIL__BUFF__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Buff in the package tide_msgs.
typedef struct tide_msgs__msg__Buff
{
  /// 机器人回血增益（百分比，值为 10 表示每秒恢复血量上限的 10%）
  uint8_t recovery_buff;
  /// 机器人枪口冷却倍率（直接值，值为 5 表示 5 倍冷却）
  uint8_t cooling_buff;
  /// 机器人防御增益（百分比，值为 50 表示 50%防御增益）
  uint8_t defence_buff;
  /// 机器人负防御增益（百分比，值为 30 表示-30%防御增益）
  uint8_t vulnerability_buff;
  /// 机器人攻击增益（百分比，值为 50 表示 50%攻击增益）
  uint16_t attack_buff;
  uint8_t remaining_energy;
} tide_msgs__msg__Buff;

// Struct for a sequence of tide_msgs__msg__Buff.
typedef struct tide_msgs__msg__Buff__Sequence
{
  tide_msgs__msg__Buff * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tide_msgs__msg__Buff__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TIDE_MSGS__MSG__DETAIL__BUFF__STRUCT_H_
