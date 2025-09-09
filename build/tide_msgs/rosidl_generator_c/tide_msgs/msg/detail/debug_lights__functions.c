// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tide_msgs:msg/DebugLights.idl
// generated code does not contain a copyright notice
#include "tide_msgs/msg/detail/debug_lights__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `data`
#include "tide_msgs/msg/detail/debug_light__functions.h"

bool
tide_msgs__msg__DebugLights__init(tide_msgs__msg__DebugLights * msg)
{
  if (!msg) {
    return false;
  }
  // data
  if (!tide_msgs__msg__DebugLight__Sequence__init(&msg->data, 0)) {
    tide_msgs__msg__DebugLights__fini(msg);
    return false;
  }
  return true;
}

void
tide_msgs__msg__DebugLights__fini(tide_msgs__msg__DebugLights * msg)
{
  if (!msg) {
    return;
  }
  // data
  tide_msgs__msg__DebugLight__Sequence__fini(&msg->data);
}

bool
tide_msgs__msg__DebugLights__are_equal(const tide_msgs__msg__DebugLights * lhs, const tide_msgs__msg__DebugLights * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // data
  if (!tide_msgs__msg__DebugLight__Sequence__are_equal(
      &(lhs->data), &(rhs->data)))
  {
    return false;
  }
  return true;
}

bool
tide_msgs__msg__DebugLights__copy(
  const tide_msgs__msg__DebugLights * input,
  tide_msgs__msg__DebugLights * output)
{
  if (!input || !output) {
    return false;
  }
  // data
  if (!tide_msgs__msg__DebugLight__Sequence__copy(
      &(input->data), &(output->data)))
  {
    return false;
  }
  return true;
}

tide_msgs__msg__DebugLights *
tide_msgs__msg__DebugLights__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tide_msgs__msg__DebugLights * msg = (tide_msgs__msg__DebugLights *)allocator.allocate(sizeof(tide_msgs__msg__DebugLights), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tide_msgs__msg__DebugLights));
  bool success = tide_msgs__msg__DebugLights__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tide_msgs__msg__DebugLights__destroy(tide_msgs__msg__DebugLights * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tide_msgs__msg__DebugLights__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tide_msgs__msg__DebugLights__Sequence__init(tide_msgs__msg__DebugLights__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tide_msgs__msg__DebugLights * data = NULL;

  if (size) {
    data = (tide_msgs__msg__DebugLights *)allocator.zero_allocate(size, sizeof(tide_msgs__msg__DebugLights), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tide_msgs__msg__DebugLights__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tide_msgs__msg__DebugLights__fini(&data[i - 1]);
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
tide_msgs__msg__DebugLights__Sequence__fini(tide_msgs__msg__DebugLights__Sequence * array)
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
      tide_msgs__msg__DebugLights__fini(&array->data[i]);
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

tide_msgs__msg__DebugLights__Sequence *
tide_msgs__msg__DebugLights__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tide_msgs__msg__DebugLights__Sequence * array = (tide_msgs__msg__DebugLights__Sequence *)allocator.allocate(sizeof(tide_msgs__msg__DebugLights__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tide_msgs__msg__DebugLights__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tide_msgs__msg__DebugLights__Sequence__destroy(tide_msgs__msg__DebugLights__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tide_msgs__msg__DebugLights__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tide_msgs__msg__DebugLights__Sequence__are_equal(const tide_msgs__msg__DebugLights__Sequence * lhs, const tide_msgs__msg__DebugLights__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tide_msgs__msg__DebugLights__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tide_msgs__msg__DebugLights__Sequence__copy(
  const tide_msgs__msg__DebugLights__Sequence * input,
  tide_msgs__msg__DebugLights__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tide_msgs__msg__DebugLights);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tide_msgs__msg__DebugLights * data =
      (tide_msgs__msg__DebugLights *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tide_msgs__msg__DebugLights__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tide_msgs__msg__DebugLights__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tide_msgs__msg__DebugLights__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
