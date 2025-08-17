// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tide_msgs:msg/Armors.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tide_msgs/msg/detail/armors__rosidl_typesupport_introspection_c.h"
#include "tide_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tide_msgs/msg/detail/armors__functions.h"
#include "tide_msgs/msg/detail/armors__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `armors`
#include "tide_msgs/msg/armor.h"
// Member `armors`
#include "tide_msgs/msg/detail/armor__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void tide_msgs__msg__Armors__rosidl_typesupport_introspection_c__Armors_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tide_msgs__msg__Armors__init(message_memory);
}

void tide_msgs__msg__Armors__rosidl_typesupport_introspection_c__Armors_fini_function(void * message_memory)
{
  tide_msgs__msg__Armors__fini(message_memory);
}

size_t tide_msgs__msg__Armors__rosidl_typesupport_introspection_c__size_function__Armors__armors(
  const void * untyped_member)
{
  const tide_msgs__msg__Armor__Sequence * member =
    (const tide_msgs__msg__Armor__Sequence *)(untyped_member);
  return member->size;
}

const void * tide_msgs__msg__Armors__rosidl_typesupport_introspection_c__get_const_function__Armors__armors(
  const void * untyped_member, size_t index)
{
  const tide_msgs__msg__Armor__Sequence * member =
    (const tide_msgs__msg__Armor__Sequence *)(untyped_member);
  return &member->data[index];
}

void * tide_msgs__msg__Armors__rosidl_typesupport_introspection_c__get_function__Armors__armors(
  void * untyped_member, size_t index)
{
  tide_msgs__msg__Armor__Sequence * member =
    (tide_msgs__msg__Armor__Sequence *)(untyped_member);
  return &member->data[index];
}

void tide_msgs__msg__Armors__rosidl_typesupport_introspection_c__fetch_function__Armors__armors(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const tide_msgs__msg__Armor * item =
    ((const tide_msgs__msg__Armor *)
    tide_msgs__msg__Armors__rosidl_typesupport_introspection_c__get_const_function__Armors__armors(untyped_member, index));
  tide_msgs__msg__Armor * value =
    (tide_msgs__msg__Armor *)(untyped_value);
  *value = *item;
}

void tide_msgs__msg__Armors__rosidl_typesupport_introspection_c__assign_function__Armors__armors(
  void * untyped_member, size_t index, const void * untyped_value)
{
  tide_msgs__msg__Armor * item =
    ((tide_msgs__msg__Armor *)
    tide_msgs__msg__Armors__rosidl_typesupport_introspection_c__get_function__Armors__armors(untyped_member, index));
  const tide_msgs__msg__Armor * value =
    (const tide_msgs__msg__Armor *)(untyped_value);
  *item = *value;
}

bool tide_msgs__msg__Armors__rosidl_typesupport_introspection_c__resize_function__Armors__armors(
  void * untyped_member, size_t size)
{
  tide_msgs__msg__Armor__Sequence * member =
    (tide_msgs__msg__Armor__Sequence *)(untyped_member);
  tide_msgs__msg__Armor__Sequence__fini(member);
  return tide_msgs__msg__Armor__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember tide_msgs__msg__Armors__rosidl_typesupport_introspection_c__Armors_message_member_array[2] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tide_msgs__msg__Armors, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "armors",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tide_msgs__msg__Armors, armors),  // bytes offset in struct
    NULL,  // default value
    tide_msgs__msg__Armors__rosidl_typesupport_introspection_c__size_function__Armors__armors,  // size() function pointer
    tide_msgs__msg__Armors__rosidl_typesupport_introspection_c__get_const_function__Armors__armors,  // get_const(index) function pointer
    tide_msgs__msg__Armors__rosidl_typesupport_introspection_c__get_function__Armors__armors,  // get(index) function pointer
    tide_msgs__msg__Armors__rosidl_typesupport_introspection_c__fetch_function__Armors__armors,  // fetch(index, &value) function pointer
    tide_msgs__msg__Armors__rosidl_typesupport_introspection_c__assign_function__Armors__armors,  // assign(index, value) function pointer
    tide_msgs__msg__Armors__rosidl_typesupport_introspection_c__resize_function__Armors__armors  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers tide_msgs__msg__Armors__rosidl_typesupport_introspection_c__Armors_message_members = {
  "tide_msgs__msg",  // message namespace
  "Armors",  // message name
  2,  // number of fields
  sizeof(tide_msgs__msg__Armors),
  tide_msgs__msg__Armors__rosidl_typesupport_introspection_c__Armors_message_member_array,  // message members
  tide_msgs__msg__Armors__rosidl_typesupport_introspection_c__Armors_init_function,  // function to initialize message memory (memory has to be allocated)
  tide_msgs__msg__Armors__rosidl_typesupport_introspection_c__Armors_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t tide_msgs__msg__Armors__rosidl_typesupport_introspection_c__Armors_message_type_support_handle = {
  0,
  &tide_msgs__msg__Armors__rosidl_typesupport_introspection_c__Armors_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tide_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tide_msgs, msg, Armors)() {
  tide_msgs__msg__Armors__rosidl_typesupport_introspection_c__Armors_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  tide_msgs__msg__Armors__rosidl_typesupport_introspection_c__Armors_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tide_msgs, msg, Armor)();
  if (!tide_msgs__msg__Armors__rosidl_typesupport_introspection_c__Armors_message_type_support_handle.typesupport_identifier) {
    tide_msgs__msg__Armors__rosidl_typesupport_introspection_c__Armors_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &tide_msgs__msg__Armors__rosidl_typesupport_introspection_c__Armors_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
