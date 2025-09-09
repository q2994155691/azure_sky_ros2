#ifndef MY_HARDWARE_INTERFACE__RRBOT_HARDWARE_INTERFACE_HPP_
#define MY_HARDWARE_INTERFACE__RRBOT_HARDWARE_INTERFACE_HPP_

#include <memory>
#include <string>
#include <vector>
#include <thread>
#include <atomic>
#include <map>
#include <mutex>

#include "hardware_interface/handle.hpp"
#include "hardware_interface/hardware_info.hpp"
#include "hardware_interface/system_interface.hpp"
#include "hardware_interface/types/hardware_interface_return_values.hpp"
#include "rclcpp/rclcpp.hpp"
#include "rclcpp_lifecycle/node_interfaces/lifecycle_node_interface.hpp"
#include "rclcpp_lifecycle/state.hpp"
#include "tide_motor.hpp"
#include "my_hardware_interface/remote_controller.hpp"

#include "ros2_socketcan/socket_can_common.hpp" 
#include "ros2_socketcan/socket_can_sender.hpp"
#include "ros2_socketcan/socket_can_receiver.hpp"
#include "ros2_socketcan/socket_can_id.hpp"

namespace my_hardware_interface
{

class CanDevice
{
public:
  using ReceiveCallback =
      std::function<void(const std::array<uint8_t,8>&,
                         drivers::socketcan::CanId)>;

  CanDevice(const std::string& iface, ReceiveCallback cb);
  ~CanDevice();

  std::string interface;
  std::shared_ptr<drivers::socketcan::SocketCanSender>   sender;
  std::shared_ptr<drivers::socketcan::SocketCanReceiver> receiver;
  std::shared_ptr<std::thread>        receiver_thread;
  std::shared_ptr<std::atomic<bool>>  thread_running;
  std::array<std::array<uint8_t,8>,3> tx_buff{};

private:
ReceiveCallback receive_callback_;
  void            receiveLoop();
};



class RRBotHardwareInterface : public hardware_interface::SystemInterface
{
public:
  RCLCPP_SHARED_PTR_DEFINITIONS(RRBotHardwareInterface)

  hardware_interface::CallbackReturn on_init(
    const hardware_interface::HardwareInfo & info) override;

  hardware_interface::CallbackReturn on_configure(
    const rclcpp_lifecycle::State & previous_state) override;

  std::vector<hardware_interface::StateInterface> export_state_interfaces() override;

  std::vector<hardware_interface::CommandInterface> export_command_interfaces() override;

  hardware_interface::CallbackReturn on_activate(
    const rclcpp_lifecycle::State & previous_state) override;

  hardware_interface::CallbackReturn on_deactivate(
    const rclcpp_lifecycle::State & previous_state) override;

  hardware_interface::return_type read(
    const rclcpp::Time & time, const rclcpp::Duration & period) override;

  hardware_interface::return_type write(
    const rclcpp::Time & time, const rclcpp::Duration & period) override;


private:
  std::vector<double> hw_states_;
  std::vector<double> hw_commands_;
  std::vector<double> joint_states_;
  std::vector<double> cmd_positions_;
  std::vector<double> cmd_velocities_;
  std::vector<double> state_positions_;
  std::vector<double> state_velocities_;
  std::vector<double> state_currents_;
  std::vector<double> state_temperatures_;

  mutable std::mutex device_mutex_;
  bool need_calibration_{ false };
  bool enable_virtual_control_{ false };
  bool is_remote_controller{ true };

  bool sendCanFrame(std::shared_ptr<CanDevice> device, const uint8_t* data, size_t len, uint32_t id);
  void configureMotorCan(std::shared_ptr<DJI_Motor> motor);
  void stopMotors();
  void stopAllMotors();

  double rc_ch1_ = 0.0;
  double rc_ch2_ = 0.0;
  double rc_ch3_ = 0.0;
  double rc_ch4_ = 0.0;
  double rc_sw1_ = 0.0;
  double rc_sw2_ = 0.0;
  double rc_wheel_ = 0.0;
  double rc_connected_ = 0.0;  // 0=斷開, 1=連接

  // 狀態映射
  std::map<std::string, double*> rc_state_map_ = {
    {"ch1", &rc_ch1_}, {"ch2", &rc_ch2_}, {"ch3", &rc_ch3_}, {"ch4", &rc_ch4_},
    {"sw1", &rc_sw1_}, {"sw2", &rc_sw2_}, {"wheel", &rc_wheel_}, {"connected", &rc_connected_}
  };

  std::shared_ptr<RemoteController> rc;
  std::unique_ptr<CanDevice> can_dev_;
  std::vector<std::shared_ptr<CanDevice>> can_devices_;
  std::vector<std::shared_ptr<DJI_Motor>> motors_;
  size_t joint_count{ 0 };
  size_t can_device_count_{ 0 };
};

}  // namespace my_hardware_interface

#endif  // MY_HARDWARE_INTERFACE__RRBOT_HARDWARE_INTERFACE_HPP_
