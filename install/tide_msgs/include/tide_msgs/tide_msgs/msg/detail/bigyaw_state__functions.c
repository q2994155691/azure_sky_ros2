// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tide_msgs:msg/BigyawState.idl
// generated code does not contain a copyright notice
#include "tide_msgs/msg/detail/bigyaw_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
tide_msgs__msg__BigyawState__init(tide_msgs__msg__BigyawState * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    tide_msgs__msg__BigyawState__fini(msg);
    return false;
  }
  // mode
  // ref
  // cur
  return true;
}

void
tide_msgs__msg__BigyawState__fini(tide_msgs__msg__BigyawState * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // mode
  // ref
  // cur
}

bool
tide_msgs__msg__BigyawState__are_equal(const tide_msgs__msg__BigyawState * lhs, const tide_msgs__msg__BigyawState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // mode
  if (lhs->mode != rhs->mode) {
    return false;
  }
  // ref
  if (lhs->ref != rhs->ref) {
    return false;
  }
  // cur
  if (lhs->cur != rhs->cur) {
    return false;
  }
  return true;
}

bool
tide_msgs__msg__BigyawState__copy(
  const tide_msgs__msg__BigyawState * input,
  tide_msgs__msg__BigyawState * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // mode
  output->mode = input->mode;
  // ref
  output->ref = input->ref;
  // cur
  output->cur = input->cur;
  return true;
}

tide_msgs__msg__BigyawState *
tide_msgs__msg__BigyawState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tide_msgs__msg__BigyawState * msg = (tide_msgs__msg__BigyawState *)allocator.allocate(sizeof(tide_msgs__msg__BigyawState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tide_msgs__msg__BigyawState));
  bool success = tide_msgs__msg__BigyawState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tide_msgs__msg__BigyawState__destroy(tide_msgs__msg__BigyawState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tide_msgs__msg__BigyawState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tide_msgs__msg__BigyawState__Sequence__init(tide_msgs__msg__BigyawState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tide_msgs__msg__BigyawState * data = NULL;

  if (size) {
    data = (tide_msgs__msg__BigyawState *)allocator.zero_allocate(size, sizeof(tide_msgs__msg__BigyawState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tide_msgs__msg__BigyawState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tide_msgs__msg__BigyawState__fini(&data[i - 1]);
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
tide_msgs__msg__BigyawState__Sequence__fini(tide_msgs__msg__BigyawState__Sequence * array)
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
      tide_msgs__msg__BigyawState__fini(&array->data[i]);
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

tide_msgs__msg__BigyawState__Sequence *
tide_msgs__msg__BigyawState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tide_msgs__msg__BigyawState__Sequence * array = (tide_msgs__msg__BigyawState__Sequence *)allocator.allocate(sizeof(tide_msgs__msg__BigyawState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tide_msgs__msg__BigyawState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tide_msgs__msg__BigyawState__Sequence__destroy(tide_msgs__msg__BigyawState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tide_msgs__msg__BigyawState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tide_msgs__msg__BigyawState__Sequence__are_equal(const tide_msgs__msg__BigyawState__Sequence * lhs, const tide_msgs__msg__BigyawState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tide_msgs__msg__BigyawState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tide_msgs__msg__BigyawState__Sequence__copy(
  const tide_msgs__msg__BigyawState__Sequence * input,
  tide_msgs__msg__BigyawState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tide_msgs__msg__BigyawState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tide_msgs__msg__BigyawState * data =
      (tide_msgs__msg__BigyawState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tide_msgs__msg__BigyawState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tide_msgs__msg__BigyawState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tide_msgs__msg__BigyawState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
