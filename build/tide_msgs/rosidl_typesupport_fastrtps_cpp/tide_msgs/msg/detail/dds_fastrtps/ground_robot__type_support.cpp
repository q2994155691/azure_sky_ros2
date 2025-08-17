// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from tide_msgs:msg/GroundRobot.idl
// generated code does not contain a copyright notice
#include "tide_msgs/msg/detail/ground_robot__rosidl_typesupport_fastrtps_cpp.hpp"
#include "tide_msgs/msg/detail/ground_robot__struct.hpp"

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
  const tide_msgs::msg::GroundRobot & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: hero_x
  cdr << ros_message.hero_x;
  // Member: hero_y
  cdr << ros_message.hero_y;
  // Member: engineer_x
  cdr << ros_message.engineer_x;
  // Member: engineer_y
  cdr << ros_message.engineer_y;
  // Member: standard_3_x
  cdr << ros_message.standard_3_x;
  // Member: standard_3_y
  cdr << ros_message.standard_3_y;
  // Member: standard_4_x
  cdr << ros_message.standard_4_x;
  // Member: standard_4_y
  cdr << ros_message.standard_4_y;
  // Member: reserved1
  cdr << ros_message.reserved1;
  // Member: reserved2
  cdr << ros_message.reserved2;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tide_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  tide_msgs::msg::GroundRobot & ros_message)
{
  // Member: hero_x
  cdr >> ros_message.hero_x;

  // Member: hero_y
  cdr >> ros_message.hero_y;

  // Member: engineer_x
  cdr >> ros_message.engineer_x;

  // Member: engineer_y
  cdr >> ros_message.engineer_y;

  // Member: standard_3_x
  cdr >> ros_message.standard_3_x;

  // Member: standard_3_y
  cdr >> ros_message.standard_3_y;

  // Member: standard_4_x
  cdr >> ros_message.standard_4_x;

  // Member: standard_4_y
  cdr >> ros_message.standard_4_y;

  // Member: reserved1
  cdr >> ros_message.reserved1;

  // Member: reserved2
  cdr >> ros_message.reserved2;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tide_msgs
get_serialized_size(
  const tide_msgs::msg::GroundRobot & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: hero_x
  {
    size_t item_size = sizeof(ros_message.hero_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: hero_y
  {
    size_t item_size = sizeof(ros_message.hero_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: engineer_x
  {
    size_t item_size = sizeof(ros_message.engineer_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: engineer_y
  {
    size_t item_size = sizeof(ros_message.engineer_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: standard_3_x
  {
    size_t item_size = sizeof(ros_message.standard_3_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: standard_3_y
  {
    size_t item_size = sizeof(ros_message.standard_3_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: standard_4_x
  {
    size_t item_size = sizeof(ros_message.standard_4_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: standard_4_y
  {
    size_t item_size = sizeof(ros_message.standard_4_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: reserved1
  {
    size_t item_size = sizeof(ros_message.reserved1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: reserved2
  {
    size_t item_size = sizeof(ros_message.reserved2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tide_msgs
max_serialized_size_GroundRobot(
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


  // Member: hero_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: hero_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: engineer_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: engineer_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: standard_3_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: standard_3_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: standard_4_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: standard_4_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: reserved1
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: reserved2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = tide_msgs::msg::GroundRobot;
    is_plain =
      (
      offsetof(DataType, reserved2) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _GroundRobot__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const tide_msgs::msg::GroundRobot *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _GroundRobot__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<tide_msgs::msg::GroundRobot *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _GroundRobot__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const tide_msgs::msg::GroundRobot *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _GroundRobot__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_GroundRobot(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _GroundRobot__callbacks = {
  "tide_msgs::msg",
  "GroundRobot",
  _GroundRobot__cdr_serialize,
  _GroundRobot__cdr_deserialize,
  _GroundRobot__get_serialized_size,
  _GroundRobot__max_serialized_size
};

static rosidl_message_type_support_t _GroundRobot__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_GroundRobot__callbacks,
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
get_message_type_support_handle<tide_msgs::msg::GroundRobot>()
{
  return &tide_msgs::msg::typesupport_fastrtps_cpp::_GroundRobot__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tide_msgs, msg, GroundRobot)() {
  return &tide_msgs::msg::typesupport_fastrtps_cpp::_GroundRobot__handle;
}

#ifdef __cplusplus
}
#endif
