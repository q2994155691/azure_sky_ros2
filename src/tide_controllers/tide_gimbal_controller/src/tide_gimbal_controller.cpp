/*
 * @Author: qinghuan 1484237245@qq.com
 * @Date: 2025-01-26 16:04:35
 * @FilePath: /TideControls/src/tide_controllers/tide_gimbal_controller/src/tide_gimbal_controller.cpp
 * @Description:
 *
 * Copyright (c) 2025 by qinghuan, All Rights Reserved.
 */
#include "tide_gimbal_controller.hpp"
#include "angles/angles.h"

namespace tide_gimbal_controller
{
using controller_interface::interface_configuration_type;
using controller_interface::InterfaceConfiguration;

TideGimbalController::TideGimbalController() : controller_interface::ControllerInterface() {}

controller_interface::CallbackReturn TideGimbalController::on_init()
{
  try
  {
    param_listener_ = std::make_shared<ParamListener>(get_node());
    params_ = param_listener_->get_params();

    auto cmd = std::make_shared<CMD>();
    cmd->pitch_ref = 0.0;
    cmd->yaw_ref = 0.0;
    cmd->mode = 0;

    recv_cmd_ptr_.initRT(cmd);

    auto ex_state = std::make_shared<STATE>();
    ex_state->pitch_cur = 0.0;
    ex_state->yaw_cur = 0.0;

    ex_state_rt_.initRT(ex_state);

    last_tracking_time_ = this->get_node()->now();
  }
  catch (const std::exception& e)
  {
    fprintf(stderr, "Exception thrown during init stage with message: %s \n", e.what());
    return controller_interface::CallbackReturn::ERROR;
  }

  return controller_interface::CallbackReturn::SUCCESS;
}

InterfaceConfiguration TideGimbalController::command_interface_configuration() const
{
  std::vector<std::string> joint_names;
  joint_names.push_back(params_.pitch.joint + "/position");
  joint_names.push_back(params_.yaw.joint + "/position");
  
  joint_names.push_back("vision/has_target");

  return { interface_configuration_type::INDIVIDUAL, joint_names };
}

InterfaceConfiguration TideGimbalController::state_interface_configuration() const
{
  std::vector<std::string> joint_names;
  joint_names.push_back(params_.pitch.joint + "/position");
  joint_names.push_back(params_.yaw.joint + "/position");
  joint_names.push_back("rc/ch2"); //yaw
  joint_names.push_back("rc/sw1");
  joint_names.push_back("rc/sw2");
  joint_names.push_back("rc/wheel"); //pitch
  joint_names.push_back("rc/connected");

  return { interface_configuration_type::INDIVIDUAL, joint_names };
}

controller_interface::CallbackReturn
TideGimbalController::on_configure(const rclcpp_lifecycle::State& /*previous_state*/)
{
  params_ = param_listener_->get_params();
  open_loop_ = params_.open_loop;
  pid_pitch_pos_ = std::make_shared<control_toolbox::PidROS>(get_node(), "pitch.pid", true);
  pid_yaw_pos_ = std::make_shared<control_toolbox::PidROS>(get_node(), "yaw.pid", true);

  std::string joint_name = params_.pitch.joint;
  std::string link_name;

  size_t pos = joint_name.find("_joint");
  if (pos != std::string::npos)
  {
    link_name = joint_name.substr(0, pos) + "_link";
  }
  else
  {
    link_name = joint_name + "_link";
  }

  bullet_solver_ =
      std::make_shared<BulletSolver>(params_.bullet_solver.resistance_coff, params_.bullet_solver.g,
                                     link_name, params_.bullet_solver.time_delay,
                                     params_.bullet_solver.cam_offset);

  if (!pid_pitch_pos_->initPid() || !pid_yaw_pos_->initPid())
  {
    RCLCPP_ERROR(get_node()->get_logger(), "Failed to initialize PIDs.");
    return controller_interface::CallbackReturn::ERROR;
  }

  cmd_sub_ = get_node()->create_subscription<CMD>("~/gimbal_cmd", rclcpp::SystemDefaultsQoS(),
                                                  [this](const std::shared_ptr<CMD> msg) -> void {
                                                    recv_cmd_ptr_.writeFromNonRT(msg);
                                                  });

  ex_state_sub_ = get_node()->create_subscription<STATE>(
      "~/ex_state_interface", rclcpp::SensorDataQoS(),
      [this](const std::shared_ptr<STATE> msg) -> void { ex_state_rt_.writeFromNonRT(msg); });

  if (params_.tracker_topic.size() > 0)
  {
    for (const auto& topic : params_.tracker_topic)
    {
      auto tracker_buffer =
          std::make_shared<realtime_tools::RealtimeBuffer<std::shared_ptr<Tracker>>>();
      tracker_targets_.push_back(tracker_buffer);

      int idx = tracker_targets_.size() - 1;
      auto sub = get_node()->create_subscription<Tracker>(
          topic, rclcpp::SensorDataQoS(), [this, idx](const Tracker::SharedPtr msg) -> void {
            tracker_targets_[idx]->writeFromNonRT(msg);
          });

      auto_aim_subs_.push_back(sub);
      RCLCPP_INFO(get_node()->get_logger(), "Subscribed to tracker topic: %s", topic.c_str());
    }
  }

  auto marker_pub = get_node()->create_publisher<visualization_msgs::msg::Marker>(
      "~/bullet_traj", rclcpp::SystemDefaultsQoS());

  bullet_solver_->rt_bullet_traj_pub_ =
      std::make_shared<realtime_tools::RealtimePublisher<visualization_msgs::msg::Marker>>(
          marker_pub);

  auto aiming_point_pub = get_node()->create_publisher<visualization_msgs::msg::Marker>(
      "~/aiming_point", rclcpp::SystemDefaultsQoS());

  bullet_solver_->rt_aiming_point_pub_ =
      std::make_shared<realtime_tools::RealtimePublisher<visualization_msgs::msg::Marker>>(
          aiming_point_pub);

  auto gimbal_state_pub =
      get_node()->create_publisher<STATE>("~/gimbal_state", rclcpp::SystemDefaultsQoS());
  rt_gimbal_state_pub_ =
      std::make_shared<realtime_tools::RealtimePublisher<STATE>>(gimbal_state_pub);

  auto shooter_cmd_pub = get_node()->create_publisher<ShooterCmd>(params_.shooter_cmd_topic,
                                                                  rclcpp::SystemDefaultsQoS());
  rt_shooter_cmd_pub_ =
      std::make_shared<realtime_tools::RealtimePublisher<ShooterCmd>>(shooter_cmd_pub);
  return controller_interface::CallbackReturn::SUCCESS;
}

void TideGimbalController::update_parameters()
{
  if (!param_listener_->is_old(params_))
  {
    return;
  }
  params_ = param_listener_->get_params();
}

controller_interface::return_type TideGimbalController::update(const rclcpp::Time& time,
                                                               const rclcpp::Duration& period)
{
  update_parameters();
  auto logger = get_node()->get_logger();

  auto cmd = *recv_cmd_ptr_.readFromRT();
 
  last_mode_ = mode_;
  /*
  if (bullet_solver_->tracking_) {
      mode_ = 2;  // 有目标：自瞄
  } else {
      mode_ = 0;  // 无目标：手动模式
  }
  */

  mode_ = 2;
  
  
  
  double pitch_fb = 0.0, yaw_fb = 0.0;
  double pitch_cmd = 0.0, yaw_cmd = 0.0;

  if (params_.use_external_state_interface)
  {
    open_loop_ = true;
    mode_ = 2;
    auto ex_state = *ex_state_rt_.readFromRT();
    if (ex_state != nullptr)
    {
      pitch_fb = ex_state->pitch_cur;
      yaw_fb = ex_state->yaw_cur;
    }
  }
  else
  {
    pitch_fb = pitch_state_interface_->get_value();
    yaw_fb = yaw_state_interface_->get_value();
  }

  pitch_pos_fb_ = pitch_fb;
  yaw_pos_fb_ = yaw_fb;


  if (!tracker_targets_.empty())
{
  // 直接使用第一个tracker的目标，不进行选择
  auto target = *tracker_targets_[0]->readFromRT();
  if (target && target->tracking)
  {
    last_tracking_time_ = get_node()->now();
    bullet_solver_->tracker_target_.writeFromNonRT(target);
    bullet_solver_->update();
  }
  else
  {
    bullet_solver_->tracking_ = false;
  }
}


  switch (mode_)
  {
    case 0:
    {
      // 增量控制实现
      static double accumulated_pitch = 0.0;
      static double accumulated_yaw = 0.0;
      static bool first_run = true;
      
      static double YAW_MAX_SPEED =5.0;
      static double PITCH_MAX_SPEED =5.0;

      double rc_ch2_scaled = rc_ch2_state_interface_->get_value()/660*YAW_MAX_SPEED;
      double rc_sw1 = rc_sw1_state_interface_->get_value();
      double rc_sw2 = rc_sw2_state_interface_->get_value();
      double rc_wheel_scaled = rc_wheel_state_interface_->get_value()/660*PITCH_MAX_SPEED;
      double rc_connected = rc_connect_state_interface_->get_value();
      // 使用静态Clock避免宏错误
      static rclcpp::Clock rc_debug_clock(RCL_STEADY_TIME);
  
      //RCLCPP_INFO_THROTTLE(logger, rc_debug_clock, 10,
      //           "RC Status - WHEEL: %.0f", 
      //              rc_wheel);
  
      
      // 首次运行时初始化为当前位置
      if (first_run||last_mode_==2) {
        accumulated_pitch = pitch_pos_fb_;
        accumulated_yaw = yaw_pos_fb_;
        first_run = false;
        RCLCPP_INFO(logger, "Increment control initialized - pitch: %.3f, yaw: %.3f", 
                  accumulated_pitch, accumulated_yaw);
      }
      // 将cmd->yaw_ref和cmd->pitch_ref当作角速度 (rad/s)
      double dt = period.seconds();
      double pitch_increment = rc_wheel_scaled* dt;
      double yaw_increment = rc_ch2_scaled * dt;
      
      accumulated_pitch += pitch_increment;
      accumulated_yaw += yaw_increment;
      
      accumulated_pitch = std::clamp(accumulated_pitch, params_.pitch.min, params_.pitch.max);
      accumulated_yaw = std::clamp(accumulated_yaw, params_.yaw.min, params_.yaw.max);
      
      pitch_cmd = accumulated_pitch;
      yaw_cmd = accumulated_yaw;
     //pitch_cmd = cmd->pitch_ref;
     //yaw_cmd = cmd->yaw_ref;
      break;
    }
    case 1:
    {
      auto result = sentry_mode();
      pitch_cmd = result.first;
      yaw_cmd = result.second;
      break;
    }
    case 2:
    {
       auto result = auto_aim_mode();
       pitch_cmd = result.first;
       yaw_cmd = result.second;
       break;
    }
    default:
      break;
  }

  pitch_pos_cmd_ = std::clamp(pitch_cmd, params_.pitch.min, params_.pitch.max);
  yaw_pos_cmd_ = std::clamp(yaw_cmd, params_.yaw.min, params_.yaw.max);


  pitch_pos_cmd_ = params_.pitch.reverse ? -pitch_pos_cmd_ : pitch_pos_cmd_;
  yaw_pos_cmd_ = params_.yaw.reverse ? -yaw_pos_cmd_ : yaw_pos_cmd_;

  if (open_loop_)
  {
    if (params_.use_external_state_interface)
    {
      pitch_command_interface_->set_value(pitch_pos_fb_);
      yaw_command_interface_->set_value(yaw_pos_fb_);
    }
    else
    {
      pitch_command_interface_->set_value(pitch_pos_cmd_);
      yaw_command_interface_->set_value(yaw_pos_cmd_);
    }
  }
  else
  {
    double pitch_error = pitch_pos_cmd_ - pitch_pos_fb_;
    double yaw_error = yaw_pos_cmd_ - yaw_pos_fb_;

    pitch_error = angles::shortest_angular_distance(pitch_pos_fb_, pitch_pos_cmd_);
    yaw_error = angles::shortest_angular_distance(yaw_pos_fb_, yaw_pos_cmd_);

    double pitch_cmd_tmp = pid_pitch_pos_->computeCommand(pitch_error, period);
    double yaw_cmd_tmp = pid_yaw_pos_->computeCommand(yaw_error, period);

    pitch_command_interface_->set_value(pitch_cmd_tmp);
    yaw_command_interface_->set_value(yaw_cmd_tmp);
  }

  if (vision_target_interface_) {
    double target_value = (bullet_solver_->tracking_) ? 1.0 : 0.0;
    vision_target_interface_->set_value(target_value);
  }

  if (rt_gimbal_state_pub_->trylock())
  {
    auto& gimbal_state = rt_gimbal_state_pub_->msg_;
    gimbal_state.header.stamp = time;
    gimbal_state.mode = mode_;
    gimbal_state.is_tracking = bullet_solver_->tracking_;
    gimbal_state.pitch_ref = pitch_pos_cmd_;
    gimbal_state.yaw_ref = yaw_pos_cmd_;
    gimbal_state.pitch_cur = pitch_pos_fb_;
    gimbal_state.yaw_cur = yaw_pos_fb_;
    rt_gimbal_state_pub_->unlockAndPublish();
  }

  return controller_interface::return_type::OK;
}

controller_interface::CallbackReturn
TideGimbalController::on_activate(const rclcpp_lifecycle::State& /*previous_state*/)
{
  pitch_state_interface_ = std::make_unique<const hardware_interface::LoanedStateInterface>(
      std::move(state_interfaces_[0]));
  yaw_state_interface_ = std::make_unique<const hardware_interface::LoanedStateInterface>(
      std::move(state_interfaces_[1]));
      rc_ch2_state_interface_=std::make_unique<const hardware_interface::LoanedStateInterface>(
      std::move(state_interfaces_[2]));
  rc_sw1_state_interface_=std::make_unique<const hardware_interface::LoanedStateInterface>(
      std::move(state_interfaces_[3]));
  rc_sw2_state_interface_=std::make_unique<const hardware_interface::LoanedStateInterface>(
      std::move(state_interfaces_[4]));
  rc_wheel_state_interface_=std::make_unique<const hardware_interface::LoanedStateInterface>(
      std::move(state_interfaces_[5]));
  rc_connect_state_interface_=std::make_unique<const hardware_interface::LoanedStateInterface>(
      std::move(state_interfaces_[6]));
  pitch_command_interface_ = std::make_unique<hardware_interface::LoanedCommandInterface>(
      std::move(command_interfaces_[0]));
  yaw_command_interface_ = std::make_unique<hardware_interface::LoanedCommandInterface>(
      std::move(command_interfaces_[1]));
  vision_target_interface_ = std::make_unique<hardware_interface::LoanedCommandInterface>(
      std::move(command_interfaces_[2]));

  return controller_interface::CallbackReturn::SUCCESS;
}

controller_interface::CallbackReturn
TideGimbalController::on_deactivate(const rclcpp_lifecycle::State& /*previous_state*/)
{
  pitch_state_interface_.reset();
  yaw_state_interface_.reset();
  rc_connect_state_interface_.reset();
  rc_sw2_state_interface_.reset();
  rc_sw1_state_interface_.reset();
  rc_wheel_state_interface_.reset();
  rc_ch2_state_interface_.reset();
  pitch_command_interface_.reset();
  yaw_command_interface_.reset();
  bullet_solver_.reset();

  return controller_interface::CallbackReturn::SUCCESS;
}

controller_interface::CallbackReturn
TideGimbalController::on_cleanup(const rclcpp_lifecycle::State& previous_state)
{
  return controller_interface::CallbackReturn::SUCCESS;
}

controller_interface::CallbackReturn
TideGimbalController::on_error(const rclcpp_lifecycle::State& previous_state)
{
  return controller_interface::CallbackReturn::SUCCESS;
}

std::pair<double, double> TideGimbalController::sentry_mode()
{
  auto lost_time = get_node()->now() - last_tracking_time_;
  rt_shooter_cmd_pub_->msg_.bullet_velocity = 23.0;
  rt_shooter_cmd_pub_->msg_.shooting_freq = 30.0;

  rt_shooter_cmd_pub_->msg_.mode = 0;
  if (bullet_solver_->tracking_ || lost_time.seconds() < 2.0)
  {
    return auto_aim_mode();
  }

  if (mode_ != last_mode_)
  {
    pitch_cmd_ = pitch_pos_fb_;
    yaw_cmd_ = yaw_pos_fb_;
  }

  if (pitch_cmd_ > params_.pitch.scan_range[1] || pitch_cmd_ < params_.pitch.scan_range[0])
  {
    pitch_reverse_ *= -1;
  }

  if (yaw_cmd_ > params_.yaw.scan_range[1] || yaw_cmd_ < params_.yaw.scan_range[0])
  {
    yaw_reverse_ *= -1;
  }

  pitch_cmd_ += pitch_reverse_ * params_.pitch.scan_add;
  yaw_cmd_ += yaw_reverse_ * params_.yaw.scan_add;

  if (rt_shooter_cmd_pub_->trylock())
  {
    rt_shooter_cmd_pub_->unlockAndPublish();
  }

  return std::make_pair(pitch_cmd_, yaw_cmd_);
}

std::pair<double, double> TideGimbalController::auto_aim_mode()
{
  static rclcpp::Clock rc_debug_clock(RCL_STEADY_TIME);

  if (!bullet_solver_->tracking_)
  {
    if (rt_shooter_cmd_pub_->trylock()) {
      rt_shooter_cmd_pub_->unlockAndPublish();
    }
    return {pitch_pos_fb_, yaw_pos_fb_};
  }

  bool solve_success = bullet_solver_->solve(23.0, pitch_pos_fb_, yaw_pos_fb_);
  bullet_solver_->ballistic_visualization();

  if (solve_success)
  {
    auto result = bullet_solver_->get_result();

    RCLCPP_INFO(get_node()->get_logger(),
                "[auto_aim_mode] solver pitch=%.4f  yaw=%.4f  (cur pitch=%.4f, cur yaw=%.4f)",
                result.first, result.second, pitch_pos_fb_, yaw_pos_fb_);

    if (std::abs(yaw_pos_fb_ - result.second) < 0.06) {
      rt_shooter_cmd_pub_->msg_.mode = 1;
    }
    return result;
    //return {pitch_pos_fb_, yaw_pos_fb_};
  }
  else
  {
    if (rt_shooter_cmd_pub_->trylock()) {
      rt_shooter_cmd_pub_->unlockAndPublish();
    }
    return {pitch_pos_fb_, yaw_pos_fb_};
  }
}


std::shared_ptr<TideGimbalController::Tracker> TideGimbalController::select_best_target()
{
  std::shared_ptr<Tracker> best_target = nullptr;
  double min_angle_diff = 9999.99;
  double current_yaw = yaw_pos_fb_;
  bool has_target = false;

  for (const auto& tracker_buffer : tracker_targets_)
  {
    auto target = *tracker_buffer->readFromRT();
    if (target && target->tracking)
    {
      has_target = true;
      last_tracking_time_ = get_node()->now();
      double target_yaw = std::atan2(target->position.y, target->position.x);
      double angle_diff = std::abs(angles::shortest_angular_distance(current_yaw, target_yaw));

      if (angle_diff < min_angle_diff)
      {
        min_angle_diff = angle_diff;
        best_target = target;
      }
    }
  }
  if (!has_target)
  {
    bullet_solver_->tracking_ = false;
  }

  return best_target;
}

}  // namespace tide_gimbal_controller

#include "pluginlib/class_list_macros.hpp"
PLUGINLIB_EXPORT_CLASS(tide_gimbal_controller::TideGimbalController,
                       controller_interface::ControllerInterface)
