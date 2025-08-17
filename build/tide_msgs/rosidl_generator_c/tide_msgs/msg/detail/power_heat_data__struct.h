// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tide_msgs:msg/PowerHeatData.idl
// generated code does not contain a copyright notice

#ifndef TIDE_MSGS__MSG__DETAIL__POWER_HEAT_DATA__STRUCT_H_
#define TIDE_MSGS__MSG__DETAIL__POWER_HEAT_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/PowerHeatData in the package tide_msgs.
typedef struct tide_msgs__msg__PowerHeatData
{
  uint16_t reserved1;
  uint16_t reserved2;
  float reserved3;
  uint16_t buffer_energy;
  uint16_t shooter_id1_17mm_cooling_heat;
  uint16_t shooter_id2_17mm_cooling_heat;
  uint16_t shooter_id1_42mm_cooling_heat;
} tide_msgs__msg__PowerHeatData;

// Struct for a sequence of tide_msgs__msg__PowerHeatData.
typedef struct tide_msgs__msg__PowerHeatData__Sequence
{
  tide_msgs__msg__PowerHeatData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tide_msgs__msg__PowerHeatData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TIDE_MSGS__MSG__DETAIL__POWER_HEAT_DATA__STRUCT_H_
