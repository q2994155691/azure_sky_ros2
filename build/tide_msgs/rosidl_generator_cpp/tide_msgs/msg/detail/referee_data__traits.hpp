// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tide_msgs:msg/RefereeData.idl
// generated code does not contain a copyright notice

#ifndef TIDE_MSGS__MSG__DETAIL__REFEREE_DATA__TRAITS_HPP_
#define TIDE_MSGS__MSG__DETAIL__REFEREE_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "tide_msgs/msg/detail/referee_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'gamestatus'
#include "tide_msgs/msg/detail/game_status__traits.hpp"
// Member 'gameresult'
#include "tide_msgs/msg/detail/game_result__traits.hpp"
// Member 'gamerobothp'
#include "tide_msgs/msg/detail/game_robot_hp__traits.hpp"
// Member 'eventdata'
#include "tide_msgs/msg/detail/event_data__traits.hpp"
// Member 'refereewarning'
#include "tide_msgs/msg/detail/referee_warning__traits.hpp"
// Member 'gamerobotstatus'
#include "tide_msgs/msg/detail/game_robot_status__traits.hpp"
// Member 'powerheatdata'
#include "tide_msgs/msg/detail/power_heat_data__traits.hpp"
// Member 'gamerobotpos'
#include "tide_msgs/msg/detail/game_robot_pos__traits.hpp"
// Member 'buff'
#include "tide_msgs/msg/detail/buff__traits.hpp"
// Member 'robothurt'
#include "tide_msgs/msg/detail/robot_hurt__traits.hpp"
// Member 'shootdata'
#include "tide_msgs/msg/detail/shoot_data__traits.hpp"
// Member 'bulletremaining'
#include "tide_msgs/msg/detail/bullet_remaining__traits.hpp"
// Member 'rfidstatus'
#include "tide_msgs/msg/detail/rfid_status__traits.hpp"
// Member 'groundrobotpos'
#include "tide_msgs/msg/detail/ground_robot__traits.hpp"
// Member 'sentryinfo'
#include "tide_msgs/msg/detail/sentry_info__traits.hpp"
// Member 'interactid'
#include "tide_msgs/msg/detail/interact_id__traits.hpp"

