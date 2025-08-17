// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tide_msgs:msg/PowerHeatData.idl
// generated code does not contain a copyright notice
#include "tide_msgs/msg/detail/power_heat_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
tide_msgs__msg__PowerHeatData__init(tide_msgs__msg__PowerHeatData * msg)
{
  if (!msg) {
    return false;
  }
  // reserved1
  // reserved2
  // reserved3
  // buffer_energy
  // shooter_id1_17mm_cooling_heat
  // shooter_id2_17mm_cooling_heat
  // shooter_id1_42mm_cooling_heat
  return true;
}

void
tide_msgs__msg__PowerHeatData__fini(tide_msgs__msg__PowerHeatData * msg)
{
  if (!msg) {
    return;
  }
  // reserved1
  // reserved2
  // reserved3
  // buffer_energy
  // shooter_id1_17mm_cooling_heat
  // shooter_id2_17mm_cooling_heat
  // shooter_id1_42mm_cooling_heat
}

bool
tide_msgs__msg__PowerHeatData__are_equal(const tide_msgs__msg__PowerHeatData * lhs, const tide_msgs__msg__PowerHeatData * rhs)
{
  if (!lhs || !rhs) {
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
  // reserved3
  if (lhs->reserved3 != rhs->reserved3) {
    return false;
  }
  // buffer_energy
  if (lhs->buffer_energy != rhs->buffer_energy) {
    return false;
  }
  // shooter_id1_17mm_cooling_heat
  if (lhs->shooter_id1_17mm_cooling_heat != rhs->shooter_id1_17mm_cooling_heat) {
    return false;
  }
  // shooter_id2_17mm_cooling_heat
  if (lhs->shooter_id2_17mm_cooling_heat != rhs->shooter_id2_17mm_cooling_heat) {
    return false;
  }
  // shooter_id1_42mm_cooling_heat
  if (lhs->shooter_id1_42mm_cooling_heat != rhs->shooter_id1_42mm_cooling_heat) {
    return false;
  }
  return true;
}

bool
tide_msgs__msg__PowerHeatData__copy(
  const tide_msgs__msg__PowerHeatData * input,
  tide_msgs__msg__PowerHeatData * output)
{
  if (!input || !output) {
    return false;
  }
  // reserved1
  output->reserved1 = input->reserved1;
  // reserved2
  output->reserved2 = input->reserved2;
  // reserved3
  output->reserved3 = input->reserved3;
  // buffer_energy
  output->buffer_energy = input->buffer_energy;
  // shooter_id1_17mm_cooling_heat
  output->shooter_id1_17mm_cooling_heat = input->shooter_id1_17mm_cooling_heat;
  // shooter_id2_17mm_cooling_heat
  output->shooter_id2_17mm_cooling_heat = input->shooter_id2_17mm_cooling_heat;
  // shooter_id1_42mm_cooling_heat
  output->shooter_id1_42mm_cooling_heat = input->shooter_id1_42mm_cooling_heat;
  return true;
}

tide_msgs__msg__PowerHeatData *
tide_msgs__msg__PowerHeatData__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tide_msgs__msg__PowerHeatData * msg = (tide_msgs__msg__PowerHeatData *)allocator.allocate(sizeof(tide_msgs__msg__PowerHeatData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tide_msgs__msg__PowerHeatData));
  bool success = tide_msgs__msg__PowerHeatData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tide_msgs__msg__PowerHeatData__destroy(tide_msgs__msg__PowerHeatData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tide_msgs__msg__PowerHeatData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tide_msgs__msg__PowerHeatData__Sequence__init(tide_msgs__msg__PowerHeatData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tide_msgs__msg__PowerHeatData * data = NULL;

  if (size) {
    data = (tide_msgs__msg__PowerHeatData *)allocator.zero_allocate(size, sizeof(tide_msgs__msg__PowerHeatData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tide_msgs__msg__PowerHeatData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tide_msgs__msg__PowerHeatData__fini(&data[i - 1]);
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
tide_msgs__msg__PowerHeatData__Sequence__fini(tide_msgs__msg__PowerHeatData__Sequence * array)
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
      tide_msgs__msg__PowerHeatData__fini(&array->data[i]);
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

tide_msgs__msg__PowerHeatData__Sequence *
tide_msgs__msg__PowerHeatData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tide_msgs__msg__PowerHeatData__Sequence * array = (tide_msgs__msg__PowerHeatData__Sequence *)allocator.allocate(sizeof(tide_msgs__msg__PowerHeatData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tide_msgs__msg__PowerHeatData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tide_msgs__msg__PowerHeatData__Sequence__destroy(tide_msgs__msg__PowerHeatData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tide_msgs__msg__PowerHeatData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tide_msgs__msg__PowerHeatData__Sequence__are_equal(const tide_msgs__msg__PowerHeatData__Sequence * lhs, const tide_msgs__msg__PowerHeatData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tide_msgs__msg__PowerHeatData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tide_msgs__msg__PowerHeatData__Sequence__copy(
  const tide_msgs__msg__PowerHeatData__Sequence * input,
  tide_msgs__msg__PowerHeatData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tide_msgs__msg__PowerHeatData);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tide_msgs__msg__PowerHeatData * data =
      (tide_msgs__msg__PowerHeatData *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tide_msgs__msg__PowerHeatData__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tide_msgs__msg__PowerHeatData__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tide_msgs__msg__PowerHeatData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
