// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tide_msgs:msg/GameRobotHP.idl
// generated code does not contain a copyright notice
#include "tide_msgs/msg/detail/game_robot_hp__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
tide_msgs__msg__GameRobotHP__init(tide_msgs__msg__GameRobotHP * msg)
{
  if (!msg) {
    return false;
  }
  // red1robot_hp
  // red2robot_hp
  // red3robot_hp
  // red4robot_hp
  // reserved1
  // red7robot_hp
  // redoutpost_hp
  // redbase_hp
  // blue1robot_hp
  // blue2robot_hp
  // blue3robot_hp
  // blue4robot_hp
  // reserved2
  // blue7robot_hp
  // blueoutpost_hp
  // bluebase_hp
  return true;
}

void
tide_msgs__msg__GameRobotHP__fini(tide_msgs__msg__GameRobotHP * msg)
{
  if (!msg) {
    return;
  }
  // red1robot_hp
  // red2robot_hp
  // red3robot_hp
  // red4robot_hp
  // reserved1
  // red7robot_hp
  // redoutpost_hp
  // redbase_hp
  // blue1robot_hp
  // blue2robot_hp
  // blue3robot_hp
  // blue4robot_hp
  // reserved2
  // blue7robot_hp
  // blueoutpost_hp
  // bluebase_hp
}

bool
tide_msgs__msg__GameRobotHP__are_equal(const tide_msgs__msg__GameRobotHP * lhs, const tide_msgs__msg__GameRobotHP * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // red1robot_hp
  if (lhs->red1robot_hp != rhs->red1robot_hp) {
    return false;
  }
  // red2robot_hp
  if (lhs->red2robot_hp != rhs->red2robot_hp) {
    return false;
  }
  // red3robot_hp
  if (lhs->red3robot_hp != rhs->red3robot_hp) {
    return false;
  }
  // red4robot_hp
  if (lhs->red4robot_hp != rhs->red4robot_hp) {
    return false;
  }
  // reserved1
  if (lhs->reserved1 != rhs->reserved1) {
    return false;
  }
  // red7robot_hp
  if (lhs->red7robot_hp != rhs->red7robot_hp) {
    return false;
  }
  // redoutpost_hp
  if (lhs->redoutpost_hp != rhs->redoutpost_hp) {
    return false;
  }
  // redbase_hp
  if (lhs->redbase_hp != rhs->redbase_hp) {
    return false;
  }
  // blue1robot_hp
  if (lhs->blue1robot_hp != rhs->blue1robot_hp) {
    return false;
  }
  // blue2robot_hp
  if (lhs->blue2robot_hp != rhs->blue2robot_hp) {
    return false;
  }
  // blue3robot_hp
  if (lhs->blue3robot_hp != rhs->blue3robot_hp) {
    return false;
  }
  // blue4robot_hp
  if (lhs->blue4robot_hp != rhs->blue4robot_hp) {
    return false;
  }
  // reserved2
  if (lhs->reserved2 != rhs->reserved2) {
    return false;
  }
  // blue7robot_hp
  if (lhs->blue7robot_hp != rhs->blue7robot_hp) {
    return false;
  }
  // blueoutpost_hp
  if (lhs->blueoutpost_hp != rhs->blueoutpost_hp) {
    return false;
  }
  // bluebase_hp
  if (lhs->bluebase_hp != rhs->bluebase_hp) {
    return false;
  }
  return true;
}

bool
tide_msgs__msg__GameRobotHP__copy(
  const tide_msgs__msg__GameRobotHP * input,
  tide_msgs__msg__GameRobotHP * output)
{
  if (!input || !output) {
    return false;
  }
  // red1robot_hp
  output->red1robot_hp = input->red1robot_hp;
  // red2robot_hp
  output->red2robot_hp = input->red2robot_hp;
  // red3robot_hp
  output->red3robot_hp = input->red3robot_hp;
  // red4robot_hp
  output->red4robot_hp = input->red4robot_hp;
  // reserved1
  output->reserved1 = input->reserved1;
  // red7robot_hp
  output->red7robot_hp = input->red7robot_hp;
  // redoutpost_hp
  output->redoutpost_hp = input->redoutpost_hp;
  // redbase_hp
  output->redbase_hp = input->redbase_hp;
  // blue1robot_hp
  output->blue1robot_hp = input->blue1robot_hp;
  // blue2robot_hp
  output->blue2robot_hp = input->blue2robot_hp;
  // blue3robot_hp
  output->blue3robot_hp = input->blue3robot_hp;
  // blue4robot_hp
  output->blue4robot_hp = input->blue4robot_hp;
  // reserved2
  output->reserved2 = input->reserved2;
  // blue7robot_hp
  output->blue7robot_hp = input->blue7robot_hp;
  // blueoutpost_hp
  output->blueoutpost_hp = input->blueoutpost_hp;
  // bluebase_hp
  output->bluebase_hp = input->bluebase_hp;
  return true;
}

tide_msgs__msg__GameRobotHP *
tide_msgs__msg__GameRobotHP__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tide_msgs__msg__GameRobotHP * msg = (tide_msgs__msg__GameRobotHP *)allocator.allocate(sizeof(tide_msgs__msg__GameRobotHP), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tide_msgs__msg__GameRobotHP));
  bool success = tide_msgs__msg__GameRobotHP__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tide_msgs__msg__GameRobotHP__destroy(tide_msgs__msg__GameRobotHP * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tide_msgs__msg__GameRobotHP__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tide_msgs__msg__GameRobotHP__Sequence__init(tide_msgs__msg__GameRobotHP__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tide_msgs__msg__GameRobotHP * data = NULL;

  if (size) {
    data = (tide_msgs__msg__GameRobotHP *)allocator.zero_allocate(size, sizeof(tide_msgs__msg__GameRobotHP), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tide_msgs__msg__GameRobotHP__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tide_msgs__msg__GameRobotHP__fini(&data[i - 1]);
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
tide_msgs__msg__GameRobotHP__Sequence__fini(tide_msgs__msg__GameRobotHP__Sequence * array)
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
      tide_msgs__msg__GameRobotHP__fini(&array->data[i]);
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

tide_msgs__msg__GameRobotHP__Sequence *
tide_msgs__msg__GameRobotHP__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tide_msgs__msg__GameRobotHP__Sequence * array = (tide_msgs__msg__GameRobotHP__Sequence *)allocator.allocate(sizeof(tide_msgs__msg__GameRobotHP__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tide_msgs__msg__GameRobotHP__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tide_msgs__msg__GameRobotHP__Sequence__destroy(tide_msgs__msg__GameRobotHP__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tide_msgs__msg__GameRobotHP__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tide_msgs__msg__GameRobotHP__Sequence__are_equal(const tide_msgs__msg__GameRobotHP__Sequence * lhs, const tide_msgs__msg__GameRobotHP__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tide_msgs__msg__GameRobotHP__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tide_msgs__msg__GameRobotHP__Sequence__copy(
  const tide_msgs__msg__GameRobotHP__Sequence * input,
  tide_msgs__msg__GameRobotHP__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tide_msgs__msg__GameRobotHP);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tide_msgs__msg__GameRobotHP * data =
      (tide_msgs__msg__GameRobotHP *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tide_msgs__msg__GameRobotHP__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tide_msgs__msg__GameRobotHP__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tide_msgs__msg__GameRobotHP__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
