// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tide_msgs:msg/GameRobotStatus.idl
// generated code does not contain a copyright notice
#include "tide_msgs/msg/detail/game_robot_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
tide_msgs__msg__GameRobotStatus__init(tide_msgs__msg__GameRobotStatus * msg)
{
  if (!msg) {
    return false;
  }
  // robot_id
  // robot_level
  // current_hp
  // maximum_hp
  // shooter_barrel_cooling_value
  // shooter_barrel_heat_limit
  // chassis_power_limit
  // power_management_gimbal_output
  // power_management_chassis_output
  // power_management_shooter_output
  return true;
}

void
tide_msgs__msg__GameRobotStatus__fini(tide_msgs__msg__GameRobotStatus * msg)
{
  if (!msg) {
    return;
  }
  // robot_id
  // robot_level
  // current_hp
  // maximum_hp
  // shooter_barrel_cooling_value
  // shooter_barrel_heat_limit
  // chassis_power_limit
  // power_management_gimbal_output
  // power_management_chassis_output
  // power_management_shooter_output
}

bool
tide_msgs__msg__GameRobotStatus__are_equal(const tide_msgs__msg__GameRobotStatus * lhs, const tide_msgs__msg__GameRobotStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // robot_id
  if (lhs->robot_id != rhs->robot_id) {
    return false;
  }
  // robot_level
  if (lhs->robot_level != rhs->robot_level) {
    return false;
  }
  // current_hp
  if (lhs->current_hp != rhs->current_hp) {
    return false;
  }
  // maximum_hp
  if (lhs->maximum_hp != rhs->maximum_hp) {
    return false;
  }
  // shooter_barrel_cooling_value
  if (lhs->shooter_barrel_cooling_value != rhs->shooter_barrel_cooling_value) {
    return false;
  }
  // shooter_barrel_heat_limit
  if (lhs->shooter_barrel_heat_limit != rhs->shooter_barrel_heat_limit) {
    return false;
  }
  // chassis_power_limit
  if (lhs->chassis_power_limit != rhs->chassis_power_limit) {
    return false;
  }
  // power_management_gimbal_output
  if (lhs->power_management_gimbal_output != rhs->power_management_gimbal_output) {
    return false;
  }
  // power_management_chassis_output
  if (lhs->power_management_chassis_output != rhs->power_management_chassis_output) {
    return false;
  }
  // power_management_shooter_output
  if (lhs->power_management_shooter_output != rhs->power_management_shooter_output) {
    return false;
  }
  return true;
}

bool
tide_msgs__msg__GameRobotStatus__copy(
  const tide_msgs__msg__GameRobotStatus * input,
  tide_msgs__msg__GameRobotStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // robot_id
  output->robot_id = input->robot_id;
  // robot_level
  output->robot_level = input->robot_level;
  // current_hp
  output->current_hp = input->current_hp;
  // maximum_hp
  output->maximum_hp = input->maximum_hp;
  // shooter_barrel_cooling_value
  output->shooter_barrel_cooling_value = input->shooter_barrel_cooling_value;
  // shooter_barrel_heat_limit
  output->shooter_barrel_heat_limit = input->shooter_barrel_heat_limit;
  // chassis_power_limit
  output->chassis_power_limit = input->chassis_power_limit;
  // power_management_gimbal_output
  output->power_management_gimbal_output = input->power_management_gimbal_output;
  // power_management_chassis_output
  output->power_management_chassis_output = input->power_management_chassis_output;
  // power_management_shooter_output
  output->power_management_shooter_output = input->power_management_shooter_output;
  return true;
}

tide_msgs__msg__GameRobotStatus *
tide_msgs__msg__GameRobotStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tide_msgs__msg__GameRobotStatus * msg = (tide_msgs__msg__GameRobotStatus *)allocator.allocate(sizeof(tide_msgs__msg__GameRobotStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tide_msgs__msg__GameRobotStatus));
  bool success = tide_msgs__msg__GameRobotStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tide_msgs__msg__GameRobotStatus__destroy(tide_msgs__msg__GameRobotStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tide_msgs__msg__GameRobotStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tide_msgs__msg__GameRobotStatus__Sequence__init(tide_msgs__msg__GameRobotStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tide_msgs__msg__GameRobotStatus * data = NULL;

  if (size) {
    data = (tide_msgs__msg__GameRobotStatus *)allocator.zero_allocate(size, sizeof(tide_msgs__msg__GameRobotStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tide_msgs__msg__GameRobotStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tide_msgs__msg__GameRobotStatus__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
tide_msgs__msg__GameRobotStatus__Sequence__fini(tide_msgs__msg__GameRobotStatus__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tide_msgs__msg__GameRobotStatus__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

tide_msgs__msg__GameRobotStatus__Sequence *
tide_msgs__msg__GameRobotStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tide_msgs__msg__GameRobotStatus__Sequence * array = (tide_msgs__msg__GameRobotStatus__Sequence *)allocator.allocate(sizeof(tide_msgs__msg__GameRobotStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tide_msgs__msg__GameRobotStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tide_msgs__msg__GameRobotStatus__Sequence__destroy(tide_msgs__msg__GameRobotStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tide_msgs__msg__GameRobotStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tide_msgs__msg__GameRobotStatus__Sequence__are_equal(const tide_msgs__msg__GameRobotStatus__Sequence * lhs, const tide_msgs__msg__GameRobotStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tide_msgs__msg__GameRobotStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tide_msgs__msg__GameRobotStatus__Sequence__copy(
  const tide_msgs__msg__GameRobotStatus__Sequence * input,
  tide_msgs__msg__GameRobotStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tide_msgs__msg__GameRobotStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tide_msgs__msg__GameRobotStatus * data =
      (tide_msgs__msg__GameRobotStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tide_msgs__msg__GameRobotStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tide_msgs__msg__GameRobotStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tide_msgs__msg__GameRobotStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
