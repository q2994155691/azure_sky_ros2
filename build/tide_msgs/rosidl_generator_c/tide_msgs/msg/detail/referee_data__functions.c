// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tide_msgs:msg/RefereeData.idl
// generated code does not contain a copyright notice
#include "tide_msgs/msg/detail/referee_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `gamestatus`
#include "tide_msgs/msg/detail/game_status__functions.h"
// Member `gameresult`
#include "tide_msgs/msg/detail/game_result__functions.h"
// Member `gamerobothp`
#include "tide_msgs/msg/detail/game_robot_hp__functions.h"
// Member `eventdata`
#include "tide_msgs/msg/detail/event_data__functions.h"
// Member `refereewarning`
#include "tide_msgs/msg/detail/referee_warning__functions.h"
// Member `gamerobotstatus`
#include "tide_msgs/msg/detail/game_robot_status__functions.h"
// Member `powerheatdata`
#include "tide_msgs/msg/detail/power_heat_data__functions.h"
// Member `gamerobotpos`
#include "tide_msgs/msg/detail/game_robot_pos__functions.h"
// Member `buff`
#include "tide_msgs/msg/detail/buff__functions.h"
// Member `robothurt`
#include "tide_msgs/msg/detail/robot_hurt__functions.h"
// Member `shootdata`
#include "tide_msgs/msg/detail/shoot_data__functions.h"
// Member `bulletremaining`
#include "tide_msgs/msg/detail/bullet_remaining__functions.h"
// Member `rfidstatus`
#include "tide_msgs/msg/detail/rfid_status__functions.h"
// Member `groundrobotpos`
#include "tide_msgs/msg/detail/ground_robot__functions.h"
// Member `sentryinfo`
#include "tide_msgs/msg/detail/sentry_info__functions.h"
// Member `interactid`
#include "tide_msgs/msg/detail/interact_id__functions.h"

bool
tide_msgs__msg__RefereeData__init(tide_msgs__msg__RefereeData * msg)
{
  if (!msg) {
    return false;
  }
  // gamestatus
  if (!tide_msgs__msg__GameStatus__init(&msg->gamestatus)) {
    tide_msgs__msg__RefereeData__fini(msg);
    return false;
  }
  // gameresult
  if (!tide_msgs__msg__GameResult__init(&msg->gameresult)) {
    tide_msgs__msg__RefereeData__fini(msg);
    return false;
  }
  // gamerobothp
  if (!tide_msgs__msg__GameRobotHP__init(&msg->gamerobothp)) {
    tide_msgs__msg__RefereeData__fini(msg);
    return false;
  }
  // eventdata
  if (!tide_msgs__msg__EventData__init(&msg->eventdata)) {
    tide_msgs__msg__RefereeData__fini(msg);
    return false;
  }
  // refereewarning
  if (!tide_msgs__msg__RefereeWarning__init(&msg->refereewarning)) {
    tide_msgs__msg__RefereeData__fini(msg);
    return false;
  }
  // gamerobotstatus
  if (!tide_msgs__msg__GameRobotStatus__init(&msg->gamerobotstatus)) {
    tide_msgs__msg__RefereeData__fini(msg);
    return false;
  }
  // powerheatdata
  if (!tide_msgs__msg__PowerHeatData__init(&msg->powerheatdata)) {
    tide_msgs__msg__RefereeData__fini(msg);
    return false;
  }
  // gamerobotpos
  if (!tide_msgs__msg__GameRobotPos__init(&msg->gamerobotpos)) {
    tide_msgs__msg__RefereeData__fini(msg);
    return false;
  }
  // buff
  if (!tide_msgs__msg__Buff__init(&msg->buff)) {
    tide_msgs__msg__RefereeData__fini(msg);
    return false;
  }
  // robothurt
  if (!tide_msgs__msg__RobotHurt__init(&msg->robothurt)) {
    tide_msgs__msg__RefereeData__fini(msg);
    return false;
  }
  // shootdata
  if (!tide_msgs__msg__ShootData__init(&msg->shootdata)) {
    tide_msgs__msg__RefereeData__fini(msg);
    return false;
  }
  // bulletremaining
  if (!tide_msgs__msg__BulletRemaining__init(&msg->bulletremaining)) {
    tide_msgs__msg__RefereeData__fini(msg);
    return false;
  }
  // rfidstatus
  if (!tide_msgs__msg__RFIDStatus__init(&msg->rfidstatus)) {
    tide_msgs__msg__RefereeData__fini(msg);
    return false;
  }
  // groundrobotpos
  if (!tide_msgs__msg__GroundRobot__init(&msg->groundrobotpos)) {
    tide_msgs__msg__RefereeData__fini(msg);
    return false;
  }
  // sentryinfo
  if (!tide_msgs__msg__SentryInfo__init(&msg->sentryinfo)) {
    tide_msgs__msg__RefereeData__fini(msg);
    return false;
  }
  // interactid
  if (!tide_msgs__msg__InteractID__init(&msg->interactid)) {
    tide_msgs__msg__RefereeData__fini(msg);
    return false;
  }
  return true;
}

