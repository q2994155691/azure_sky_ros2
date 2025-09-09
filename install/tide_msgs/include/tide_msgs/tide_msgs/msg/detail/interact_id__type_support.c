// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tide_msgs:msg/InteractID.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tide_msgs/msg/detail/interact_id__rosidl_typesupport_introspection_c.h"
#include "tide_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tide_msgs/msg/detail/interact_id__functions.h"
#include "tide_msgs/msg/detail/interact_id__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void tide_msgs__msg__InteractID__rosidl_typesupport_introspection_c__InteractID_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tide_msgs__msg__InteractID__init(message_memory);
}

void tide_msgs__msg__InteractID__rosidl_typesupport_introspection_c__InteractID_fini_function(void * message_memory)
{
  tide_msgs__msg__InteractID__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember tide_msgs__msg__InteractID__rosidl_typesupport_introspection_c__InteractID_message_member_array[9] = {
  {
    "teammate_hero",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tide_msgs__msg__InteractID, teammate_hero),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "teammate_infantry3",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tide_msgs__msg__InteractID, teammate_infantry3),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "teammate_infantry4",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tide_msgs__msg__InteractID, teammate_infantry4),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "teammate_infantry5",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tide_msgs__msg__InteractID, teammate_infantry5),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "teammate_sentry",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tide_msgs__msg__InteractID, teammate_sentry),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "client_hero",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tide_msgs__msg__InteractID, client_hero),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "client_infantry3",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tide_msgs__msg__InteractID, client_infantry3),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "client_infantry4",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tide_msgs__msg__InteractID, client_infantry4),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "client_infantry5",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tide_msgs__msg__InteractID, client_infantry5),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers tide_msgs__msg__InteractID__rosidl_typesupport_introspection_c__InteractID_message_members = {
  "tide_msgs__msg",  // message namespace
  "InteractID",  // message name
  9,  // number of fields
  sizeof(tide_msgs__msg__InteractID),
  tide_msgs__msg__InteractID__rosidl_typesupport_introspection_c__InteractID_message_member_array,  // message members
  tide_msgs__msg__InteractID__rosidl_typesupport_introspection_c__InteractID_init_function,  // function to initialize message memory (memory has to be allocated)
  tide_msgs__msg__InteractID__rosidl_typesupport_introspection_c__InteractID_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t tide_msgs__msg__InteractID__rosidl_typesupport_introspection_c__InteractID_message_type_support_handle = {
  0,
  &tide_msgs__msg__InteractID__rosidl_typesupport_introspection_c__InteractID_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tide_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tide_msgs, msg, InteractID)() {
  if (!tide_msgs__msg__InteractID__rosidl_typesupport_introspection_c__InteractID_message_type_support_handle.typesupport_identifier) {
    tide_msgs__msg__InteractID__rosidl_typesupport_introspection_c__InteractID_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &tide_msgs__msg__InteractID__rosidl_typesupport_introspection_c__InteractID_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
