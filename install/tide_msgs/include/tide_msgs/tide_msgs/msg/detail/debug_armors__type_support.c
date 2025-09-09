// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tide_msgs:msg/DebugArmors.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tide_msgs/msg/detail/debug_armors__rosidl_typesupport_introspection_c.h"
#include "tide_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tide_msgs/msg/detail/debug_armors__functions.h"
#include "tide_msgs/msg/detail/debug_armors__struct.h"


// Include directives for member types
// Member `data`
#include "tide_msgs/msg/debug_armor.h"
// Member `data`
#include "tide_msgs/msg/detail/debug_armor__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void tide_msgs__msg__DebugArmors__rosidl_typesupport_introspection_c__DebugArmors_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tide_msgs__msg__DebugArmors__init(message_memory);
}

void tide_msgs__msg__DebugArmors__rosidl_typesupport_introspection_c__DebugArmors_fini_function(void * message_memory)
{
  tide_msgs__msg__DebugArmors__fini(message_memory);
}

size_t tide_msgs__msg__DebugArmors__rosidl_typesupport_introspection_c__size_function__DebugArmors__data(
  const void * untyped_member)
{
  const tide_msgs__msg__DebugArmor__Sequence * member =
    (const tide_msgs__msg__DebugArmor__Sequence *)(untyped_member);
  return member->size;
}

const void * tide_msgs__msg__DebugArmors__rosidl_typesupport_introspection_c__get_const_function__DebugArmors__data(
  const void * untyped_member, size_t index)
{
  const tide_msgs__msg__DebugArmor__Sequence * member =
    (const tide_msgs__msg__DebugArmor__Sequence *)(untyped_member);
  return &member->data[index];
}

void * tide_msgs__msg__DebugArmors__rosidl_typesupport_introspection_c__get_function__DebugArmors__data(
  void * untyped_member, size_t index)
{
  tide_msgs__msg__DebugArmor__Sequence * member =
    (tide_msgs__msg__DebugArmor__Sequence *)(untyped_member);
  return &member->data[index];
}

void tide_msgs__msg__DebugArmors__rosidl_typesupport_introspection_c__fetch_function__DebugArmors__data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const tide_msgs__msg__DebugArmor * item =
    ((const tide_msgs__msg__DebugArmor *)
    tide_msgs__msg__DebugArmors__rosidl_typesupport_introspection_c__get_const_function__DebugArmors__data(untyped_member, index));
  tide_msgs__msg__DebugArmor * value =
    (tide_msgs__msg__DebugArmor *)(untyped_value);
  *value = *item;
}

void tide_msgs__msg__DebugArmors__rosidl_typesupport_introspection_c__assign_function__DebugArmors__data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  tide_msgs__msg__DebugArmor * item =
    ((tide_msgs__msg__DebugArmor *)
    tide_msgs__msg__DebugArmors__rosidl_typesupport_introspection_c__get_function__DebugArmors__data(untyped_member, index));
  const tide_msgs__msg__DebugArmor * value =
    (const tide_msgs__msg__DebugArmor *)(untyped_value);
  *item = *value;
}

bool tide_msgs__msg__DebugArmors__rosidl_typesupport_introspection_c__resize_function__DebugArmors__data(
  void * untyped_member, size_t size)
{
  tide_msgs__msg__DebugArmor__Sequence * member =
    (tide_msgs__msg__DebugArmor__Sequence *)(untyped_member);
  tide_msgs__msg__DebugArmor__Sequence__fini(member);
  return tide_msgs__msg__DebugArmor__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember tide_msgs__msg__DebugArmors__rosidl_typesupport_introspection_c__DebugArmors_message_member_array[1] = {
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tide_msgs__msg__DebugArmors, data),  // bytes offset in struct
    NULL,  // default value
    tide_msgs__msg__DebugArmors__rosidl_typesupport_introspection_c__size_function__DebugArmors__data,  // size() function pointer
    tide_msgs__msg__DebugArmors__rosidl_typesupport_introspection_c__get_const_function__DebugArmors__data,  // get_const(index) function pointer
    tide_msgs__msg__DebugArmors__rosidl_typesupport_introspection_c__get_function__DebugArmors__data,  // get(index) function pointer
    tide_msgs__msg__DebugArmors__rosidl_typesupport_introspection_c__fetch_function__DebugArmors__data,  // fetch(index, &value) function pointer
    tide_msgs__msg__DebugArmors__rosidl_typesupport_introspection_c__assign_function__DebugArmors__data,  // assign(index, value) function pointer
    tide_msgs__msg__DebugArmors__rosidl_typesupport_introspection_c__resize_function__DebugArmors__data  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers tide_msgs__msg__DebugArmors__rosidl_typesupport_introspection_c__DebugArmors_message_members = {
  "tide_msgs__msg",  // message namespace
  "DebugArmors",  // message name
  1,  // number of fields
  sizeof(tide_msgs__msg__DebugArmors),
  tide_msgs__msg__DebugArmors__rosidl_typesupport_introspection_c__DebugArmors_message_member_array,  // message members
  tide_msgs__msg__DebugArmors__rosidl_typesupport_introspection_c__DebugArmors_init_function,  // function to initialize message memory (memory has to be allocated)
  tide_msgs__msg__DebugArmors__rosidl_typesupport_introspection_c__DebugArmors_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t tide_msgs__msg__DebugArmors__rosidl_typesupport_introspection_c__DebugArmors_message_type_support_handle = {
  0,
  &tide_msgs__msg__DebugArmors__rosidl_typesupport_introspection_c__DebugArmors_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tide_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tide_msgs, msg, DebugArmors)() {
  tide_msgs__msg__DebugArmors__rosidl_typesupport_introspection_c__DebugArmors_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tide_msgs, msg, DebugArmor)();
  if (!tide_msgs__msg__DebugArmors__rosidl_typesupport_introspection_c__DebugArmors_message_type_support_handle.typesupport_identifier) {
    tide_msgs__msg__DebugArmors__rosidl_typesupport_introspection_c__DebugArmors_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &tide_msgs__msg__DebugArmors__rosidl_typesupport_introspection_c__DebugArmors_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
