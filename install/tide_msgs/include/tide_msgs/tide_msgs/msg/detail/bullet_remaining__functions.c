// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tide_msgs:msg/BulletRemaining.idl
// generated code does not contain a copyright notice
#include "tide_msgs/msg/detail/bullet_remaining__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
tide_msgs__msg__BulletRemaining__init(tide_msgs__msg__BulletRemaining * msg)
{
  if (!msg) {
    return false;
  }
  // bullet_remaining_num_17mm
  // bullet_remaining_num_42mm
  // coin_remaining_num
  return true;
}

void
tide_msgs__msg__BulletRemaining__fini(tide_msgs__msg__BulletRemaining * msg)
{
  if (!msg) {
    return;
  }
  // bullet_remaining_num_17mm
  // bullet_remaining_num_42mm
  // coin_remaining_num
}

bool
tide_msgs__msg__BulletRemaining__are_equal(const tide_msgs__msg__BulletRemaining * lhs, const tide_msgs__msg__BulletRemaining * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // bullet_remaining_num_17mm
  if (lhs->bullet_remaining_num_17mm != rhs->bullet_remaining_num_17mm) {
    return false;
  }
  // bullet_remaining_num_42mm
  if (lhs->bullet_remaining_num_42mm != rhs->bullet_remaining_num_42mm) {
    return false;
  }
  // coin_remaining_num
  if (lhs->coin_remaining_num != rhs->coin_remaining_num) {
    return false;
  }
  return true;
}

bool
tide_msgs__msg__BulletRemaining__copy(
  const tide_msgs__msg__BulletRemaining * input,
  tide_msgs__msg__BulletRemaining * output)
{
  if (!input || !output) {
    return false;
  }
  // bullet_remaining_num_17mm
  output->bullet_remaining_num_17mm = input->bullet_remaining_num_17mm;
  // bullet_remaining_num_42mm
  output->bullet_remaining_num_42mm = input->bullet_remaining_num_42mm;
  // coin_remaining_num
  output->coin_remaining_num = input->coin_remaining_num;
  return true;
}

tide_msgs__msg__BulletRemaining *
tide_msgs__msg__BulletRemaining__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tide_msgs__msg__BulletRemaining * msg = (tide_msgs__msg__BulletRemaining *)allocator.allocate(sizeof(tide_msgs__msg__BulletRemaining), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tide_msgs__msg__BulletRemaining));
  bool success = tide_msgs__msg__BulletRemaining__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tide_msgs__msg__BulletRemaining__destroy(tide_msgs__msg__BulletRemaining * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tide_msgs__msg__BulletRemaining__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tide_msgs__msg__BulletRemaining__Sequence__init(tide_msgs__msg__BulletRemaining__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tide_msgs__msg__BulletRemaining * data = NULL;

  if (size) {
    data = (tide_msgs__msg__BulletRemaining *)allocator.zero_allocate(size, sizeof(tide_msgs__msg__BulletRemaining), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tide_msgs__msg__BulletRemaining__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tide_msgs__msg__BulletRemaining__fini(&data[i - 1]);
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
tide_msgs__msg__BulletRemaining__Sequence__fini(tide_msgs__msg__BulletRemaining__Sequence * array)
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
      tide_msgs__msg__BulletRemaining__fini(&array->data[i]);
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

tide_msgs__msg__BulletRemaining__Sequence *
tide_msgs__msg__BulletRemaining__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tide_msgs__msg__BulletRemaining__Sequence * array = (tide_msgs__msg__BulletRemaining__Sequence *)allocator.allocate(sizeof(tide_msgs__msg__BulletRemaining__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tide_msgs__msg__BulletRemaining__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tide_msgs__msg__BulletRemaining__Sequence__destroy(tide_msgs__msg__BulletRemaining__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tide_msgs__msg__BulletRemaining__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tide_msgs__msg__BulletRemaining__Sequence__are_equal(const tide_msgs__msg__BulletRemaining__Sequence * lhs, const tide_msgs__msg__BulletRemaining__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tide_msgs__msg__BulletRemaining__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tide_msgs__msg__BulletRemaining__Sequence__copy(
  const tide_msgs__msg__BulletRemaining__Sequence * input,
  tide_msgs__msg__BulletRemaining__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tide_msgs__msg__BulletRemaining);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tide_msgs__msg__BulletRemaining * data =
      (tide_msgs__msg__BulletRemaining *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tide_msgs__msg__BulletRemaining__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tide_msgs__msg__BulletRemaining__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tide_msgs__msg__BulletRemaining__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
