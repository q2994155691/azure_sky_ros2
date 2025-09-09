// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from tide_msgs:msg/RefereeData.idl
// generated code does not contain a copyright notice
#include "tide_msgs/msg/detail/referee_data__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "tide_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "tide_msgs/msg/detail/referee_data__struct.h"
#include "tide_msgs/msg/detail/referee_data__functions.h"
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

#include "tide_msgs/msg/detail/buff__functions.h"  // buff
#include "tide_msgs/msg/detail/bullet_remaining__functions.h"  // bulletremaining
#include "tide_msgs/msg/detail/event_data__functions.h"  // eventdata
#include "tide_msgs/msg/detail/game_result__functions.h"  // gameresult
#include "tide_msgs/msg/detail/game_robot_hp__functions.h"  // gamerobothp
#include "tide_msgs/msg/detail/game_robot_pos__functions.h"  // gamerobotpos
#include "tide_msgs/msg/detail/game_robot_status__functions.h"  // gamerobotstatus
#include "tide_msgs/msg/detail/game_status__functions.h"  // gamestatus
#include "tide_msgs/msg/detail/ground_robot__functions.h"  // groundrobotpos
#include "tide_msgs/msg/detail/interact_id__functions.h"  // interactid
#include "tide_msgs/msg/detail/power_heat_data__functions.h"  // powerheatdata
#include "tide_msgs/msg/detail/referee_warning__functions.h"  // refereewarning
#include "tide_msgs/msg/detail/rfid_status__functions.h"  // rfidstatus
#include "tide_msgs/msg/detail/robot_hurt__functions.h"  // robothurt
#include "tide_msgs/msg/detail/sentry_info__functions.h"  // sentryinfo
#include "tide_msgs/msg/detail/shoot_data__functions.h"  // shootdata

