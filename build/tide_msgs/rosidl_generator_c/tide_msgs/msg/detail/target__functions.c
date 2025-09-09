// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tide_msgs:msg/Target.idl
// generated code does not contain a copyright notice
#include "tide_msgs/msg/detail/target__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `id`
#include "rosidl_runtime_c/string_functions.h"
// Member `position`
#include "geometry_msgs/msg/detail/point__functions.h"
// Member `velocity`
#include "geometry_msgs/msg/detail/vector3__functions.h"

bool
tide_msgs__msg__Target__init(tide_msgs__msg__Target * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    tide_msgs__msg__Target__fini(msg);
    return false;
  }
  // tracking
  // id
  if (!rosidl_runtime_c__String__init(&msg->id)) {
    tide_msgs__msg__Target__fini(msg);
    return false;
  }
  // armors_num
  // position
  if (!geometry_msgs__msg__Point__init(&msg->position)) {
    tide_msgs__msg__Target__fini(msg);
    return false;
  }
  // velocity
  if (!geometry_msgs__msg__Vector3__init(&msg->velocity)) {
    tide_msgs__msg__Target__fini(msg);
    return false;
  }
  // yaw
  // v_yaw
  // radius_1
  // radius_2
  // dz
  return true;
}

void
tide_msgs__msg__Target__fini(tide_msgs__msg__Target * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // tracking
  // id
  rosidl_runtime_c__String__fini(&msg->id);
  // armors_num
  // position
  geometry_msgs__msg__Point__fini(&msg->position);
  // velocity
  geometry_msgs__msg__Vector3__fini(&msg->velocity);
  // yaw
  // v_yaw
  // radius_1
  // radius_2
  // dz
}

bool
tide_msgs__msg__Target__are_equal(const tide_msgs__msg__Target * lhs, const tide_msgs__msg__Target * rhs)
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
  // tracking
  if (lhs->tracking != rhs->tracking) {
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->id), &(rhs->id)))
  {
    return false;
  }
  // armors_num
  if (lhs->armors_num != rhs->armors_num) {
    return false;
  }
  // position
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->position), &(rhs->position)))
  {
    return false;
  }
  // velocity
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->velocity), &(rhs->velocity)))
  {
    return false;
  }
  // yaw
  if (lhs->yaw != rhs->yaw) {
    return false;
  }
  // v_yaw
  if (lhs->v_yaw != rhs->v_yaw) {
    return false;
  }
  // radius_1
  if (lhs->radius_1 != rhs->radius_1) {
    return false;
  }
  // radius_2
  if (lhs->radius_2 != rhs->radius_2) {
    return false;
  }
  // dz
  if (lhs->dz != rhs->dz) {
    return false;
  }
  return true;
}

bool
tide_msgs__msg__Target__copy(
  const tide_msgs__msg__Target * input,
  tide_msgs__msg__Target * output)
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
  // tracking
  output->tracking = input->tracking;
  // id
  if (!rosidl_runtime_c__String__copy(
      &(input->id), &(output->id)))
  {
    return false;
  }
  // armors_num
  output->armors_num = input->armors_num;
  // position
  if (!geometry_msgs__msg__Point__copy(
      &(input->position), &(output->position)))
  {
    return false;
  }
  // velocity
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->velocity), &(output->velocity)))
  {
    return false;
  }
  // yaw
  output->yaw = input->yaw;
  // v_yaw
  output->v_yaw = input->v_yaw;
  // radius_1
  output->radius_1 = input->radius_1;
  // radius_2
  output->radius_2 = input->radius_2;
  // dz
  output->dz = input->dz;
  return true;
}

tide_msgs__msg__Target *
tide_msgs__msg__Target__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tide_msgs__msg__Target * msg = (tide_msgs__msg__Target *)allocator.allocate(sizeof(tide_msgs__msg__Target), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tide_msgs__msg__Target));
  bool success = tide_msgs__msg__Target__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tide_msgs__msg__Target__destroy(tide_msgs__msg__Target * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tide_msgs__msg__Target__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tide_msgs__msg__Target__Sequence__init(tide_msgs__msg__Target__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tide_msgs__msg__Target * data = NULL;

  if (size) {
    data = (tide_msgs__msg__Target *)allocator.zero_allocate(size, sizeof(tide_msgs__msg__Target), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tide_msgs__msg__Target__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tide_msgs__msg__Target__fini(&data[i - 1]);
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
tide_msgs__msg__Target__Sequence__fini(tide_msgs__msg__Target__Sequence * array)
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
      tide_msgs__msg__Target__fini(&array->data[i]);
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

tide_msgs__msg__Target__Sequence *
tide_msgs__msg__Target__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tide_msgs__msg__Target__Sequence * array = (tide_msgs__msg__Target__Sequence *)allocator.allocate(sizeof(tide_msgs__msg__Target__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tide_msgs__msg__Target__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tide_msgs__msg__Target__Sequence__destroy(tide_msgs__msg__Target__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tide_msgs__msg__Target__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tide_msgs__msg__Target__Sequence__are_equal(const tide_msgs__msg__Target__Sequence * lhs, const tide_msgs__msg__Target__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tide_msgs__msg__Target__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tide_msgs__msg__Target__Sequence__copy(
  const tide_msgs__msg__Target__Sequence * input,
  tide_msgs__msg__Target__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tide_msgs__msg__Target);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tide_msgs__msg__Target * data =
      (tide_msgs__msg__Target *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tide_msgs__msg__Target__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tide_msgs__msg__Target__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tide_msgs__msg__Target__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
