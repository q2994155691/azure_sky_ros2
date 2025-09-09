// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from tide_msgs:msg/RefereeData.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "tide_msgs/msg/detail/referee_data__rosidl_typesupport_introspection_c.h"
#include "tide_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "tide_msgs/msg/detail/referee_data__functions.h"
#include "tide_msgs/msg/detail/referee_data__struct.h"


// Include directives for member types
// Member `gamestatus`
#include "tide_msgs/msg/game_status.h"
// Member `gamestatus`
#include "tide_msgs/msg/detail/game_status__rosidl_typesupport_introspection_c.h"
// Member `gameresult`
#include "tide_msgs/msg/game_result.h"
// Member `gameresult`
#include "tide_msgs/msg/detail/game_result__rosidl_typesupport_introspection_c.h"
// Member `gamerobothp`
#include "tide_msgs/msg/game_robot_hp.h"
// Member `gamerobothp`
#include "tide_msgs/msg/detail/game_robot_hp__rosidl_typesupport_introspection_c.h"
// Member `eventdata`
#include "tide_msgs/msg/event_data.h"
// Member `eventdata`
#include "tide_msgs/msg/detail/event_data__rosidl_typesupport_introspection_c.h"
// Member `refereewarning`
#include "tide_msgs/msg/referee_warning.h"
// Member `refereewarning`
#include "tide_msgs/msg/detail/referee_warning__rosidl_typesupport_introspection_c.h"
// Member `gamerobotstatus`
#include "tide_msgs/msg/game_robot_status.h"
// Member `gamerobotstatus`
#include "tide_msgs/msg/detail/game_robot_status__rosidl_typesupport_introspection_c.h"
// Member `powerheatdata`
#include "tide_msgs/msg/power_heat_data.h"
// Member `powerheatdata`
#include "tide_msgs/msg/detail/power_heat_data__rosidl_typesupport_introspection_c.h"
// Member `gamerobotpos`
#include "tide_msgs/msg/game_robot_pos.h"
// Member `gamerobotpos`
#include "tide_msgs/msg/detail/game_robot_pos__rosidl_typesupport_introspection_c.h"
// Member `buff`
#include "tide_msgs/msg/buff.h"
// Member `buff`
#include "tide_msgs/msg/detail/buff__rosidl_typesupport_introspection_c.h"
// Member `robothurt`
#include "tide_msgs/msg/robot_hurt.h"
// Member `robothurt`
#include "tide_msgs/msg/detail/robot_hurt__rosidl_typesupport_introspection_c.h"
// Member `shootdata`
#include "tide_msgs/msg/shoot_data.h"
// Member `shootdata`
#include "tide_msgs/msg/detail/shoot_data__rosidl_typesupport_introspection_c.h"
// Member `bulletremaining`
#include "tide_msgs/msg/bullet_remaining.h"
// Member `bulletremaining`
#include "tide_msgs/msg/detail/bullet_remaining__rosidl_typesupport_introspection_c.h"
// Member `rfidstatus`
#include "tide_msgs/msg/rfid_status.h"
// Member `rfidstatus`
#include "tide_msgs/msg/detail/rfid_status__rosidl_typesupport_introspection_c.h"
// Member `groundrobotpos`
#include "tide_msgs/msg/ground_robot.h"
// Member `groundrobotpos`
#include "tide_msgs/msg/detail/ground_robot__rosidl_typesupport_introspection_c.h"
// Member `sentryinfo`
#include "tide_msgs/msg/sentry_info.h"
// Member `sentryinfo`
#include "tide_msgs/msg/detail/sentry_info__rosidl_typesupport_introspection_c.h"
// Member `interactid`
#include "tide_msgs/msg/interact_id.h"
// Member `interactid`
#include "tide_msgs/msg/detail/interact_id__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void tide_msgs__msg__RefereeData__rosidl_typesupport_introspection_c__RefereeData_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  tide_msgs__msg__RefereeData__init(message_memory);
}