namespace tide_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RefereeData & msg,
  std::ostream & out)
{
  out << "{";
  // member: gamestatus
  {
    out << "gamestatus: ";
    to_flow_style_yaml(msg.gamestatus, out);
    out << ", ";
  }

  // member: gameresult
  {
    out << "gameresult: ";
    to_flow_style_yaml(msg.gameresult, out);
    out << ", ";
  }

  // member: gamerobothp
  {
    out << "gamerobothp: ";
    to_flow_style_yaml(msg.gamerobothp, out);
    out << ", ";
  }

  // member: eventdata
  {
    out << "eventdata: ";
    to_flow_style_yaml(msg.eventdata, out);
    out << ", ";
  }

  // member: refereewarning
  {
    out << "refereewarning: ";
    to_flow_style_yaml(msg.refereewarning, out);
    out << ", ";
  }

  // member: gamerobotstatus
  {
    out << "gamerobotstatus: ";
    to_flow_style_yaml(msg.gamerobotstatus, out);
    out << ", ";
  }

  // member: powerheatdata
  {
    out << "powerheatdata: ";
    to_flow_style_yaml(msg.powerheatdata, out);
    out << ", ";
  }

  // member: gamerobotpos
  {
    out << "gamerobotpos: ";
    to_flow_style_yaml(msg.gamerobotpos, out);
    out << ", ";
  }

  // member: buff
  {
    out << "buff: ";
    to_flow_style_yaml(msg.buff, out);
    out << ", ";
  }

  // member: robothurt
  {
    out << "robothurt: ";
    to_flow_style_yaml(msg.robothurt, out);
    out << ", ";
  }

  // member: shootdata
  {
    out << "shootdata: ";
    to_flow_style_yaml(msg.shootdata, out);
    out << ", ";
  }

  // member: bulletremaining
  {
    out << "bulletremaining: ";
    to_flow_style_yaml(msg.bulletremaining, out);
    out << ", ";
  }

  // member: rfidstatus
  {
    out << "rfidstatus: ";
    to_flow_style_yaml(msg.rfidstatus, out);
    out << ", ";
  }

  // member: groundrobotpos
  {
    out << "groundrobotpos: ";
    to_flow_style_yaml(msg.groundrobotpos, out);
    out << ", ";
  }

  // member: sentryinfo
  {
    out << "sentryinfo: ";
    to_flow_style_yaml(msg.sentryinfo, out);
    out << ", ";
  }

  // member: interactid
  {
    out << "interactid: ";
    to_flow_style_yaml(msg.interactid, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RefereeData & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: gamestatus
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gamestatus:\n";
    to_block_style_yaml(msg.gamestatus, out, indentation + 2);
  }

  // member: gameresult
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gameresult:\n";
    to_block_style_yaml(msg.gameresult, out, indentation + 2);
  }

  // member: gamerobothp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gamerobothp:\n";
    to_block_style_yaml(msg.gamerobothp, out, indentation + 2);
  }

  // member: eventdata
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "eventdata:\n";
    to_block_style_yaml(msg.eventdata, out, indentation + 2);
  }

  // member: refereewarning
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "refereewarning:\n";
    to_block_style_yaml(msg.refereewarning, out, indentation + 2);
  }

  // member: gamerobotstatus
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gamerobotstatus:\n";
    to_block_style_yaml(msg.gamerobotstatus, out, indentation + 2);
  }

  // member: powerheatdata
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "powerheatdata:\n";
    to_block_style_yaml(msg.powerheatdata, out, indentation + 2);
  }

  // member: gamerobotpos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gamerobotpos:\n";
    to_block_style_yaml(msg.gamerobotpos, out, indentation + 2);
  }

  // member: buff
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "buff:\n";
    to_block_style_yaml(msg.buff, out, indentation + 2);
  }

  // member: robothurt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "robothurt:\n";
    to_block_style_yaml(msg.robothurt, out, indentation + 2);
  }

  // member: shootdata
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "shootdata:\n";
    to_block_style_yaml(msg.shootdata, out, indentation + 2);
  }

  // member: bulletremaining
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bulletremaining:\n";
    to_block_style_yaml(msg.bulletremaining, out, indentation + 2);
  }

  // member: rfidstatus
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rfidstatus:\n";
    to_block_style_yaml(msg.rfidstatus, out, indentation + 2);
  }

  // member: groundrobotpos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "groundrobotpos:\n";
    to_block_style_yaml(msg.groundrobotpos, out, indentation + 2);
  }

  // member: sentryinfo
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sentryinfo:\n";
    to_block_style_yaml(msg.sentryinfo, out, indentation + 2);
  }

  // member: interactid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "interactid:\n";
    to_block_style_yaml(msg.interactid, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RefereeData & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace tide_msgs

namespace rosidl_generator_traits
{

[[deprecated("use tide_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const tide_msgs::msg::RefereeData & msg,
  std::ostream & out, size_t indentation = 0)
{
  tide_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use tide_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const tide_msgs::msg::RefereeData & msg)
{
  return tide_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<tide_msgs::msg::RefereeData>()
{
  return "tide_msgs::msg::RefereeData";
}

template<>
inline const char * name<tide_msgs::msg::RefereeData>()
{
  return "tide_msgs/msg/RefereeData";
}

template<>
struct has_fixed_size<tide_msgs::msg::RefereeData>
  : std::integral_constant<bool, has_fixed_size<tide_msgs::msg::Buff>::value && has_fixed_size<tide_msgs::msg::BulletRemaining>::value && has_fixed_size<tide_msgs::msg::EventData>::value && has_fixed_size<tide_msgs::msg::GameResult>::value && has_fixed_size<tide_msgs::msg::GameRobotHP>::value && has_fixed_size<tide_msgs::msg::GameRobotPos>::value && has_fixed_size<tide_msgs::msg::GameRobotStatus>::value && has_fixed_size<tide_msgs::msg::GameStatus>::value && has_fixed_size<tide_msgs::msg::GroundRobot>::value && has_fixed_size<tide_msgs::msg::InteractID>::value && has_fixed_size<tide_msgs::msg::PowerHeatData>::value && has_fixed_size<tide_msgs::msg::RFIDStatus>::value && has_fixed_size<tide_msgs::msg::RefereeWarning>::value && has_fixed_size<tide_msgs::msg::RobotHurt>::value && has_fixed_size<tide_msgs::msg::SentryInfo>::value && has_fixed_size<tide_msgs::msg::ShootData>::value> {};

template<>
struct has_bounded_size<tide_msgs::msg::RefereeData>
  : std::integral_constant<bool, has_bounded_size<tide_msgs::msg::Buff>::value && has_bounded_size<tide_msgs::msg::BulletRemaining>::value && has_bounded_size<tide_msgs::msg::EventData>::value && has_bounded_size<tide_msgs::msg::GameResult>::value && has_bounded_size<tide_msgs::msg::GameRobotHP>::value && has_bounded_size<tide_msgs::msg::GameRobotPos>::value && has_bounded_size<tide_msgs::msg::GameRobotStatus>::value && has_bounded_size<tide_msgs::msg::GameStatus>::value && has_bounded_size<tide_msgs::msg::GroundRobot>::value && has_bounded_size<tide_msgs::msg::InteractID>::value && has_bounded_size<tide_msgs::msg::PowerHeatData>::value && has_bounded_size<tide_msgs::msg::RFIDStatus>::value && has_bounded_size<tide_msgs::msg::RefereeWarning>::value && has_bounded_size<tide_msgs::msg::RobotHurt>::value && has_bounded_size<tide_msgs::msg::SentryInfo>::value && has_bounded_size<tide_msgs::msg::ShootData>::value> {};

template<>
struct is_message<tide_msgs::msg::RefereeData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TIDE_MSGS__MSG__DETAIL__REFEREE_DATA__TRAITS_HPP_
