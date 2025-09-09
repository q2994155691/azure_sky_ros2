// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tide_msgs:msg/RefereeData.idl
// generated code does not contain a copyright notice

#ifndef TIDE_MSGS__MSG__DETAIL__REFEREE_DATA__STRUCT_H_
#define TIDE_MSGS__MSG__DETAIL__REFEREE_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'gamestatus'
#include "tide_msgs/msg/detail/game_status__struct.h"
// Member 'gameresult'
#include "tide_msgs/msg/detail/game_result__struct.h"
// Member 'gamerobothp'
#include "tide_msgs/msg/detail/game_robot_hp__struct.h"
// Member 'eventdata'
#include "tide_msgs/msg/detail/event_data__struct.h"
// Member 'refereewarning'
#include "tide_msgs/msg/detail/referee_warning__struct.h"
// Member 'gamerobotstatus'
#include "tide_msgs/msg/detail/game_robot_status__struct.h"
// Member 'powerheatdata'
#include "tide_msgs/msg/detail/power_heat_data__struct.h"
// Member 'gamerobotpos'
#include "tide_msgs/msg/detail/game_robot_pos__struct.h"
// Member 'buff'
#include "tide_msgs/msg/detail/buff__struct.h"
// Member 'robothurt'
#include "tide_msgs/msg/detail/robot_hurt__struct.h"
// Member 'shootdata'
#include "tide_msgs/msg/detail/shoot_data__struct.h"
// Member 'bulletremaining'
#include "tide_msgs/msg/detail/bullet_remaining__struct.h"
// Member 'rfidstatus'
#include "tide_msgs/msg/detail/rfid_status__struct.h"
// Member 'groundrobotpos'
#include "tide_msgs/msg/detail/ground_robot__struct.h"
// Member 'sentryinfo'
#include "tide_msgs/msg/detail/sentry_info__struct.h"
// Member 'interactid'
#include "tide_msgs/msg/detail/interact_id__struct.h"

/// Struct defined in msg/RefereeData in the package tide_msgs.
typedef struct tide_msgs__msg__RefereeData
{
  tide_msgs__msg__GameStatus gamestatus;
  tide_msgs__msg__GameResult gameresult;
  tide_msgs__msg__GameRobotHP gamerobothp;
  tide_msgs__msg__EventData eventdata;
  tide_msgs__msg__RefereeWarning refereewarning;
  tide_msgs__msg__GameRobotStatus gamerobotstatus;
  tide_msgs__msg__PowerHeatData powerheatdata;
  tide_msgs__msg__GameRobotPos gamerobotpos;
  tide_msgs__msg__Buff buff;
  tide_msgs__msg__RobotHurt robothurt;
  tide_msgs__msg__ShootData shootdata;
  tide_msgs__msg__BulletRemaining bulletremaining;
  tide_msgs__msg__RFIDStatus rfidstatus;
  tide_msgs__msg__GroundRobot groundrobotpos;
  tide_msgs__msg__SentryInfo sentryinfo;
  tide_msgs__msg__InteractID interactid;
} tide_msgs__msg__RefereeData;

// Struct for a sequence of tide_msgs__msg__RefereeData.
typedef struct tide_msgs__msg__RefereeData__Sequence
{
  tide_msgs__msg__RefereeData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tide_msgs__msg__RefereeData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TIDE_MSGS__MSG__DETAIL__REFEREE_DATA__STRUCT_H_