void tide_msgs__msg__RefereeData__rosidl_typesupport_introspection_c__RefereeData_fini_function(void * message_memory)
{
  tide_msgs__msg__RefereeData__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember tide_msgs__msg__RefereeData__rosidl_typesupport_introspection_c__RefereeData_message_member_array[16] = {
  {
    "gamestatus",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tide_msgs__msg__RefereeData, gamestatus),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gameresult",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tide_msgs__msg__RefereeData, gameresult),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gamerobothp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tide_msgs__msg__RefereeData, gamerobothp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "eventdata",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tide_msgs__msg__RefereeData, eventdata),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "refereewarning",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tide_msgs__msg__RefereeData, refereewarning),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gamerobotstatus",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tide_msgs__msg__RefereeData, gamerobotstatus),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "powerheatdata",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tide_msgs__msg__RefereeData, powerheatdata),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gamerobotpos",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tide_msgs__msg__RefereeData, gamerobotpos),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "buff",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tide_msgs__msg__RefereeData, buff),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "robothurt",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tide_msgs__msg__RefereeData, robothurt),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "shootdata",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tide_msgs__msg__RefereeData, shootdata),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bulletremaining",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tide_msgs__msg__RefereeData, bulletremaining),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rfidstatus",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tide_msgs__msg__RefereeData, rfidstatus),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "groundrobotpos",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tide_msgs__msg__RefereeData, groundrobotpos),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sentryinfo",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tide_msgs__msg__RefereeData, sentryinfo),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "interactid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(tide_msgs__msg__RefereeData, interactid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers tide_msgs__msg__RefereeData__rosidl_typesupport_introspection_c__RefereeData_message_members = {
  "tide_msgs__msg",  // message namespace
  "RefereeData",  // message name
  16,  // number of fields
  sizeof(tide_msgs__msg__RefereeData),
  tide_msgs__msg__RefereeData__rosidl_typesupport_introspection_c__RefereeData_message_member_array,  // message members
  tide_msgs__msg__RefereeData__rosidl_typesupport_introspection_c__RefereeData_init_function,  // function to initialize message memory (memory has to be allocated)
  tide_msgs__msg__RefereeData__rosidl_typesupport_introspection_c__RefereeData_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t tide_msgs__msg__RefereeData__rosidl_typesupport_introspection_c__RefereeData_message_type_support_handle = {
  0,
  &tide_msgs__msg__RefereeData__rosidl_typesupport_introspection_c__RefereeData_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_tide_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tide_msgs, msg, RefereeData)() {
  tide_msgs__msg__RefereeData__rosidl_typesupport_introspection_c__RefereeData_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tide_msgs, msg, GameStatus)();
  tide_msgs__msg__RefereeData__rosidl_typesupport_introspection_c__RefereeData_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tide_msgs, msg, GameResult)();
  tide_msgs__msg__RefereeData__rosidl_typesupport_introspection_c__RefereeData_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tide_msgs, msg, GameRobotHP)();
  tide_msgs__msg__RefereeData__rosidl_typesupport_introspection_c__RefereeData_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tide_msgs, msg, EventData)();
  tide_msgs__msg__RefereeData__rosidl_typesupport_introspection_c__RefereeData_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tide_msgs, msg, RefereeWarning)();
  tide_msgs__msg__RefereeData__rosidl_typesupport_introspection_c__RefereeData_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tide_msgs, msg, GameRobotStatus)();
  tide_msgs__msg__RefereeData__rosidl_typesupport_introspection_c__RefereeData_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tide_msgs, msg, PowerHeatData)();
  tide_msgs__msg__RefereeData__rosidl_typesupport_introspection_c__RefereeData_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tide_msgs, msg, GameRobotPos)();
  tide_msgs__msg__RefereeData__rosidl_typesupport_introspection_c__RefereeData_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tide_msgs, msg, Buff)();
  tide_msgs__msg__RefereeData__rosidl_typesupport_introspection_c__RefereeData_message_member_array[9].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tide_msgs, msg, RobotHurt)();
  tide_msgs__msg__RefereeData__rosidl_typesupport_introspection_c__RefereeData_message_member_array[10].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tide_msgs, msg, ShootData)();
  tide_msgs__msg__RefereeData__rosidl_typesupport_introspection_c__RefereeData_message_member_array[11].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tide_msgs, msg, BulletRemaining)();
  tide_msgs__msg__RefereeData__rosidl_typesupport_introspection_c__RefereeData_message_member_array[12].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tide_msgs, msg, RFIDStatus)();
  tide_msgs__msg__RefereeData__rosidl_typesupport_introspection_c__RefereeData_message_member_array[13].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tide_msgs, msg, GroundRobot)();
  tide_msgs__msg__RefereeData__rosidl_typesupport_introspection_c__RefereeData_message_member_array[14].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tide_msgs, msg, SentryInfo)();
  tide_msgs__msg__RefereeData__rosidl_typesupport_introspection_c__RefereeData_message_member_array[15].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, tide_msgs, msg, InteractID)();
  if (!tide_msgs__msg__RefereeData__rosidl_typesupport_introspection_c__RefereeData_message_type_support_handle.typesupport_identifier) {
    tide_msgs__msg__RefereeData__rosidl_typesupport_introspection_c__RefereeData_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &tide_msgs__msg__RefereeData__rosidl_typesupport_introspection_c__RefereeData_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