void
tide_msgs__msg__RefereeData__fini(tide_msgs__msg__RefereeData * msg)
{
  if (!msg) {
    return;
  }
  // gamestatus
  tide_msgs__msg__GameStatus__fini(&msg->gamestatus);
  // gameresult
  tide_msgs__msg__GameResult__fini(&msg->gameresult);
  // gamerobothp
  tide_msgs__msg__GameRobotHP__fini(&msg->gamerobothp);
  // eventdata
  tide_msgs__msg__EventData__fini(&msg->eventdata);
  // refereewarning
  tide_msgs__msg__RefereeWarning__fini(&msg->refereewarning);
  // gamerobotstatus
  tide_msgs__msg__GameRobotStatus__fini(&msg->gamerobotstatus);
  // powerheatdata
  tide_msgs__msg__PowerHeatData__fini(&msg->powerheatdata);
  // gamerobotpos
  tide_msgs__msg__GameRobotPos__fini(&msg->gamerobotpos);
  // buff
  tide_msgs__msg__Buff__fini(&msg->buff);
  // robothurt
  tide_msgs__msg__RobotHurt__fini(&msg->robothurt);
  // shootdata
  tide_msgs__msg__ShootData__fini(&msg->shootdata);
  // bulletremaining
  tide_msgs__msg__BulletRemaining__fini(&msg->bulletremaining);
  // rfidstatus
  tide_msgs__msg__RFIDStatus__fini(&msg->rfidstatus);
  // groundrobotpos
  tide_msgs__msg__GroundRobot__fini(&msg->groundrobotpos);
  // sentryinfo
  tide_msgs__msg__SentryInfo__fini(&msg->sentryinfo);
  // interactid
  tide_msgs__msg__InteractID__fini(&msg->interactid);
}

bool
tide_msgs__msg__RefereeData__are_equal(const tide_msgs__msg__RefereeData * lhs, const tide_msgs__msg__RefereeData * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // gamestatus
  if (!tide_msgs__msg__GameStatus__are_equal(
      &(lhs->gamestatus), &(rhs->gamestatus)))
  {
    return false;
  }
  // gameresult
  if (!tide_msgs__msg__GameResult__are_equal(
      &(lhs->gameresult), &(rhs->gameresult)))
  {
    return false;
  }
  // gamerobothp
  if (!tide_msgs__msg__GameRobotHP__are_equal(
      &(lhs->gamerobothp), &(rhs->gamerobothp)))
  {
    return false;
  }
  // eventdata
  if (!tide_msgs__msg__EventData__are_equal(
      &(lhs->eventdata), &(rhs->eventdata)))
  {
    return false;
  }
  // refereewarning
  if (!tide_msgs__msg__RefereeWarning__are_equal(
      &(lhs->refereewarning), &(rhs->refereewarning)))
  {
    return false;
  }
  // gamerobotstatus
  if (!tide_msgs__msg__GameRobotStatus__are_equal(
      &(lhs->gamerobotstatus), &(rhs->gamerobotstatus)))
  {
    return false;
  }
  // powerheatdata
  if (!tide_msgs__msg__PowerHeatData__are_equal(
      &(lhs->powerheatdata), &(rhs->powerheatdata)))
  {
    return false;
  }
  // gamerobotpos
  if (!tide_msgs__msg__GameRobotPos__are_equal(
      &(lhs->gamerobotpos), &(rhs->gamerobotpos)))
  {
    return false;
  }
  // buff
  if (!tide_msgs__msg__Buff__are_equal(
      &(lhs->buff), &(rhs->buff)))
  {
    return false;
  }
  // robothurt
  if (!tide_msgs__msg__RobotHurt__are_equal(
      &(lhs->robothurt), &(rhs->robothurt)))
  {
    return false;
  }
  // shootdata
  if (!tide_msgs__msg__ShootData__are_equal(
      &(lhs->shootdata), &(rhs->shootdata)))
  {
    return false;
  }
  // bulletremaining
  if (!tide_msgs__msg__BulletRemaining__are_equal(
      &(lhs->bulletremaining), &(rhs->bulletremaining)))
  {
    return false;
  }
  // rfidstatus
  if (!tide_msgs__msg__RFIDStatus__are_equal(
      &(lhs->rfidstatus), &(rhs->rfidstatus)))
  {
    return false;
  }
  // groundrobotpos
  if (!tide_msgs__msg__GroundRobot__are_equal(
      &(lhs->groundrobotpos), &(rhs->groundrobotpos)))
  {
    return false;
  }
  // sentryinfo
  if (!tide_msgs__msg__SentryInfo__are_equal(
      &(lhs->sentryinfo), &(rhs->sentryinfo)))
  {
    return false;
  }
  // interactid
  if (!tide_msgs__msg__InteractID__are_equal(
      &(lhs->interactid), &(rhs->interactid)))
  {
    return false;
  }
  return true;
}

