// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tide_msgs:msg/GroundRobot.idl
// generated code does not contain a copyright notice
#include "tide_msgs/msg/detail/ground_robot__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
tide_msgs__msg__GroundRobot__init(tide_msgs__msg__GroundRobot * msg)
{
  if (!msg) {
    return false;
  }
  // hero_x
  // hero_y
  // engineer_x
  // engineer_y
  // standard_3_x
  // standard_3_y
  // standard_4_x
  // standard_4_y
  // reserved1
  // reserved2
  return true;
}

void
tide_msgs__msg__GroundRobot__fini(tide_msgs__msg__GroundRobot * msg)
{
  if (!msg) {
    return;
  }
  // hero_x
  // hero_y
  // engineer_x
  // engineer_y
  // standard_3_x
  // standard_3_y
  // standard_4_x
  // standard_4_y
  // reserved1
  // reserved2
}

bool
tide_msgs__msg__GroundRobot__are_equal(const tide_msgs__msg__GroundRobot * lhs, const tide_msgs__msg__GroundRobot * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // hero_x
  if (lhs->hero_x != rhs->hero_x) {
    return false;
  }
  // hero_y
  if (lhs->hero_y != rhs->hero_y) {
    return false;
  }
  // engineer_x
  if (lhs->engineer_x != rhs->engineer_x) {
    return false;
  }
  // engineer_y
  if (lhs->engineer_y != rhs->engineer_y) {
    return false;
  }
  // standard_3_x
  if (lhs->standard_3_x != rhs->standard_3_x) {
    return false;
  }
  // standard_3_y
  if (lhs->standard_3_y != rhs->standard_3_y) {
    return false;
  }
  // standard_4_x
  if (lhs->standard_4_x != rhs->standard_4_x) {
    return false;
  }
  // standard_4_y
  if (lhs->standard_4_y != rhs->standard_4_y) {
    return false;
  }
  // reserved1
  if (lhs->reserved1 != rhs->reserved1) {
    return false;
  }
  // reserved2
  if (lhs->reserved2 != rhs->reserved2) {
    return false;
  }
  return true;
}

bool
tide_msgs__msg__GroundRobot__copy(
  const tide_msgs__msg__GroundRobot * input,
  tide_msgs__msg__GroundRobot * output)
{
  if (!input || !output) {
    return false;
  }
  // hero_x
  output->hero_x = input->hero_x;
  // hero_y
  output->hero_y = input->hero_y;
  // engineer_x
  output->engineer_x = input->engineer_x;
  // engineer_y
  output->engineer_y = input->engineer_y;
  // standard_3_x
  output->standard_3_x = input->standard_3_x;
  // standard_3_y
  output->standard_3_y = input->standard_3_y;
  // standard_4_x
  output->standard_4_x = input->standard_4_x;
  // standard_4_y
  output->standard_4_y = input->standard_4_y;
  // reserved1
  output->reserved1 = input->reserved1;
  // reserved2
  output->reserved2 = input->reserved2;
  return true;
}

tide_msgs__msg__GroundRobot *
tide_msgs__msg__GroundRobot__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tide_msgs__msg__GroundRobot * msg = (tide_msgs__msg__GroundRobot *)allocator.allocate(sizeof(tide_msgs__msg__GroundRobot), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tide_msgs__msg__GroundRobot));
  bool success = tide_msgs__msg__GroundRobot__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tide_msgs__msg__GroundRobot__destroy(tide_msgs__msg__GroundRobot * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tide_msgs__msg__GroundRobot__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tide_msgs__msg__GroundRobot__Sequence__init(tide_msgs__msg__GroundRobot__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tide_msgs__msg__GroundRobot * data = NULL;

  if (size) {
    data = (tide_msgs__msg__GroundRobot *)allocator.zero_allocate(size, sizeof(tide_msgs__msg__GroundRobot), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tide_msgs__msg__GroundRobot__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tide_msgs__msg__GroundRobot__fini(&data[i - 1]);
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
tide_msgs__msg__GroundRobot__Sequence__fini(tide_msgs__msg__GroundRobot__Sequence * array)
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
      tide_msgs__msg__GroundRobot__fini(&array->data[i]);
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

tide_msgs__msg__GroundRobot__Sequence *
tide_msgs__msg__GroundRobot__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tide_msgs__msg__GroundRobot__Sequence * array = (tide_msgs__msg__GroundRobot__Sequence *)allocator.allocate(sizeof(tide_msgs__msg__GroundRobot__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tide_msgs__msg__GroundRobot__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tide_msgs__msg__GroundRobot__Sequence__destroy(tide_msgs__msg__GroundRobot__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tide_msgs__msg__GroundRobot__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tide_msgs__msg__GroundRobot__Sequence__are_equal(const tide_msgs__msg__GroundRobot__Sequence * lhs, const tide_msgs__msg__GroundRobot__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tide_msgs__msg__GroundRobot__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tide_msgs__msg__GroundRobot__Sequence__copy(
  const tide_msgs__msg__GroundRobot__Sequence * input,
  tide_msgs__msg__GroundRobot__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tide_msgs__msg__GroundRobot);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tide_msgs__msg__GroundRobot * data =
      (tide_msgs__msg__GroundRobot *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tide_msgs__msg__GroundRobot__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tide_msgs__msg__GroundRobot__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tide_msgs__msg__GroundRobot__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
