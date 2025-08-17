// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from tide_msgs:msg/InteractID.idl
// generated code does not contain a copyright notice
#include "tide_msgs/msg/detail/interact_id__rosidl_typesupport_fastrtps_cpp.hpp"
#include "tide_msgs/msg/detail/interact_id__struct.hpp"

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
  const tide_msgs::msg::InteractID & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: teammate_hero
  cdr << ros_message.teammate_hero;
  // Member: teammate_infantry3
  cdr << ros_message.teammate_infantry3;
  // Member: teammate_infantry4
  cdr << ros_message.teammate_infantry4;
  // Member: teammate_infantry5
  cdr << ros_message.teammate_infantry5;
  // Member: teammate_sentry
  cdr << ros_message.teammate_sentry;
  // Member: client_hero
  cdr << ros_message.client_hero;
  // Member: client_infantry3
  cdr << ros_message.client_infantry3;
  // Member: client_infantry4
  cdr << ros_message.client_infantry4;
  // Member: client_infantry5
  cdr << ros_message.client_infantry5;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tide_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  tide_msgs::msg::InteractID & ros_message)
{
  // Member: teammate_hero
  cdr >> ros_message.teammate_hero;

  // Member: teammate_infantry3
  cdr >> ros_message.teammate_infantry3;

  // Member: teammate_infantry4
  cdr >> ros_message.teammate_infantry4;

  // Member: teammate_infantry5
  cdr >> ros_message.teammate_infantry5;

  // Member: teammate_sentry
  cdr >> ros_message.teammate_sentry;

  // Member: client_hero
  cdr >> ros_message.client_hero;

  // Member: client_infantry3
  cdr >> ros_message.client_infantry3;

  // Member: client_infantry4
  cdr >> ros_message.client_infantry4;

  // Member: client_infantry5
  cdr >> ros_message.client_infantry5;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tide_msgs
get_serialized_size(
  const tide_msgs::msg::InteractID & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: teammate_hero
  {
    size_t item_size = sizeof(ros_message.teammate_hero);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: teammate_infantry3
  {
    size_t item_size = sizeof(ros_message.teammate_infantry3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: teammate_infantry4
  {
    size_t item_size = sizeof(ros_message.teammate_infantry4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: teammate_infantry5
  {
    size_t item_size = sizeof(ros_message.teammate_infantry5);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: teammate_sentry
  {
    size_t item_size = sizeof(ros_message.teammate_sentry);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: client_hero
  {
    size_t item_size = sizeof(ros_message.client_hero);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: client_infantry3
  {
    size_t item_size = sizeof(ros_message.client_infantry3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: client_infantry4
  {
    size_t item_size = sizeof(ros_message.client_infantry4);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: client_infantry5
  {
    size_t item_size = sizeof(ros_message.client_infantry5);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_tide_msgs
max_serialized_size_InteractID(
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


  // Member: teammate_hero
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: teammate_infantry3
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: teammate_infantry4
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: teammate_infantry5
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: teammate_sentry
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: client_hero
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: client_infantry3
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: client_infantry4
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: client_infantry5
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
    using DataType = tide_msgs::msg::InteractID;
    is_plain =
      (
      offsetof(DataType, client_infantry5) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _InteractID__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const tide_msgs::msg::InteractID *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _InteractID__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<tide_msgs::msg::InteractID *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _InteractID__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const tide_msgs::msg::InteractID *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _InteractID__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_InteractID(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _InteractID__callbacks = {
  "tide_msgs::msg",
  "InteractID",
  _InteractID__cdr_serialize,
  _InteractID__cdr_deserialize,
  _InteractID__get_serialized_size,
  _InteractID__max_serialized_size
};

static rosidl_message_type_support_t _InteractID__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_InteractID__callbacks,
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
get_message_type_support_handle<tide_msgs::msg::InteractID>()
{
  return &tide_msgs::msg::typesupport_fastrtps_cpp::_InteractID__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, tide_msgs, msg, InteractID)() {
  return &tide_msgs::msg::typesupport_fastrtps_cpp::_InteractID__handle;
}

#ifdef __cplusplus
}
#endif