// forward declare type support functions
size_t get_serialized_size_tide_msgs__msg__Buff(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_tide_msgs__msg__Buff(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tide_msgs, msg, Buff)();
size_t get_serialized_size_tide_msgs__msg__BulletRemaining(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_tide_msgs__msg__BulletRemaining(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tide_msgs, msg, BulletRemaining)();
size_t get_serialized_size_tide_msgs__msg__EventData(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_tide_msgs__msg__EventData(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tide_msgs, msg, EventData)();
size_t get_serialized_size_tide_msgs__msg__GameResult(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_tide_msgs__msg__GameResult(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tide_msgs, msg, GameResult)();
size_t get_serialized_size_tide_msgs__msg__GameRobotHP(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_tide_msgs__msg__GameRobotHP(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tide_msgs, msg, GameRobotHP)();
size_t get_serialized_size_tide_msgs__msg__GameRobotPos(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_tide_msgs__msg__GameRobotPos(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tide_msgs, msg, GameRobotPos)();
size_t get_serialized_size_tide_msgs__msg__GameRobotStatus(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_tide_msgs__msg__GameRobotStatus(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tide_msgs, msg, GameRobotStatus)();
size_t get_serialized_size_tide_msgs__msg__GameStatus(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_tide_msgs__msg__GameStatus(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tide_msgs, msg, GameStatus)();
size_t get_serialized_size_tide_msgs__msg__GroundRobot(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_tide_msgs__msg__GroundRobot(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tide_msgs, msg, GroundRobot)();
size_t get_serialized_size_tide_msgs__msg__InteractID(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_tide_msgs__msg__InteractID(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tide_msgs, msg, InteractID)();
size_t get_serialized_size_tide_msgs__msg__PowerHeatData(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_tide_msgs__msg__PowerHeatData(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tide_msgs, msg, PowerHeatData)();
size_t get_serialized_size_tide_msgs__msg__RFIDStatus(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_tide_msgs__msg__RFIDStatus(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tide_msgs, msg, RFIDStatus)();
size_t get_serialized_size_tide_msgs__msg__RefereeWarning(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_tide_msgs__msg__RefereeWarning(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tide_msgs, msg, RefereeWarning)();
size_t get_serialized_size_tide_msgs__msg__RobotHurt(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_tide_msgs__msg__RobotHurt(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tide_msgs, msg, RobotHurt)();
size_t get_serialized_size_tide_msgs__msg__SentryInfo(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_tide_msgs__msg__SentryInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tide_msgs, msg, SentryInfo)();
size_t get_serialized_size_tide_msgs__msg__ShootData(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_tide_msgs__msg__ShootData(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tide_msgs, msg, ShootData)();


using _RefereeData__ros_msg_type = tide_msgs__msg__RefereeData;

static bool _RefereeData__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _RefereeData__ros_msg_type * ros_message = static_cast<const _RefereeData__ros_msg_type *>(untyped_ros_message);
  // Field name: gamestatus
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tide_msgs, msg, GameStatus
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->gamestatus, cdr))
    {
      return false;
    }
  }

  // Field name: gameresult
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tide_msgs, msg, GameResult
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->gameresult, cdr))
    {
      return false;
    }
  }

  // Field name: gamerobothp
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tide_msgs, msg, GameRobotHP
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->gamerobothp, cdr))
    {
      return false;
    }
  }

  // Field name: eventdata
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tide_msgs, msg, EventData
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->eventdata, cdr))
    {
      return false;
    }
  }

  // Field name: refereewarning
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tide_msgs, msg, RefereeWarning
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->refereewarning, cdr))
    {
      return false;
    }
  }

  // Field name: gamerobotstatus
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tide_msgs, msg, GameRobotStatus
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->gamerobotstatus, cdr))
    {
      return false;
    }
  }

  // Field name: powerheatdata
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tide_msgs, msg, PowerHeatData
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->powerheatdata, cdr))
    {
      return false;
    }
  }

  // Field name: gamerobotpos
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tide_msgs, msg, GameRobotPos
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->gamerobotpos, cdr))
    {
      return false;
    }
  }

  // Field name: buff
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tide_msgs, msg, Buff
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->buff, cdr))
    {
      return false;
    }
  }

  // Field name: robothurt
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tide_msgs, msg, RobotHurt
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->robothurt, cdr))
    {
      return false;
    }
  }

  // Field name: shootdata
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tide_msgs, msg, ShootData
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->shootdata, cdr))
    {
      return false;
    }
  }

  // Field name: bulletremaining
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tide_msgs, msg, BulletRemaining
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->bulletremaining, cdr))
    {
      return false;
    }
  }

  // Field name: rfidstatus
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tide_msgs, msg, RFIDStatus
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->rfidstatus, cdr))
    {
      return false;
    }
  }

  // Field name: groundrobotpos
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tide_msgs, msg, GroundRobot
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->groundrobotpos, cdr))
    {
      return false;
    }
  }

  // Field name: sentryinfo
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tide_msgs, msg, SentryInfo
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->sentryinfo, cdr))
    {
      return false;
    }
  }

  // Field name: interactid
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tide_msgs, msg, InteractID
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->interactid, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _RefereeData__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _RefereeData__ros_msg_type * ros_message = static_cast<_RefereeData__ros_msg_type *>(untyped_ros_message);
  // Field name: gamestatus
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tide_msgs, msg, GameStatus
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->gamestatus))
    {
      return false;
    }
  }

  // Field name: gameresult
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tide_msgs, msg, GameResult
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->gameresult))
    {
      return false;
    }
  }

  // Field name: gamerobothp
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tide_msgs, msg, GameRobotHP
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->gamerobothp))
    {
      return false;
    }
  }

  // Field name: eventdata
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tide_msgs, msg, EventData
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->eventdata))
    {
      return false;
    }
  }

  // Field name: refereewarning
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tide_msgs, msg, RefereeWarning
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->refereewarning))
    {
      return false;
    }
  }

  // Field name: gamerobotstatus
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tide_msgs, msg, GameRobotStatus
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->gamerobotstatus))
    {
      return false;
    }
  }

  // Field name: powerheatdata
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tide_msgs, msg, PowerHeatData
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->powerheatdata))
    {
      return false;
    }
  }

  // Field name: gamerobotpos
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tide_msgs, msg, GameRobotPos
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->gamerobotpos))
    {
      return false;
    }
  }

  // Field name: buff
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tide_msgs, msg, Buff
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->buff))
    {
      return false;
    }
  }

  // Field name: robothurt
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tide_msgs, msg, RobotHurt
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->robothurt))
    {
      return false;
    }
  }

  // Field name: shootdata
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tide_msgs, msg, ShootData
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->shootdata))
    {
      return false;
    }
  }

  // Field name: bulletremaining
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tide_msgs, msg, BulletRemaining
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->bulletremaining))
    {
      return false;
    }
  }

  // Field name: rfidstatus
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tide_msgs, msg, RFIDStatus
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->rfidstatus))
    {
      return false;
    }
  }

  // Field name: groundrobotpos
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tide_msgs, msg, GroundRobot
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->groundrobotpos))
    {
      return false;
    }
  }

  // Field name: sentryinfo
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tide_msgs, msg, SentryInfo
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->sentryinfo))
    {
      return false;
    }
  }

  // Field name: interactid
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, tide_msgs, msg, InteractID
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->interactid))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tide_msgs
size_t get_serialized_size_tide_msgs__msg__RefereeData(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RefereeData__ros_msg_type * ros_message = static_cast<const _RefereeData__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name gamestatus

  current_alignment += get_serialized_size_tide_msgs__msg__GameStatus(
    &(ros_message->gamestatus), current_alignment);
  // field.name gameresult

  current_alignment += get_serialized_size_tide_msgs__msg__GameResult(
    &(ros_message->gameresult), current_alignment);
  // field.name gamerobothp

  current_alignment += get_serialized_size_tide_msgs__msg__GameRobotHP(
    &(ros_message->gamerobothp), current_alignment);
  // field.name eventdata

  current_alignment += get_serialized_size_tide_msgs__msg__EventData(
    &(ros_message->eventdata), current_alignment);
  // field.name refereewarning

  current_alignment += get_serialized_size_tide_msgs__msg__RefereeWarning(
    &(ros_message->refereewarning), current_alignment);
  // field.name gamerobotstatus

  current_alignment += get_serialized_size_tide_msgs__msg__GameRobotStatus(
    &(ros_message->gamerobotstatus), current_alignment);
  // field.name powerheatdata

  current_alignment += get_serialized_size_tide_msgs__msg__PowerHeatData(
    &(ros_message->powerheatdata), current_alignment);
  // field.name gamerobotpos

  current_alignment += get_serialized_size_tide_msgs__msg__GameRobotPos(
    &(ros_message->gamerobotpos), current_alignment);
  // field.name buff

  current_alignment += get_serialized_size_tide_msgs__msg__Buff(
    &(ros_message->buff), current_alignment);
  // field.name robothurt

  current_alignment += get_serialized_size_tide_msgs__msg__RobotHurt(
    &(ros_message->robothurt), current_alignment);
  // field.name shootdata

  current_alignment += get_serialized_size_tide_msgs__msg__ShootData(
    &(ros_message->shootdata), current_alignment);
  // field.name bulletremaining

  current_alignment += get_serialized_size_tide_msgs__msg__BulletRemaining(
    &(ros_message->bulletremaining), current_alignment);
  // field.name rfidstatus

  current_alignment += get_serialized_size_tide_msgs__msg__RFIDStatus(
    &(ros_message->rfidstatus), current_alignment);
  // field.name groundrobotpos

  current_alignment += get_serialized_size_tide_msgs__msg__GroundRobot(
    &(ros_message->groundrobotpos), current_alignment);
  // field.name sentryinfo

  current_alignment += get_serialized_size_tide_msgs__msg__SentryInfo(
    &(ros_message->sentryinfo), current_alignment);
  // field.name interactid

  current_alignment += get_serialized_size_tide_msgs__msg__InteractID(
    &(ros_message->interactid), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _RefereeData__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_tide_msgs__msg__RefereeData(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_tide_msgs
size_t max_serialized_size_tide_msgs__msg__RefereeData(
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

  // member: gamestatus
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_tide_msgs__msg__GameStatus(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: gameresult
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_tide_msgs__msg__GameResult(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: gamerobothp
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_tide_msgs__msg__GameRobotHP(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: eventdata
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_tide_msgs__msg__EventData(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: refereewarning
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_tide_msgs__msg__RefereeWarning(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: gamerobotstatus
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_tide_msgs__msg__GameRobotStatus(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: powerheatdata
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_tide_msgs__msg__PowerHeatData(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: gamerobotpos
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_tide_msgs__msg__GameRobotPos(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: buff
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_tide_msgs__msg__Buff(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: robothurt
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_tide_msgs__msg__RobotHurt(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: shootdata
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_tide_msgs__msg__ShootData(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: bulletremaining
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_tide_msgs__msg__BulletRemaining(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: rfidstatus
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_tide_msgs__msg__RFIDStatus(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: groundrobotpos
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_tide_msgs__msg__GroundRobot(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: sentryinfo
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_tide_msgs__msg__SentryInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: interactid
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_tide_msgs__msg__InteractID(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = tide_msgs__msg__RefereeData;
    is_plain =
      (
      offsetof(DataType, interactid) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _RefereeData__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_tide_msgs__msg__RefereeData(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_RefereeData = {
  "tide_msgs::msg",
  "RefereeData",
  _RefereeData__cdr_serialize,
  _RefereeData__cdr_deserialize,
  _RefereeData__get_serialized_size,
  _RefereeData__max_serialized_size
};

static rosidl_message_type_support_t _RefereeData__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RefereeData,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, tide_msgs, msg, RefereeData)() {
  return &_RefereeData__type_support;
}

#if defined(__cplusplus)
}
#endif