bool
tide_msgs__msg__RefereeData__copy(
  const tide_msgs__msg__RefereeData * input,
  tide_msgs__msg__RefereeData * output)
{
  if (!input || !output) {
    return false;
  }
  // gamestatus
  if (!tide_msgs__msg__GameStatus__copy(
      &(input->gamestatus), &(output->gamestatus)))
  {
    return false;
  }
  // gameresult
  if (!tide_msgs__msg__GameResult__copy(
      &(input->gameresult), &(output->gameresult)))
  {
    return false;
  }
  // gamerobothp
  if (!tide_msgs__msg__GameRobotHP__copy(
      &(input->gamerobothp), &(output->gamerobothp)))
  {
    return false;
  }
  // eventdata
  if (!tide_msgs__msg__EventData__copy(
      &(input->eventdata), &(output->eventdata)))
  {
    return false;
  }
  // refereewarning
  if (!tide_msgs__msg__RefereeWarning__copy(
      &(input->refereewarning), &(output->refereewarning)))
  {
    return false;
  }
  // gamerobotstatus
  if (!tide_msgs__msg__GameRobotStatus__copy(
      &(input->gamerobotstatus), &(output->gamerobotstatus)))
  {
    return false;
  }
  // powerheatdata
  if (!tide_msgs__msg__PowerHeatData__copy(
      &(input->powerheatdata), &(output->powerheatdata)))
  {
    return false;
  }
  // gamerobotpos
  if (!tide_msgs__msg__GameRobotPos__copy(
      &(input->gamerobotpos), &(output->gamerobotpos)))
  {
    return false;
  }
  // buff
  if (!tide_msgs__msg__Buff__copy(
      &(input->buff), &(output->buff)))
  {
    return false;
  }
  // robothurt
  if (!tide_msgs__msg__RobotHurt__copy(
      &(input->robothurt), &(output->robothurt)))
  {
    return false;
  }
  // shootdata
  if (!tide_msgs__msg__ShootData__copy(
      &(input->shootdata), &(output->shootdata)))
  {
    return false;
  }
  // bulletremaining
  if (!tide_msgs__msg__BulletRemaining__copy(
      &(input->bulletremaining), &(output->bulletremaining)))
  {
    return false;
  }
  // rfidstatus
  if (!tide_msgs__msg__RFIDStatus__copy(
      &(input->rfidstatus), &(output->rfidstatus)))
  {
    return false;
  }
  // groundrobotpos
  if (!tide_msgs__msg__GroundRobot__copy(
      &(input->groundrobotpos), &(output->groundrobotpos)))
  {
    return false;
  }
  // sentryinfo
  if (!tide_msgs__msg__SentryInfo__copy(
      &(input->sentryinfo), &(output->sentryinfo)))
  {
    return false;
  }
  // interactid
  if (!tide_msgs__msg__InteractID__copy(
      &(input->interactid), &(output->interactid)))
  {
    return false;
  }
  return true;
}

tide_msgs__msg__RefereeData *
tide_msgs__msg__RefereeData__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tide_msgs__msg__RefereeData * msg = (tide_msgs__msg__RefereeData *)allocator.allocate(sizeof(tide_msgs__msg__RefereeData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tide_msgs__msg__RefereeData));
  bool success = tide_msgs__msg__RefereeData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
tide_msgs__msg__RefereeData__destroy(tide_msgs__msg__RefereeData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    tide_msgs__msg__RefereeData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
tide_msgs__msg__RefereeData__Sequence__init(tide_msgs__msg__RefereeData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tide_msgs__msg__RefereeData * data = NULL;

  if (size) {
    data = (tide_msgs__msg__RefereeData *)allocator.zero_allocate(size, sizeof(tide_msgs__msg__RefereeData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tide_msgs__msg__RefereeData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tide_msgs__msg__RefereeData__fini(&data[i - 1]);
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
tide_msgs__msg__RefereeData__Sequence__fini(tide_msgs__msg__RefereeData__Sequence * array)
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
      tide_msgs__msg__RefereeData__fini(&array->data[i]);
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

tide_msgs__msg__RefereeData__Sequence *
tide_msgs__msg__RefereeData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  tide_msgs__msg__RefereeData__Sequence * array = (tide_msgs__msg__RefereeData__Sequence *)allocator.allocate(sizeof(tide_msgs__msg__RefereeData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = tide_msgs__msg__RefereeData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
tide_msgs__msg__RefereeData__Sequence__destroy(tide_msgs__msg__RefereeData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    tide_msgs__msg__RefereeData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
tide_msgs__msg__RefereeData__Sequence__are_equal(const tide_msgs__msg__RefereeData__Sequence * lhs, const tide_msgs__msg__RefereeData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tide_msgs__msg__RefereeData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tide_msgs__msg__RefereeData__Sequence__copy(
  const tide_msgs__msg__RefereeData__Sequence * input,
  tide_msgs__msg__RefereeData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tide_msgs__msg__RefereeData);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    tide_msgs__msg__RefereeData * data =
      (tide_msgs__msg__RefereeData *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tide_msgs__msg__RefereeData__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          tide_msgs__msg__RefereeData__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!tide_msgs__msg__RefereeData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
