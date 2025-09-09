// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tide_msgs:msg/RobotHurt.idl
// generated code does not contain a copyright notice
#include "tide_msgs/msg/detail/robot_hurt__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
tide_msgs__msg__RobotHurt__init(tide_msgs__msg__RobotHurt * msg)
{
  if (!msg) {
    return false;
  }
  // armor_id
  // hurt_type
  return true;
}

void
tide_msgs__msg__RobotHurt__fini(tide_msgs__msg__RobotHurt * msg)
{
  if (!msg) {
    return;
  }
  // armor_id
  // hurt_type
}

bool
tide_msgs__msg__RobotHurt__are_equal(const tide_msgs__msg__RobotHurt * lhs, const tide_msgs__msg__RobotHurt * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // armor_id
  if (lhs->armor_id != rhs->armor_id) {
    return false;
  }
  // hurt_type
  if (lhs->hurt_type != rhs->hurt_type) {
    return false;
  }
  return true;
}

bool
tide_msgs__msg__RobotHurt__copy(
  const tide_msgs__msg__RobotHurt * input,
  tide_msgs__msg__RobotHurt * output)
{
  if (!input || !output) {
    return false;
  }
  // armor_id
  output->armor_id = input->armor_id;
  // hurt_type
  output->hurt_type = input->hurt_type;
  return true;
}

tide_msgs__msg__RobotHurt *
tide_msgs__msg__RobotHurt__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tide_msgs__msg__RobotHurt * msg = (tide_msgs__msg__RobotHurt *)allocator.allocate(sizeof(tide_msgs__msg__RobotHurt), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tide_msgs__msg__RobotHurt));
  bool success = tide_msgs__msg__RobotHurt__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tide_msgs__msg__RobotHurt__destroy(tide_msgs__msg__RobotHurt * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tide_msgs__msg__RobotHurt__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tide_msgs__msg__RobotHurt__Sequence__init(tide_msgs__msg__RobotHurt__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tide_msgs__msg__RobotHurt * data = NULL;

  if (size) {
    data = (tide_msgs__msg__RobotHurt *)allocator.zero_allocate(size, sizeof(tide_msgs__msg__RobotHurt), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tide_msgs__msg__RobotHurt__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tide_msgs__msg__RobotHurt__fini(&data[i - 1]);
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
tide_msgs__msg__RobotHurt__Sequence__fini(tide_msgs__msg__RobotHurt__Sequence * array)
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
      tide_msgs__msg__RobotHurt__fini(&array->data[i]);
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

tide_msgs__msg__RobotHurt__Sequence *
tide_msgs__msg__RobotHurt__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tide_msgs__msg__RobotHurt__Sequence * array = (tide_msgs__msg__RobotHurt__Sequence *)allocator.allocate(sizeof(tide_msgs__msg__RobotHurt__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tide_msgs__msg__RobotHurt__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tide_msgs__msg__RobotHurt__Sequence__destroy(tide_msgs__msg__RobotHurt__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tide_msgs__msg__RobotHurt__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tide_msgs__msg__RobotHurt__Sequence__are_equal(const tide_msgs__msg__RobotHurt__Sequence * lhs, const tide_msgs__msg__RobotHurt__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tide_msgs__msg__RobotHurt__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tide_msgs__msg__RobotHurt__Sequence__copy(
  const tide_msgs__msg__RobotHurt__Sequence * input,
  tide_msgs__msg__RobotHurt__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tide_msgs__msg__RobotHurt);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tide_msgs__msg__RobotHurt * data =
      (tide_msgs__msg__RobotHurt *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tide_msgs__msg__RobotHurt__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tide_msgs__msg__RobotHurt__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tide_msgs__msg__RobotHurt__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
