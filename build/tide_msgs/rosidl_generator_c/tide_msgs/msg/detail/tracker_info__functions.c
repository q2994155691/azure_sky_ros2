// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tide_msgs:msg/TrackerInfo.idl
// generated code does not contain a copyright notice
#include "tide_msgs/msg/detail/tracker_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `position`
#include "geometry_msgs/msg/detail/point__functions.h"

bool
tide_msgs__msg__TrackerInfo__init(tide_msgs__msg__TrackerInfo * msg)
{
  if (!msg) {
    return false;
  }
  // position_diff
  // yaw_diff
  // position
  if (!geometry_msgs__msg__Point__init(&msg->position)) {
    tide_msgs__msg__TrackerInfo__fini(msg);
    return false;
  }
  // yaw
  // tracking
  return true;
}

void
tide_msgs__msg__TrackerInfo__fini(tide_msgs__msg__TrackerInfo * msg)
{
  if (!msg) {
    return;
  }
  // position_diff
  // yaw_diff
  // position
  geometry_msgs__msg__Point__fini(&msg->position);
  // yaw
  // tracking
}

bool
tide_msgs__msg__TrackerInfo__are_equal(const tide_msgs__msg__TrackerInfo * lhs, const tide_msgs__msg__TrackerInfo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // position_diff
  if (lhs->position_diff != rhs->position_diff) {
    return false;
  }
  // yaw_diff
  if (lhs->yaw_diff != rhs->yaw_diff) {
    return false;
  }
  // position
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->position), &(rhs->position)))
  {
    return false;
  }
  // yaw
  if (lhs->yaw != rhs->yaw) {
    return false;
  }
  // tracking
  if (lhs->tracking != rhs->tracking) {
    return false;
  }
  return true;
}

bool
tide_msgs__msg__TrackerInfo__copy(
  const tide_msgs__msg__TrackerInfo * input,
  tide_msgs__msg__TrackerInfo * output)
{
  if (!input || !output) {
    return false;
  }
  // position_diff
  output->position_diff = input->position_diff;
  // yaw_diff
  output->yaw_diff = input->yaw_diff;
  // position
  if (!geometry_msgs__msg__Point__copy(
      &(input->position), &(output->position)))
  {
    return false;
  }
  // yaw
  output->yaw = input->yaw;
  // tracking
  output->tracking = input->tracking;
  return true;
}

tide_msgs__msg__TrackerInfo *
tide_msgs__msg__TrackerInfo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tide_msgs__msg__TrackerInfo * msg = (tide_msgs__msg__TrackerInfo *)allocator.allocate(sizeof(tide_msgs__msg__TrackerInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tide_msgs__msg__TrackerInfo));
  bool success = tide_msgs__msg__TrackerInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tide_msgs__msg__TrackerInfo__destroy(tide_msgs__msg__TrackerInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tide_msgs__msg__TrackerInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tide_msgs__msg__TrackerInfo__Sequence__init(tide_msgs__msg__TrackerInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tide_msgs__msg__TrackerInfo * data = NULL;

  if (size) {
    data = (tide_msgs__msg__TrackerInfo *)allocator.zero_allocate(size, sizeof(tide_msgs__msg__TrackerInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tide_msgs__msg__TrackerInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tide_msgs__msg__TrackerInfo__fini(&data[i - 1]);
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
tide_msgs__msg__TrackerInfo__Sequence__fini(tide_msgs__msg__TrackerInfo__Sequence * array)
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
      tide_msgs__msg__TrackerInfo__fini(&array->data[i]);
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

tide_msgs__msg__TrackerInfo__Sequence *
tide_msgs__msg__TrackerInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tide_msgs__msg__TrackerInfo__Sequence * array = (tide_msgs__msg__TrackerInfo__Sequence *)allocator.allocate(sizeof(tide_msgs__msg__TrackerInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tide_msgs__msg__TrackerInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tide_msgs__msg__TrackerInfo__Sequence__destroy(tide_msgs__msg__TrackerInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tide_msgs__msg__TrackerInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tide_msgs__msg__TrackerInfo__Sequence__are_equal(const tide_msgs__msg__TrackerInfo__Sequence * lhs, const tide_msgs__msg__TrackerInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tide_msgs__msg__TrackerInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tide_msgs__msg__TrackerInfo__Sequence__copy(
  const tide_msgs__msg__TrackerInfo__Sequence * input,
  tide_msgs__msg__TrackerInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tide_msgs__msg__TrackerInfo);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tide_msgs__msg__TrackerInfo * data =
      (tide_msgs__msg__TrackerInfo *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tide_msgs__msg__TrackerInfo__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tide_msgs__msg__TrackerInfo__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tide_msgs__msg__TrackerInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
