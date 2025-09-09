// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from tide_msgs:msg/GameRobotHP.idl
// generated code does not contain a copyright notice
#include "tide_msgs/msg/detail/game_robot_hp__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "tide_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "tide_msgs/msg/detail/game_robot_hp__struct.h"
#include "tide_msgs/msg/detail/game_robot_hp__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _GameRobotHP__ros_msg_type = tide_msgs__msg__GameRobotHP;

static bool _GameRobotHP__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _GameRobotHP__ros_msg_type * ros_message = static_cast<const _GameRobotHP__ros_msg_type *>(untyped_ros_message);
  // Field name: red1robot_hp
  {
    cdr << ros_message->red1robot_hp;
  }

  // Field name: red2robot_hp
  {
    cdr << ros_message->red2robot_hp;
  }

  // Field name: red3robot_hp
  {
    cdr << ros_message->red3robot_hp;
  }

  // Field name: red4robot_hp
  {
    cdr << ros_message->red4robot_hp;
  }

  // Field name: reserved1
  {
    cdr << ros_message->reserved1;
  }

  // Field name: red7robot_hp
  {
    cdr << ros_message->red7robot_hp;
  }

  // Field name: redoutpost_hp
  {
    cdr << ros_message->redoutpost_hp;
  }

  // Field name: redbase_hp
  {
    cdr << ros_message->redbase_hp;
  }

  // Field name: blue1robot_hp
  {
    cdr << ros_message->blue1robot_hp;
  }

  // Field name: blue2robot_hp
  {
    cdr << ros_message->blue2robot_hp;
  }

  // Field name: blue3robot_hp
  {
    cdr << ros_message->blue3robot_hp;
  }

  // Field name: blue4robot_hp
  {
    cdr << ros_message->blue4robot_hp;
  }

  // Field name: reserved2
  {
    cdr << ros_message->reserved2;
  }

  // Field name: blue7robot_hp
  {
    cdr << ros_message->blue7robot_hp;
  }

  // Field name: blueoutpost_hp
  {
    cdr << ros_message->blueoutpost_hp;
  }

  // Field name: bluebase_hp
  {
    cdr << ros_message->bluebase_hp;
  }

  return true;
}

static bool _GameRobotHP__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _GameRobotHP__ros_msg_type * ros_message = static_cast<_GameRobotHP__ros_msg_type *>(untyped_ros_message);
  // Field name: red1robot_hp
  {
    cdr >> ros_message->red1robot_hp;
  }

  // Field name: red2robot_hp
  {
    cdr >> ros_message->red2robot_hp;
  }

  // Field name: red3robot_hp
  {
    cdr >> ros_message->red3robot_hp;
  }

  // Field name: red4robot_hp
  {
    cdr >> ros_message->red4robot_hp;
  }

  // Field name: reserved1
  {
    cdr >> ros_message->reserved1;
  }

  // Field name: red7robot_hp
  {
    cdr >> ros_message->red7robot_hp;
  }

  // Field name: redoutpost_hp
  {
    cdr >> ros_message->redoutpost_hp;
  }

  // Field name: redbase_hp
  {
    cdr >> ros_message->redbase_hp;
  }

  // Field name: blue1robot_hp
  {
    cdr >> ros_message->blue1robot_hp;
  }

  // Field name: blue2robot_hp
  {
    cdr >> ros_message->blue2robot_hp;
  }

  // Field name: blue3robot_hp
  {
    cdr >> ros_message->blue3robot_hp;
  }

  // Field name: blue4robot_hp
  {
    cdr >> ros_message->blue4robot_hp;
  }

  // Field name: reserved2
  {
    cdr >> ros_message->reserved2;
  }

  // Field name: blue7robot_hp
  {
    cdr >> ros_message->blue7robot_hp;
  }

  // Field name: blueoutpost_hp
  {
    cdr >> ros_message->blueoutpost_hp;
  }

  // Field name: bluebase_hp
  {
    cdr >> ros_message->bluebase_hp;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tide_msgs
size_t get_serialized_size_tide_msgs__msg__GameRobotHP(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _GameRobotHP__ros_msg_type * ros_message = static_cast<const _GameRobotHP__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name red1robot_hp
  {
    size_t item_size = sizeof(ros_message->red1robot_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name red2robot_hp
  {
    size_t item_size = sizeof(ros_message->red2robot_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name red3robot_hp
  {
    size_t item_size = sizeof(ros_message->red3robot_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name red4robot_hp
  {
    size_t item_size = sizeof(ros_message->red4robot_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name reserved1
  {
    size_t item_size = sizeof(ros_message->reserved1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name red7robot_hp
  {
    size_t item_size = sizeof(ros_message->red7robot_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name redoutpost_hp
  {
    size_t item_size = sizeof(ros_message->redoutpost_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name redbase_hp
  {
    size_t item_size = sizeof(ros_message->redbase_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name blue1robot_hp
  {
    size_t item_size = sizeof(ros_message->blue1robot_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name blue2robot_hp
  {
    size_t item_size = sizeof(ros_message->blue2robot_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name blue3robot_hp
  {
    size_t item_size = sizeof(ros_message->blue3robot_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name blue4robot_hp
  {
    size_t item_size = sizeof(ros_message->blue4robot_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name reserved2
  {
    size_t item_size = sizeof(ros_message->reserved2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name blue7robot_hp
  {
    size_t item_size = sizeof(ros_message->blue7robot_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name blueoutpost_hp
  {
    size_t item_size = sizeof(ros_message->blueoutpost_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name bluebase_hp
  {
    size_t item_size = sizeof(ros_message->bluebase_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _GameRobotHP__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_tide_msgs__msg__GameRobotHP(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tide_msgs
size_t max_serialized_size_tide_msgs__msg__GameRobotHP(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: red1robot_hp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: red2robot_hp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: red3robot_hp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: red4robot_hp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: reserved1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: red7robot_hp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: redoutpost_hp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: redbase_hp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: blue1robot_hp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: blue2robot_hp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: blue3robot_hp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: blue4robot_hp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: reserved2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: blue7robot_hp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: blueoutpost_hp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: bluebase_hp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = tide_msgs__msg__GameRobotHP;
    is_plain =
      (
      offsetof(DataType, bluebase_hp) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _GameRobotHP__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_tide_msgs__msg__GameRobotHP(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_GameRobotHP = {
  "tide_msgs::msg",
  "GameRobotHP",
  _GameRobotHP__cdr_serialize,
  _GameRobotHP__cdr_deserialize,
  _GameRobotHP__get_serialized_size,
  _GameRobotHP__max_serialized_size
};

static rosidl_message_type_support_t _GameRobotHP__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_GameRobotHP,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tide_msgs, msg, GameRobotHP)() {
  return &_GameRobotHP__type_support;
}

#if defined(__cplusplus)
}
#endif
