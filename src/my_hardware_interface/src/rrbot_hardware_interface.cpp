// Copyright (c) 2022, Stogl Robotics Consulting UG (haftungsbeschränkt) (template)
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include <limits>
#include <memory>
#include <string>
#include <vector>
#include <thread>
#include <atomic>
#include <map>
#include <mutex>

#include "my_hardware_interface/remote_controller.hpp"
#include "my_hardware_interface/rrbot_hardware_interface.hpp"
#include "hardware_interface/types/hardware_interface_type_values.hpp"  
#include "rclcpp/rclcpp.hpp"


namespace my_hardware_interface
{

CanDevice::CanDevice(const std::string& iface, ReceiveCallback cb)
: interface(iface)
, receive_callback_(std::move(cb))
, sender  (std::make_shared<drivers::socketcan::SocketCanSender>(iface))
, receiver(std::make_shared<drivers::socketcan::SocketCanReceiver>(iface))
, thread_running(std::make_shared<std::atomic<bool>>(true))
{
  receiver_thread =
      std::make_shared<std::thread>(&CanDevice::receiveLoop, this);
}

void CanDevice::receiveLoop()
{
  std::array<uint8_t,8> data;

  while (thread_running->load() && rclcpp::ok())
  {
    try
    {
      auto can_id = receiver->receive(
          data.data(),
          std::chrono::milliseconds(1));  

      receive_callback_(data, can_id);
    }
    catch (const drivers::socketcan::SocketCanTimeout &)
    {
      continue;
    }
    catch (const std::exception &e)
    {
      if (thread_running->load())
        RCLCPP_ERROR(rclcpp::get_logger("CanDevice"),
                     "receiveLoop error: %s", e.what());
      continue;
    }
  }
}

hardware_interface::CallbackReturn RRBotHardwareInterface::on_init(
  const hardware_interface::HardwareInfo & info)
{
  if (hardware_interface::SystemInterface::on_init(info) != CallbackReturn::SUCCESS)
  {
    return CallbackReturn::ERROR;
  }

  joint_count = info_.joints.size();
  state_positions_.resize(joint_count, std::numeric_limits<double>::quiet_NaN());
  state_velocities_.resize(joint_count, std::numeric_limits<double>::quiet_NaN());
  state_currents_.resize(joint_count, std::numeric_limits<double>::quiet_NaN());
  state_temperatures_.resize(joint_count, std::numeric_limits<double>::quiet_NaN());

  cmd_positions_.resize(joint_count, std::numeric_limits<double>::quiet_NaN());
  cmd_velocities_.resize(joint_count, std::numeric_limits<double>::quiet_NaN());

  can_device_count_ = std::stoi(info_.hardware_parameters.at("can_device_count"));

  RC_Config_t rc_config;
  rc = std::make_shared<RemoteController>(rc_config);

  for (const auto& joint : info_.joints)
  {
    Motor_Config_t config;
    config.motor_name = joint.name;

    for (const auto& [key, value] : joint.parameters)
    {
      if (key == "can_bus")
      {
        config.can_bus = value;
      }
      else if (key == "tx_id")
      {
        config.tx_id = std::stoi(value);
      }
      else if (key == "rx_id")
      {
        config.rx_id = std::stoi(value);
      }
      else if (key == "motor_type")
      {
        if (value == "M2006")
        {
          config.motor_type = M2006;
        }
        else if (value == "M3508")
        {
          config.motor_type = M3508;
        }
        else if (value == "GM6020")
        {
          config.motor_type = GM6020;
        }
        else if (value == "REMOTE_CONTROLLER")
        {
          is_remote_controller = true;
        }
        else if (value == "VIRTUAL_JOINT")
        {
          config.motor_type = VIRTUAL_JOINT;
        }
        else
        {
          RCLCPP_ERROR(rclcpp::get_logger("TideHardwareInterface"), "Unknown motor type: %s",
                       value.c_str());
        }
      }
      else if (key == "offset")
      {
        config.offset = std::stoi(value);
      }
    }
      auto motor = std::make_shared<DJI_Motor>(config);
      configureMotorCan(motor);
      motors_.push_back(motor);
  }
  for (size_t i = 0; i < can_device_count_; i++)
  {
    std::string can_device_name = "can" + std::to_string(i);
    const std::string bus_name = can_device_name;
    auto receive_callback = [this, bus_name](const std::array<unsigned char, 8>& data, drivers::socketcan::CanId can_id) {
    rclcpp::Time current_time = rclcpp::Clock(RCL_STEADY_TIME).now();
    
    for (auto& motor : motors_)
    {
        if (motor->config_.can_bus == bus_name && motor->config_.rx_id == can_id.identifier())
        {
            motor->status = MOTOR_OK;
            motor->rx_buff = data;
            motor->decode_feedback();
            motor->update_timestamp(current_time);
            break;
        }
    }
    if (rc->config_.can_bus == bus_name)
    {
      switch (can_id.identifier())
      {
        case CAN_ID_CHANNELS:  // 0x301
        {
          rc->channels_rx_buff = data;
          rc->decode_channels_feedback();
          rc->update_channels_timestamp(current_time);
          rc->measure.channels_valid = true;
          /*
          RCLCPP_INFO(
          rclcpp::get_logger("RemoteController"),
          "CH = [%d, %d, %d, %d]",
          rc->measure.ch1,
          rc->measure.ch2,
          rc->measure.ch3,
          rc->measure.ch4);
          */
          break;
        }
          
        case CAN_ID_SWITCHES:  // 0x302
        { 
          rc->switches_rx_buff = data;
          rc->decode_switches_feedback();
          rc->update_switches_timestamp(current_time);
          rc->measure.switches_valid = true;
          break;
        }

        case CAN_ID_WHEEL:     // 0x303
        {
          rc->wheel_rx_buff = data;
          rc->decode_wheel_feedback();
          rc->update_wheel_timestamp(current_time);
          rc->measure.wheel_valid = true;
          break;
        }
      }
      
      // 檢查遙控器連接狀態
      if (rc->check_connection(current_time))
      {
        rc->status = RC_OK;
      }
      else
      {
        rc->status = RC_LOST;
      }
    }
    
};

    can_devices_.push_back(std::make_shared<CanDevice>(can_device_name, receive_callback));
  }

  RCLCPP_INFO(rclcpp::get_logger("TideHardwareInterface"),
              "Successful loaded %ld motors and %ld can devices", joint_count, can_device_count_);
  // TODO(anyone): read parameters and initialize the hardware
  hw_states_.resize(info_.joints.size(), std::numeric_limits<double>::quiet_NaN());
  hw_commands_.resize(info_.joints.size(), std::numeric_limits<double>::quiet_NaN());
  // 创建节点用于发布
  node_ = std::make_shared<rclcpp::Node>("hardware_interface_publisher");
    
    // 初始化实时发布器
  auto robot_status_publisher = node_->create_publisher<auto_aim_interfaces::msg::RobotStatus>(
      "/robot_status", 10);
  auto joint_state_publisher = node_->create_publisher<sensor_msgs::msg::JointState>(
      "/joint_states", 10);
  rt_robot_status_pub_ = std::make_shared<realtime_tools::RealtimePublisher<auto_aim_interfaces::msg::RobotStatus>>(
      robot_status_publisher);
  rt_joint_state_pub_ = std::make_shared<realtime_tools::RealtimePublisher<sensor_msgs::msg::JointState>>(
      joint_state_publisher);
   
    
    // 初始化TF广播器
  tf_broadcaster_ = std::make_unique<tf2_ros::TransformBroadcaster>(*node_);
    
    // 查找关节索引
  findJointIndices();
  return CallbackReturn::SUCCESS;
}

void RRBotHardwareInterface::findJointIndices()
{
    for (size_t i = 0; i < info_.joints.size(); ++i) {
        if (info_.joints[i].name == "yaw_joint") {
            yaw_joint_index_ = i;
        } else if (info_.joints[i].name == "pitch_joint") {
            pitch_joint_index_ = i;
        }
    }
    
    RCLCPP_INFO(rclcpp::get_logger("RRBotHardwareInterface"),
                "Found joints - Yaw index: %d, Pitch index: %d", 
                yaw_joint_index_, pitch_joint_index_);
}

hardware_interface::CallbackReturn RRBotHardwareInterface::on_configure(
  const rclcpp_lifecycle::State & /*previous_state*/)
{
  std::fill(state_positions_.begin(), state_positions_.end(), 0.0);
  std::fill(state_velocities_.begin(), state_velocities_.end(), 0.0);
  std::fill(state_currents_.begin(), state_currents_.end(), 0.0);
  std::fill(state_temperatures_.begin(), state_temperatures_.end(), 0.0);
  std::fill(cmd_positions_.begin(), cmd_positions_.end(), 0.0);
  std::fill(cmd_velocities_.begin(), cmd_velocities_.end(), 0.0);
  return CallbackReturn::SUCCESS;
}

std::vector<hardware_interface::StateInterface> RRBotHardwareInterface::export_state_interfaces()
{
  std::vector<hardware_interface::StateInterface> interfaces;

  for (size_t i = 0; i < joint_count; i++)
  {
    for (const auto& state_interface : info_.joints[i].state_interfaces)
    {
      if (state_interface.name == "position")
      {
        interfaces.emplace_back(info_.joints[i].name, state_interface.name, &state_positions_[i]);
      }
      else if (state_interface.name == "velocity")
      {
        interfaces.emplace_back(info_.joints[i].name, state_interface.name, &state_velocities_[i]);
      }
      else if (state_interface.name == "effort")
      {
        interfaces.emplace_back(info_.joints[i].name, state_interface.name, &state_currents_[i]);
      }
      else if (rc_state_map_.count(state_interface.name)) 
      {
        interfaces.emplace_back(info_.joints[i].name, state_interface.name, rc_state_map_[state_interface.name]);
      }
    }
  }

  return interfaces;
}

std::vector<hardware_interface::CommandInterface> RRBotHardwareInterface::export_command_interfaces()
{
  std::vector<hardware_interface::CommandInterface> interfaces;

  for (size_t i = 0; i < joint_count; i++)
  {
    for (const auto& command_interface : info_.joints[i].command_interfaces)
    {
      if (command_interface.name == "position")
      {
        interfaces.emplace_back(info_.joints[i].name, command_interface.name, &cmd_positions_[i]);
      }
      else if (command_interface.name == "velocity")
      {
        interfaces.emplace_back(info_.joints[i].name, command_interface.name, &cmd_velocities_[i]);
      }
    }
  }
  return interfaces;
}
void RRBotHardwareInterface::configureMotorCan(std::shared_ptr<DJI_Motor> motor)
{
  switch (motor->config_.motor_type)
  {
    case M2006:
    case M3508:
      motor->config_.rx_id = 0x200 + motor->config_.tx_id;
      if (motor->config_.tx_id <= 4)
      {
        motor->config_.identifier = 0x200;
      }
      else
      {
        motor->config_.tx_id -= 4;
        motor->config_.identifier = 0x1ff;
      }
      break;
    case GM6020:
      motor->config_.rx_id = 0x204 + motor->config_.tx_id;
      if (motor->config_.tx_id <= 4)
      {
        motor->config_.identifier = 0x1ff;
      }
      else
      {
        motor->config_.tx_id -= 4;
        motor->config_.identifier = 0x2ff;
      }
      break;
    default:
      return;
  }
}

bool RRBotHardwareInterface::sendCanFrame(std::shared_ptr<CanDevice>  device, const uint8_t* data,
                                         size_t len, uint32_t id)
{
  try
  {
    drivers::socketcan::CanId send_id(id, 0, drivers::socketcan::FrameType::DATA, drivers::socketcan::StandardFrame);
    device->sender->send(data, len, send_id, std::chrono::milliseconds(1));
  }
  catch (const std::exception& e)
  {
    RCLCPP_ERROR(rclcpp::get_logger("MyHardwareInterface"), "Failed to send CAN frame: %s",
                 e.what());
    return false;
  }
  return true;
}

void RRBotHardwareInterface::stopMotors()
{
  for (auto& motor : motors_)
  {
    motor->stop();
  }
}



hardware_interface::CallbackReturn RRBotHardwareInterface::on_activate(
  const rclcpp_lifecycle::State & /*previous_state*/)
{
  // TODO(anyone): prepare the robot to receive commands
  hw_commands_ = hw_states_;
  joint_states_ = hw_states_; 
  
  RCLCPP_INFO(rclcpp::get_logger("RRBotHardwareInterface"), "Hardware interface activated");
  
  return CallbackReturn::SUCCESS;
}

hardware_interface::CallbackReturn RRBotHardwareInterface::on_deactivate(
  const rclcpp_lifecycle::State & /*previous_state*/)
{
  stopAllMotors();
  return CallbackReturn::SUCCESS;
}

void RRBotHardwareInterface::stopAllMotors()
{
  RCLCPP_INFO(rclcpp::get_logger("RRBotHardwareInterface"), "Stopping all motors...");
  
  // 清空所有緩衝區並設為0
  for (auto can_device : can_devices_)
  {
    for (size_t i = 0; i < 3; i++)
    {
      can_device->tx_buff[i].fill(0);  // 全部設為0，即停止指令
    }
  }

  // 發送停止指令到各個CAN ID
  for (auto can_device : can_devices_)
  {
    for (size_t i = 0; i < 3; i++)
    {
      // 改發到0x300(下位機地址)，其他保持原來的邏輯
      auto id = (i == 0) ? 0x300 : (i == 1) ? 0x1ff : 0x2ff;
      
      bool result = sendCanFrame(can_device, can_device->tx_buff[i].data(), 8, id);
      if (!result)
      {
      }
      else
      {
      }
    }
  }

  // 額外確保：重置所有電機輸出
  for (auto& motor : motors_)
  {
    motor->output = 0;
    motor->stop();  // 如果你的 DJI_Motor 類有 stop() 方法
  }
}


hardware_interface::return_type RRBotHardwareInterface::read(
  const rclcpp::Time & time, const rclcpp::Duration & period)
{

  static rclcpp::Clock steady_clock(RCL_STEADY_TIME);
  
  hw_states_ = joint_states_;
  auto current_time = steady_clock.now();

  size_t motor_count = std::min(motors_.size(), joint_count);
  
  for (size_t i = 0; i < motor_count; i++)
  {
    // 跳过没有state_interfaces的关节  
    if (info_.joints[i].state_interfaces.empty()) continue;

    auto& motor = motors_[i];
    if (enable_virtual_control_ || motor->config_.motor_type == VIRTUAL_JOINT)
    {
      if (!std::isnan(cmd_positions_[i]) && info_.joints[i].command_interfaces[0].name == "position")
      {
        state_positions_[i] = cmd_positions_[i];
      }
      else if (!std::isnan(cmd_velocities_[i]) && info_.joints[i].command_interfaces[0].name == "velocity")
      {
        state_positions_[i] += cmd_velocities_[i] * period.seconds();
        state_velocities_[i] = cmd_velocities_[i];
      }
    }
    else
    {
      motor->check_connection(current_time);
      state_positions_[i] = motor->angle_current;
      state_velocities_[i] = motor->measure.speed_aps;
      state_currents_[i] = motor->measure.real_current;
      state_temperatures_[i] = motor->measure.temperature; 
      if (motor->config_.motor_type == GM6020) {
        RCLCPP_INFO_THROTTLE(rclcpp::get_logger("RRBotHardwareInterface"), 
                            steady_clock, 1000,
                            "GM6020 Debug - Joint: %s, Raw Encoder: %d, Angle: %.3f, Speed: %.3f", 
                            info_.joints[i].name.c_str(),
                            motor->measure.ecd, 
                            motor->angle_current, 
                            motor->measure.speed_aps);
      }

    }
  }
  
  if (rc && rc->status == RC_OK) {
    rc_connected_ = 1.0;
    rc_ch1_ = static_cast<double>(rc->measure.ch1);
    rc_ch2_ = static_cast<double>(rc->measure.ch2);
    rc_ch3_ = static_cast<double>(rc->measure.ch3);
    rc_ch4_ = static_cast<double>(rc->measure.ch4);
    rc_sw1_ = static_cast<double>(rc->measure.sw1);
    rc_sw2_ = static_cast<double>(rc->measure.sw2);
    rc_wheel_ = static_cast<double>(rc->measure.wheel);
  } else {
    rc_connected_ = 0.0;
  }
    
  // 更新遥控器状态
  publishRobotStatus(time);
  publishJointStates(time);
  broadcastTransform(time);

  return hardware_interface::return_type::OK;
}

hardware_interface::return_type RRBotHardwareInterface::write(
  const rclcpp::Time & time, const rclcpp::Duration & /*period*/)
{
  if (need_calibration_)
  {
    for (const auto& motor : motors_)
    {
      if (!motor) continue;
      std::stringstream ss;
      ss << std::left << std::setw(15) << motor->config_.motor_name << "Encoder: " << std::setw(6)
         << motor->measure.ecd;
    }
    return hardware_interface::return_type::OK;
  }

  for (auto can_device : can_devices_)
  {
    for (size_t i = 0; i < 3; i++)
    {
      can_device->tx_buff[i].fill(0);
    }
  }


  size_t motor_count = std::min(motors_.size(), joint_count);
  double gimbal_yaw_cmd = 0.0;
  double gimbal_pitch_cmd = 0.0;
  for (size_t i = 0; i < motor_count; i++)
  {
    if (info_.joints[i].command_interfaces.empty()) continue;
    
    double command = 0.0;
    if (!std::isnan(cmd_positions_[i]) && info_.joints[i].command_interfaces[0].name == "position")
    {
      command = (cmd_positions_[i]);
    }
    else if (!std::isnan(cmd_velocities_[i]) && info_.joints[i].command_interfaces[0].name == "velocity")
    {
      command = cmd_velocities_[i];  
    }

    auto motor = motors_[i];
    motor->output = static_cast<int16_t>(std::clamp(command, -30000.0, 30000.0));

    // **新增：提前提取雲台角度指令（不依賴motor連接狀態）**
    if (is_open_loop_gimbal_) 
    {
      if (motor->config_.motor_name == "yaw_joint") {
        gimbal_yaw_cmd = command;
      } else if (motor->config_.motor_name == "pitch_joint") {
        gimbal_pitch_cmd = command;
      }
    }

    auto current_time = time;
    if (motor->check_connection(current_time))
    {
      for (auto can_device : can_devices_)
      {
        if ((motor->config_.can_bus == can_device->interface) &&
            motor->config_.motor_type != VIRTUAL_JOINT)
        {
          if (is_open_loop_gimbal_ && 
          (motor->config_.motor_name == "yaw_joint" || 
            motor->config_.motor_name == "pitch_joint")) {
        
          // 提取角度
          if (motor->config_.motor_name == "yaw_joint") 
          {
            gimbal_yaw_cmd = command;
          } 
          else if (motor->config_.motor_name == "pitch_joint")
          {
            gimbal_pitch_cmd = command;
          }
            
          break;  // 跳過，不填充buffer
        }
          size_t buff_index = (motor->config_.identifier == 0x200) ? 0 :
                              (motor->config_.identifier == 0x1ff) ? 1 : 2;
          size_t data_index = (motor->config_.tx_id - 1) * 2;

          can_device->tx_buff[buff_index][data_index] = motor->output >> 8;
          can_device->tx_buff[buff_index][data_index + 1] = motor->output & 0xff;
          break;
        }
      }
    }
    
  }

  for (auto can_device : can_devices_)
  {
    for (size_t i = 0; i < 3; i++)
    {
      auto id = (i == 0) ? 0x300 : (i == 1) ? 0x1ff : 0x2ff;
      bool result = sendCanFrame(can_device, can_device->tx_buff[i].data(), 8, id);
      if (!result)
      {
        can_device->tx_buff[i].fill(0);
      }
    }
  }
  if (is_open_loop_gimbal_ && !can_devices_.empty()) {
    sendGimbalAngleCommandToABoard(gimbal_yaw_cmd, gimbal_pitch_cmd);
    static rclcpp::Clock steady_clock(RCL_STEADY_TIME);
    RCLCPP_INFO_THROTTLE(rclcpp::get_logger("RRBotHardwareInterface"),
                        steady_clock, 1000,
                        "Sending 0x305: yaw=%.3f, pitch=%.3f", 
                        gimbal_yaw_cmd, gimbal_pitch_cmd);
  }
  return hardware_interface::return_type::OK;
}

void RRBotHardwareInterface::publishRobotStatus(const rclcpp::Time& time)
{
    if (rt_robot_status_pub_->trylock()) {
        rt_robot_status_pub_->msg_.header.stamp = time;
        rt_robot_status_pub_->msg_.header.frame_id = "gimbal_link";
        
        // 填充yaw数据
        if (yaw_joint_index_ >= 0) {
            rt_robot_status_pub_->msg_.yaw = state_positions_[yaw_joint_index_];
            rt_robot_status_pub_->msg_.yaw_velocity = state_velocities_[yaw_joint_index_];
            rt_robot_status_pub_->msg_.yaw_current = state_currents_[yaw_joint_index_];
        }
        
        // 填充pitch数据
        if (pitch_joint_index_ >= 0) {
            rt_robot_status_pub_->msg_.pitch = state_positions_[pitch_joint_index_];
            rt_robot_status_pub_->msg_.pitch_velocity = state_velocities_[pitch_joint_index_];
            rt_robot_status_pub_->msg_.pitch_current = state_currents_[pitch_joint_index_];
        }
        
        rt_robot_status_pub_->unlockAndPublish();
    }
}

void RRBotHardwareInterface::sendGimbalAngleCommandToABoard(double yaw_angle, double pitch_angle)
{
  std::array<uint8_t, 8> data = {0};
  
  // 角度*100轉為定點數
  int16_t yaw_scaled = static_cast<int16_t>(yaw_angle * 180.0 / M_PI * 100.0);
  int16_t pitch_scaled = static_cast<int16_t>(pitch_angle * 180.0 / M_PI * 100.0);
  
  // 打包數據：YAW(0-1), PITCH(2-3)
  data[0] = static_cast<uint8_t>(yaw_scaled >> 8);
  data[1] = static_cast<uint8_t>(yaw_scaled & 0xFF);
  data[2] = static_cast<uint8_t>(pitch_scaled >> 8);
  data[3] = static_cast<uint8_t>(pitch_scaled & 0xFF);
  
  
  // 發送0x305
  sendCanFrame(can_devices_[0], data.data(), 8, 0x305);

}


void RRBotHardwareInterface::publishJointStates(const rclcpp::Time& time)
{
    if (rt_joint_state_pub_->trylock()) {
        rt_joint_state_pub_->msg_.header.stamp = time;
        rt_joint_state_pub_->msg_.name.clear();
        rt_joint_state_pub_->msg_.position.clear();
        rt_joint_state_pub_->msg_.velocity.clear();
        rt_joint_state_pub_->msg_.effort.clear();
        
        // 添加所有关节数据
        for (size_t i = 0; i < joint_count; ++i) {
            rt_joint_state_pub_->msg_.name.push_back(info_.joints[i].name);
            rt_joint_state_pub_->msg_.position.push_back(state_positions_[i]);
            rt_joint_state_pub_->msg_.velocity.push_back(state_velocities_[i]);
            rt_joint_state_pub_->msg_.effort.push_back(state_currents_[i]);
        }
        
        rt_joint_state_pub_->unlockAndPublish();
    }
}

void RRBotHardwareInterface::broadcastTransform(const rclcpp::Time& time)
{
    geometry_msgs::msg::TransformStamped transform;
    transform.header.stamp = time;
    transform.header.frame_id = "odom";
    transform.child_frame_id = "gimbal_link";
    
    //改为使用原版的简单角度计算，而不是state_positions_
    double yaw = 0.0, pitch = 0.0;
    
    // 找到yaw和pitch电机，直接从原始编码器数据计算
    for (const auto& motor : motors_) {
        if (motor->config_.motor_name == "yaw_joint") {
            //使用原版的简单转换，不经过复杂处理
            double angle_raw = static_cast<double>(motor->measure.ecd);
            yaw = (angle_raw / 8191.0) * 2.0 * M_PI;
        } else if (motor->config_.motor_name == "pitch_joint") {
            double angle_raw = static_cast<double>(motor->measure.ecd);
            pitch = (angle_raw / 8191.0) * 2.0 * M_PI;
        }
    }
    
    //保持原版的TF计算
    tf2::Quaternion q;
    q.setRPY(0, -pitch - M_PI/2, yaw);
    transform.transform.rotation.x = q.x();
    transform.transform.rotation.y = q.y();
    transform.transform.rotation.z = q.z();
    transform.transform.rotation.w = q.w();
    
    // 设置平移
    transform.transform.translation.x = 0.0;
    transform.transform.translation.y = 0.0;
    transform.transform.translation.z = 0.0;
    
    tf_broadcaster_->sendTransform(transform);
}


}  // namespace my_hardware_interface

#include "pluginlib/class_list_macros.hpp"

PLUGINLIB_EXPORT_CLASS(
  my_hardware_interface::RRBotHardwareInterface, hardware_interface::SystemInterface)
