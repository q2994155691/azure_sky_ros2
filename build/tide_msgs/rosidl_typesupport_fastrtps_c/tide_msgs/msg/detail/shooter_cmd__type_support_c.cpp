// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from tide_msgs:msg/ShooterCmd.idl
// generated code does not contain a copyright notice
#include "tide_msgs/msg/detail/shooter_cmd__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "tide_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "tide_msgs/msg/detail/shooter_cmd__struct.h"
#include "tide_msgs/msg/detail/shooter_cmd__functions.h"
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


using _ShooterCmd__ros_msg_type = tide_msgs__msg__ShooterCmd;

static bool _ShooterCmd__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ShooterCmd__ros_msg_type * ros_message = static_cast<const _ShooterCmd__ros_msg_type *>(untyped_ros_message);
  // Field name: mode
  {
    cdr << ros_message->mode;
  }

  // Field name: bullet_velocity
  {
    cdr << ros_message->bullet_velocity;
  }

  // Field name: shooting_freq
  {
    cdr << ros_message->shooting_freq;
  }

  return true;
}

static bool _ShooterCmd__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ShooterCmd__ros_msg_type * ros_message = static_cast<_ShooterCmd__ros_msg_type *>(untyped_ros_message);
  // Field name: mode
  {
    cdr >> ros_message->mode;
  }

  // Field name: bullet_velocity
  {
    cdr >> ros_message->bullet_velocity;
  }

  // Field name: shooting_freq
  {
    cdr >> ros_message->shooting_freq;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tide_msgs
size_t get_serialized_size_tide_msgs__msg__ShooterCmd(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ShooterCmd__ros_msg_type * ros_message = static_cast<const _ShooterCmd__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name mode
  {
    size_t item_size = sizeof(ros_message->mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name bullet_velocity
  {
    size_t item_size = sizeof(ros_message->bullet_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name shooting_freq
  {
    size_t item_size = sizeof(ros_message->shooting_freq);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ShooterCmd__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_tide_msgs__msg__ShooterCmd(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tide_msgs
size_t max_serialized_size_tide_msgs__msg__ShooterCmd(
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

  // member: mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: bullet_velocity
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: shooting_freq
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = tide_msgs__msg__ShooterCmd;
    is_plain =
      (
      offsetof(DataType, shooting_freq) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _ShooterCmd__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_tide_msgs__msg__ShooterCmd(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ShooterCmd = {
  "tide_msgs::msg",
  "ShooterCmd",
  _ShooterCmd__cdr_serialize,
  _ShooterCmd__cdr_deserialize,
  _ShooterCmd__get_serialized_size,
  _ShooterCmd__max_serialized_size
};

static rosidl_message_type_support_t _ShooterCmd__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ShooterCmd,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tide_msgs, msg, ShooterCmd)() {
  return &_ShooterCmd__type_support;
}

#if defined(__cplusplus)
}
#endif
