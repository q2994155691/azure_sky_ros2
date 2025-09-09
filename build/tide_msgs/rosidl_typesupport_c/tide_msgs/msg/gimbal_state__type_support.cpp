// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from tide_msgs:msg/GimbalState.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "tide_msgs/msg/detail/gimbal_state__struct.h"
#include "tide_msgs/msg/detail/gimbal_state__type_support.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace tide_msgs
{

namespace msg
{

namespace rosidl_typesupport_c
{

typedef struct _GimbalState_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _GimbalState_type_support_ids_t;

static const _GimbalState_type_support_ids_t _GimbalState_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _GimbalState_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _GimbalState_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _GimbalState_type_support_symbol_names_t _GimbalState_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tide_msgs, msg, GimbalState)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tide_msgs, msg, GimbalState)),
  }
};

typedef struct _GimbalState_type_support_data_t
{
  void * data[2];
} _GimbalState_type_support_data_t;

static _GimbalState_type_support_data_t _GimbalState_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _GimbalState_message_typesupport_map = {
  2,
  "tide_msgs",
  &_GimbalState_message_typesupport_ids.typesupport_identifier[0],
  &_GimbalState_message_typesupport_symbol_names.symbol_name[0],
  &_GimbalState_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t GimbalState_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_GimbalState_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace msg

}  // namespace tide_msgs

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, tide_msgs, msg, GimbalState)() {
  return &::tide_msgs::msg::rosidl_typesupport_c::GimbalState_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
