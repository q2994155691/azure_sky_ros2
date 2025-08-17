// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tide_msgs:msg/InteractID.idl
// generated code does not contain a copyright notice
#include "tide_msgs/msg/detail/interact_id__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
tide_msgs__msg__InteractID__init(tide_msgs__msg__InteractID * msg)
{
  if (!msg) {
    return false;
  }
  // teammate_hero
  // teammate_infantry3
  // teammate_infantry4
  // teammate_infantry5
  // teammate_sentry
  // client_hero
  // client_infantry3
  // client_infantry4
  // client_infantry5
  return true;
}

void
tide_msgs__msg__InteractID__fini(tide_msgs__msg__InteractID * msg)
{
  if (!msg) {
    return;
  }
  // teammate_hero
  // teammate_infantry3
  // teammate_infantry4
  // teammate_infantry5
  // teammate_sentry
  // client_hero
  // client_infantry3
  // client_infantry4
  // client_infantry5
}

bool
tide_msgs__msg__InteractID__are_equal(const tide_msgs__msg__InteractID * lhs, const tide_msgs__msg__InteractID * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // teammate_hero
  if (lhs->teammate_hero != rhs->teammate_hero) {
    return false;
  }
  // teammate_infantry3
  if (lhs->teammate_infantry3 != rhs->teammate_infantry3) {
    return false;
  }
  // teammate_infantry4
  if (lhs->teammate_infantry4 != rhs->teammate_infantry4) {
    return false;
  }
  // teammate_infantry5
  if (lhs->teammate_infantry5 != rhs->teammate_infantry5) {
    return false;
  }
  // teammate_sentry
  if (lhs->teammate_sentry != rhs->teammate_sentry) {
    return false;
  }
  // client_hero
  if (lhs->client_hero != rhs->client_hero) {
    return false;
  }
  // client_infantry3
  if (lhs->client_infantry3 != rhs->client_infantry3) {
    return false;
  }
  // client_infantry4
  if (lhs->client_infantry4 != rhs->client_infantry4) {
    return false;
  }
  // client_infantry5
  if (lhs->client_infantry5 != rhs->client_infantry5) {
    return false;
  }
  return true;
}

bool
tide_msgs__msg__InteractID__copy(
  const tide_msgs__msg__InteractID * input,
  tide_msgs__msg__InteractID * output)
{
  if (!input || !output) {
    return false;
  }
  // teammate_hero
  output->teammate_hero = input->teammate_hero;
  // teammate_infantry3
  output->teammate_infantry3 = input->teammate_infantry3;
  // teammate_infantry4
  output->teammate_infantry4 = input->teammate_infantry4;
  // teammate_infantry5
  output->teammate_infantry5 = input->teammate_infantry5;
  // teammate_sentry
  output->teammate_sentry = input->teammate_sentry;
  // client_hero
  output->client_hero = input->client_hero;
  // client_infantry3
  output->client_infantry3 = input->client_infantry3;
  // client_infantry4
  output->client_infantry4 = input->client_infantry4;
  // client_infantry5
  output->client_infantry5 = input->client_infantry5;
  return true;
}

tide_msgs__msg__InteractID *
tide_msgs__msg__InteractID__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tide_msgs__msg__InteractID * msg = (tide_msgs__msg__InteractID *)allocator.allocate(sizeof(tide_msgs__msg__InteractID), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tide_msgs__msg__InteractID));
  bool success = tide_msgs__msg__InteractID__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tide_msgs__msg__InteractID__destroy(tide_msgs__msg__InteractID * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tide_msgs__msg__InteractID__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tide_msgs__msg__InteractID__Sequence__init(tide_msgs__msg__InteractID__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tide_msgs__msg__InteractID * data = NULL;

  if (size) {
    data = (tide_msgs__msg__InteractID *)allocator.zero_allocate(size, sizeof(tide_msgs__msg__InteractID), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tide_msgs__msg__InteractID__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tide_msgs__msg__InteractID__fini(&data[i - 1]);
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
tide_msgs__msg__InteractID__Sequence__fini(tide_msgs__msg__InteractID__Sequence * array)
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
      tide_msgs__msg__InteractID__fini(&array->data[i]);
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

tide_msgs__msg__InteractID__Sequence *
tide_msgs__msg__InteractID__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tide_msgs__msg__InteractID__Sequence * array = (tide_msgs__msg__InteractID__Sequence *)allocator.allocate(sizeof(tide_msgs__msg__InteractID__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tide_msgs__msg__InteractID__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tide_msgs__msg__InteractID__Sequence__destroy(tide_msgs__msg__InteractID__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tide_msgs__msg__InteractID__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tide_msgs__msg__InteractID__Sequence__are_equal(const tide_msgs__msg__InteractID__Sequence * lhs, const tide_msgs__msg__InteractID__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tide_msgs__msg__InteractID__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tide_msgs__msg__InteractID__Sequence__copy(
  const tide_msgs__msg__InteractID__Sequence * input,
  tide_msgs__msg__InteractID__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tide_msgs__msg__InteractID);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tide_msgs__msg__InteractID * data =
      (tide_msgs__msg__InteractID *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tide_msgs__msg__InteractID__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tide_msgs__msg__InteractID__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tide_msgs__msg__InteractID__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
