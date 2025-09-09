// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from tide_msgs:msg/GameRobotHP.idl
// generated code does not contain a copyright notice
#include "tide_msgs/msg/detail/game_robot_hp__rosidl_typesupport_fastrtps_cpp.hpp"
#include "tide_msgs/msg/detail/game_robot_hp__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace tide_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tide_msgs
cdr_serialize(
  const tide_msgs::msg::GameRobotHP & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: red1robot_hp
  cdr << ros_message.red1robot_hp;
  // Member: red2robot_hp
  cdr << ros_message.red2robot_hp;
  // Member: red3robot_hp
  cdr << ros_message.red3robot_hp;
  // Member: red4robot_hp
  cdr << ros_message.red4robot_hp;
  // Member: reserved1
  cdr << ros_message.reserved1;
  // Member: red7robot_hp
  cdr << ros_message.red7robot_hp;
  // Member: redoutpost_hp
  cdr << ros_message.redoutpost_hp;
  // Member: redbase_hp
  cdr << ros_message.redbase_hp;
  // Member: blue1robot_hp
  cdr << ros_message.blue1robot_hp;
  // Member: blue2robot_hp
  cdr << ros_message.blue2robot_hp;
  // Member: blue3robot_hp
  cdr << ros_message.blue3robot_hp;
  // Member: blue4robot_hp
  cdr << ros_message.blue4robot_hp;
  // Member: reserved2
  cdr << ros_message.reserved2;
  // Member: blue7robot_hp
  cdr << ros_message.blue7robot_hp;
  // Member: blueoutpost_hp
  cdr << ros_message.blueoutpost_hp;
  // Member: bluebase_hp
  cdr << ros_message.bluebase_hp;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tide_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  tide_msgs::msg::GameRobotHP & ros_message)
{
  // Member: red1robot_hp
  cdr >> ros_message.red1robot_hp;

  // Member: red2robot_hp
  cdr >> ros_message.red2robot_hp;

  // Member: red3robot_hp
  cdr >> ros_message.red3robot_hp;

  // Member: red4robot_hp
  cdr >> ros_message.red4robot_hp;

  // Member: reserved1
  cdr >> ros_message.reserved1;

  // Member: red7robot_hp
  cdr >> ros_message.red7robot_hp;

  // Member: redoutpost_hp
  cdr >> ros_message.redoutpost_hp;

  // Member: redbase_hp
  cdr >> ros_message.redbase_hp;

  // Member: blue1robot_hp
  cdr >> ros_message.blue1robot_hp;

  // Member: blue2robot_hp
  cdr >> ros_message.blue2robot_hp;

  // Member: blue3robot_hp
  cdr >> ros_message.blue3robot_hp;

  // Member: blue4robot_hp
  cdr >> ros_message.blue4robot_hp;

  // Member: reserved2
  cdr >> ros_message.reserved2;

  // Member: blue7robot_hp
  cdr >> ros_message.blue7robot_hp;

  // Member: blueoutpost_hp
  cdr >> ros_message.blueoutpost_hp;

  // Member: bluebase_hp
  cdr >> ros_message.bluebase_hp;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tide_msgs
get_serialized_size(
  const tide_msgs::msg::GameRobotHP & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: red1robot_hp
  {
    size_t item_size = sizeof(ros_message.red1robot_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: red2robot_hp
  {
    size_t item_size = sizeof(ros_message.red2robot_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: red3robot_hp
  {
    size_t item_size = sizeof(ros_message.red3robot_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: red4robot_hp
  {
    size_t item_size = sizeof(ros_message.red4robot_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: reserved1
  {
    size_t item_size = sizeof(ros_message.reserved1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: red7robot_hp
  {
    size_t item_size = sizeof(ros_message.red7robot_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: redoutpost_hp
  {
    size_t item_size = sizeof(ros_message.redoutpost_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: redbase_hp
  {
    size_t item_size = sizeof(ros_message.redbase_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: blue1robot_hp
  {
    size_t item_size = sizeof(ros_message.blue1robot_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: blue2robot_hp
  {
    size_t item_size = sizeof(ros_message.blue2robot_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: blue3robot_hp
  {
    size_t item_size = sizeof(ros_message.blue3robot_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: blue4robot_hp
  {
    size_t item_size = sizeof(ros_message.blue4robot_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: reserved2
  {
    size_t item_size = sizeof(ros_message.reserved2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: blue7robot_hp
  {
    size_t item_size = sizeof(ros_message.blue7robot_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: blueoutpost_hp
  {
    size_t item_size = sizeof(ros_message.blueoutpost_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: bluebase_hp
  {
    size_t item_size = sizeof(ros_message.bluebase_hp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tide_msgs
max_serialized_size_GameRobotHP(
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


  // Member: red1robot_hp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: red2robot_hp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: red3robot_hp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: red4robot_hp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: reserved1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: red7robot_hp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: redoutpost_hp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: redbase_hp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: blue1robot_hp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: blue2robot_hp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: blue3robot_hp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: blue4robot_hp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: reserved2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: blue7robot_hp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: blueoutpost_hp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: bluebase_hp
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
    using DataType = tide_msgs::msg::GameRobotHP;
    is_plain =
      (
      offsetof(DataType, bluebase_hp) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _GameRobotHP__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const tide_msgs::msg::GameRobotHP *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _GameRobotHP__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<tide_msgs::msg::GameRobotHP *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _GameRobotHP__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const tide_msgs::msg::GameRobotHP *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _GameRobotHP__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_GameRobotHP(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _GameRobotHP__callbacks = {
  "tide_msgs::msg",
  "GameRobotHP",
  _GameRobotHP__cdr_serialize,
  _GameRobotHP__cdr_deserialize,
  _GameRobotHP__get_serialized_size,
  _GameRobotHP__max_serialized_size
};

static rosidl_message_type_support_t _GameRobotHP__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GameRobotHP__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace tide_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_tide_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<tide_msgs::msg::GameRobotHP>()
{
  return &tide_msgs::msg::typesupport_fastrtps_cpp::_GameRobotHP__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tide_msgs, msg, GameRobotHP)() {
  return &tide_msgs::msg::typesupport_fastrtps_cpp::_GameRobotHP__handle;
}

#ifdef __cplusplus
}
#endif
