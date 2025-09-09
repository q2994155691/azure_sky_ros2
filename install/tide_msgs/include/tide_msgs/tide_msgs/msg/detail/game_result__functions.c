// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tide_msgs:msg/GameResult.idl
// generated code does not contain a copyright notice
#include "tide_msgs/msg/detail/game_result__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
tide_msgs__msg__GameResult__init(tide_msgs__msg__GameResult * msg)
{
  if (!msg) {
    return false;
  }
  // winner
  return true;
}

void
tide_msgs__msg__GameResult__fini(tide_msgs__msg__GameResult * msg)
{
  if (!msg) {
    return;
  }
  // winner
}

bool
tide_msgs__msg__GameResult__are_equal(const tide_msgs__msg__GameResult * lhs, const tide_msgs__msg__GameResult * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // winner
  if (lhs->winner != rhs->winner) {
    return false;
  }
  return true;
}

bool
tide_msgs__msg__GameResult__copy(
  const tide_msgs__msg__GameResult * input,
  tide_msgs__msg__GameResult * output)
{
  if (!input || !output) {
    return false;
  }
  // winner
  output->winner = input->winner;
  return true;
}

tide_msgs__msg__GameResult *
tide_msgs__msg__GameResult__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tide_msgs__msg__GameResult * msg = (tide_msgs__msg__GameResult *)allocator.allocate(sizeof(tide_msgs__msg__GameResult), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tide_msgs__msg__GameResult));
  bool success = tide_msgs__msg__GameResult__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tide_msgs__msg__GameResult__destroy(tide_msgs__msg__GameResult * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tide_msgs__msg__GameResult__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tide_msgs__msg__GameResult__Sequence__init(tide_msgs__msg__GameResult__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tide_msgs__msg__GameResult * data = NULL;

  if (size) {
    data = (tide_msgs__msg__GameResult *)allocator.zero_allocate(size, sizeof(tide_msgs__msg__GameResult), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tide_msgs__msg__GameResult__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tide_msgs__msg__GameResult__fini(&data[i - 1]);
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
tide_msgs__msg__GameResult__Sequence__fini(tide_msgs__msg__GameResult__Sequence * array)
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
      tide_msgs__msg__GameResult__fini(&array->data[i]);
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

tide_msgs__msg__GameResult__Sequence *
tide_msgs__msg__GameResult__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tide_msgs__msg__GameResult__Sequence * array = (tide_msgs__msg__GameResult__Sequence *)allocator.allocate(sizeof(tide_msgs__msg__GameResult__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tide_msgs__msg__GameResult__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tide_msgs__msg__GameResult__Sequence__destroy(tide_msgs__msg__GameResult__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tide_msgs__msg__GameResult__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tide_msgs__msg__GameResult__Sequence__are_equal(const tide_msgs__msg__GameResult__Sequence * lhs, const tide_msgs__msg__GameResult__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tide_msgs__msg__GameResult__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tide_msgs__msg__GameResult__Sequence__copy(
  const tide_msgs__msg__GameResult__Sequence * input,
  tide_msgs__msg__GameResult__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tide_msgs__msg__GameResult);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tide_msgs__msg__GameResult * data =
      (tide_msgs__msg__GameResult *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tide_msgs__msg__GameResult__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tide_msgs__msg__GameResult__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tide_msgs__msg__GameResult__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
