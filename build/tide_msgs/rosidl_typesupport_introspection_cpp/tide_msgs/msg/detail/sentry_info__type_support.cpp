// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from tide_msgs:msg/SentryInfo.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "tide_msgs/msg/detail/sentry_info__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace tide_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void SentryInfo_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) tide_msgs::msg::SentryInfo(_init);
}

void SentryInfo_fini_function(void * message_memory)
{
  auto typed_message = static_cast<tide_msgs::msg::SentryInfo *>(message_memory);
  typed_message->~SentryInfo();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SentryInfo_message_member_array[2] = {
  {
    "sentry_info",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tide_msgs::msg::SentryInfo, sentry_info),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "sentry_info_2",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tide_msgs::msg::SentryInfo, sentry_info_2),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SentryInfo_message_members = {
  "tide_msgs::msg",  // message namespace
  "SentryInfo",  // message name
  2,  // number of fields
  sizeof(tide_msgs::msg::SentryInfo),
  SentryInfo_message_member_array,  // message members
  SentryInfo_init_function,  // function to initialize message memory (memory has to be allocated)
  SentryInfo_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SentryInfo_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SentryInfo_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace tide_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<tide_msgs::msg::SentryInfo>()
{
  return &::tide_msgs::msg::rosidl_typesupport_introspection_cpp::SentryInfo_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, tide_msgs, msg, SentryInfo)() {
  return &::tide_msgs::msg::rosidl_typesupport_introspection_cpp::SentryInfo_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
