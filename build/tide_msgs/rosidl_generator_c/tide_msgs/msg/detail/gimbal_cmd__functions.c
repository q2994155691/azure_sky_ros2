// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tide_msgs:msg/GimbalCmd.idl
// generated code does not contain a copyright notice
#include "tide_msgs/msg/detail/gimbal_cmd__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
tide_msgs__msg__GimbalCmd__init(tide_msgs__msg__GimbalCmd * msg)
{
  if (!msg) {
    return false;
  }
  // mode
  // pitch_ref
  // yaw_ref
  return true;
}

void
tide_msgs__msg__GimbalCmd__fini(tide_msgs__msg__GimbalCmd * msg)
{
  if (!msg) {
    return;
  }
  // mode
  // pitch_ref
  // yaw_ref
}

bool
tide_msgs__msg__GimbalCmd__are_equal(const tide_msgs__msg__GimbalCmd * lhs, const tide_msgs__msg__GimbalCmd * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // mode
  if (lhs->mode != rhs->mode) {
    return false;
  }
  // pitch_ref
  if (lhs->pitch_ref != rhs->pitch_ref) {
    return false;
  }
  // yaw_ref
  if (lhs->yaw_ref != rhs->yaw_ref) {
    return false;
  }
  return true;
}

bool
tide_msgs__msg__GimbalCmd__copy(
  const tide_msgs__msg__GimbalCmd * input,
  tide_msgs__msg__GimbalCmd * output)
{
  if (!input || !output) {
    return false;
  }
  // mode
  output->mode = input->mode;
  // pitch_ref
  output->pitch_ref = input->pitch_ref;
  // yaw_ref
  output->yaw_ref = input->yaw_ref;
  return true;
}

tide_msgs__msg__GimbalCmd *
tide_msgs__msg__GimbalCmd__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tide_msgs__msg__GimbalCmd * msg = (tide_msgs__msg__GimbalCmd *)allocator.allocate(sizeof(tide_msgs__msg__GimbalCmd), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tide_msgs__msg__GimbalCmd));
  bool success = tide_msgs__msg__GimbalCmd__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tide_msgs__msg__GimbalCmd__destroy(tide_msgs__msg__GimbalCmd * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tide_msgs__msg__GimbalCmd__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tide_msgs__msg__GimbalCmd__Sequence__init(tide_msgs__msg__GimbalCmd__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tide_msgs__msg__GimbalCmd * data = NULL;

  if (size) {
    data = (tide_msgs__msg__GimbalCmd *)allocator.zero_allocate(size, sizeof(tide_msgs__msg__GimbalCmd), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tide_msgs__msg__GimbalCmd__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tide_msgs__msg__GimbalCmd__fini(&data[i - 1]);
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
tide_msgs__msg__GimbalCmd__Sequence__fini(tide_msgs__msg__GimbalCmd__Sequence * array)
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
      tide_msgs__msg__GimbalCmd__fini(&array->data[i]);
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

tide_msgs__msg__GimbalCmd__Sequence *
tide_msgs__msg__GimbalCmd__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tide_msgs__msg__GimbalCmd__Sequence * array = (tide_msgs__msg__GimbalCmd__Sequence *)allocator.allocate(sizeof(tide_msgs__msg__GimbalCmd__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tide_msgs__msg__GimbalCmd__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tide_msgs__msg__GimbalCmd__Sequence__destroy(tide_msgs__msg__GimbalCmd__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tide_msgs__msg__GimbalCmd__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tide_msgs__msg__GimbalCmd__Sequence__are_equal(const tide_msgs__msg__GimbalCmd__Sequence * lhs, const tide_msgs__msg__GimbalCmd__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tide_msgs__msg__GimbalCmd__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tide_msgs__msg__GimbalCmd__Sequence__copy(
  const tide_msgs__msg__GimbalCmd__Sequence * input,
  tide_msgs__msg__GimbalCmd__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tide_msgs__msg__GimbalCmd);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tide_msgs__msg__GimbalCmd * data =
      (tide_msgs__msg__GimbalCmd *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tide_msgs__msg__GimbalCmd__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tide_msgs__msg__GimbalCmd__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tide_msgs__msg__GimbalCmd__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
