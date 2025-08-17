// auto-generated DO NOT EDIT

#pragma once

#include <algorithm>
#include <array>
#include <functional>
#include <limits>
#include <mutex>
#include <rclcpp/node.hpp>
#include <rclcpp_lifecycle/lifecycle_node.hpp>
#include <rclcpp/logger.hpp>
#include <set>
#include <sstream>
#include <string>
#include <type_traits>
#include <utility>
#include <vector>

#include <fmt/core.h>
#include <fmt/format.h>
#include <fmt/ranges.h>

#include <parameter_traits/parameter_traits.hpp>

#include <rsl/static_string.hpp>
#include <rsl/static_vector.hpp>
#include <rsl/parameter_validators.hpp>



namespace tide_gimbal_controller {

// Use validators from RSL
using rsl::unique;
using rsl::subset_of;
using rsl::fixed_size;
using rsl::size_gt;
using rsl::size_lt;
using rsl::not_empty;
using rsl::element_bounds;
using rsl::lower_element_bounds;
using rsl::upper_element_bounds;
using rsl::bounds;
using rsl::lt;
using rsl::gt;
using rsl::lt_eq;
using rsl::gt_eq;
using rsl::one_of;
using rsl::to_parameter_result_msg;

// temporarily needed for backwards compatibility for custom validators
using namespace parameter_traits;

template <typename T>
[[nodiscard]] auto to_parameter_value(T value) {
    return rclcpp::ParameterValue(value);
}

template <size_t capacity>
[[nodiscard]] auto to_parameter_value(rsl::StaticString<capacity> const& value) {
    return rclcpp::ParameterValue(rsl::to_string(value));
}

template <typename T, size_t capacity>
[[nodiscard]] auto to_parameter_value(rsl::StaticVector<T, capacity> const& value) {
    return rclcpp::ParameterValue(rsl::to_vector(value));
}
    struct Params {
        bool open_loop = false;
        bool use_external_state_interface = false;
        std::vector<std::string> tracker_topic = {};
        std::string shooter_cmd_topic = "";
        struct Pitch {
            std::string joint = "";
            double max = 0.0;
            double min = 0.0;
            double scan_add = 0.001;
            std::vector<double> scan_range = {0.0, 0.0};
            bool reverse = false;
            struct Pid {
                double p = 0.0;
                double i = 0.0;
                double d = 0.0;
                double i_clamp_max = 0.0;
                double i_clamp_min = 0.0;
                bool antiwindup = false;
            } pid;
        } pitch;
        struct Yaw {
            std::string joint = "";
            double max = 0.0;
            double min = 0.0;
            double scan_add = 0.005;
            std::vector<double> scan_range = {0.0, 0.0};
            bool reverse = false;
            struct Pid {
                double p = 0.0;
                double i = 0.0;
                double d = 0.0;
                double i_clamp_max = 0.0;
                double i_clamp_min = 0.0;
                bool antiwindup = false;
            } pid;
        } yaw;
        struct BulletSolver {
            double g = 9.81;
            double resistance_coff = 0.0;
            std::vector<double> cam_offset = {0.0, 0.0, 0.0};
            double time_delay = 0.0;
        } bullet_solver;
        // for detecting if the parameter struct has been updated
        rclcpp::Time __stamp;
    };
    struct StackParams {
        bool open_loop = false;
        bool use_external_state_interface = false;
        struct Pitch {
            double max = 0.0;
            double min = 0.0;
            double scan_add = 0.001;
            bool reverse = false;
            struct Pid {
                double p = 0.0;
                double i = 0.0;
                double d = 0.0;
                double i_clamp_max = 0.0;
                double i_clamp_min = 0.0;
                bool antiwindup = false;
            } pid;
        } pitch;
        struct Yaw {
            double max = 0.0;
            double min = 0.0;
            double scan_add = 0.005;
            bool reverse = false;
            struct Pid {
                double p = 0.0;
                double i = 0.0;
                double d = 0.0;
                double i_clamp_max = 0.0;
                double i_clamp_min = 0.0;
                bool antiwindup = false;
            } pid;
        } yaw;
        struct BulletSolver {
            double g = 9.81;
            double resistance_coff = 0.0;
            double time_delay = 0.0;
        } bullet_solver;
    };

  class ParamListener{
  public:
    // throws rclcpp::exceptions::InvalidParameterValueException on initialization if invalid parameter are loaded
    ParamListener(rclcpp::Node::SharedPtr node, std::string const& prefix = "")
    : ParamListener(node->get_node_parameters_interface(), node->get_logger(), prefix) {}

    ParamListener(rclcpp_lifecycle::LifecycleNode::SharedPtr node, std::string const& prefix = "")
    : ParamListener(node->get_node_parameters_interface(), node->get_logger(), prefix) {}

    ParamListener(const std::shared_ptr<rclcpp::node_interfaces::NodeParametersInterface>& parameters_interface,
                  std::string const& prefix = "")
    : ParamListener(parameters_interface, rclcpp::get_logger("tide_gimbal_controller"), prefix) {
      RCLCPP_DEBUG(logger_, "ParameterListener: Not using node logger, recommend using other constructors to use a node logger");
    }

    ParamListener(const std::shared_ptr<rclcpp::node_interfaces::NodeParametersInterface>& parameters_interface,
                  rclcpp::Logger logger, std::string const& prefix = "")
    : prefix_{prefix},
      logger_{std::move(logger)} {
      if (!prefix_.empty() && prefix_.back() != '.') {
        prefix_ += ".";
      }

      parameters_interface_ = parameters_interface;
      declare_params();
      auto update_param_cb = [this](const std::vector<rclcpp::Parameter> &parameters){return this->update(parameters);};
      handle_ = parameters_interface_->add_on_set_parameters_callback(update_param_cb);
      clock_ = rclcpp::Clock();
    }

    Params get_params() const{
      std::lock_guard<std::mutex> lock(mutex_);
      return params_;
    }

    /**
     * @brief Tries to update the parsed Params object
     * @param params_in The Params object to update
     * @return true if the Params object was updated, false if it was already up to date or the mutex could not be locked
     * @note This function tries to lock the mutex without blocking, so it can be used in a RT loop
     */
    bool try_update_params(Params & params_in) const {
      std::unique_lock<std::mutex> lock(mutex_, std::try_to_lock);
      if (lock.owns_lock()) {
        if (const bool is_old = params_in.__stamp != params_.__stamp; is_old) {
          params_in = params_;
          return true;
        }
      }
      return false;
    }

    /**
     * @brief Tries to get the current Params object
     * @param params_in The Params object to fill with the current parameters
     * @return true if mutex can be locked, false if mutex could not be locked
     * @note The parameters are only filled, when the mutex can be locked and the params timestamp is different
     * @note This function tries to lock the mutex without blocking, so it can be used in a RT loop
     */
    bool try_get_params(Params & params_in) const {
      if (mutex_.try_lock()) {
        if (const bool is_old = params_in.__stamp != params_.__stamp; is_old) {
          params_in = params_;
        }
        mutex_.unlock();
        return true;
      }
      return false;
    }

    bool is_old(Params const& other) const {
      std::lock_guard<std::mutex> lock(mutex_);
      return params_.__stamp != other.__stamp;
    }

    StackParams get_stack_params() {
      Params params = get_params();
      StackParams output;
      output.open_loop = params.open_loop;
      output.use_external_state_interface = params.use_external_state_interface;
      output.pitch.max = params.pitch.max;
      output.pitch.min = params.pitch.min;
      output.pitch.scan_add = params.pitch.scan_add;
      output.pitch.reverse = params.pitch.reverse;
      output.pitch.pid.p = params.pitch.pid.p;
      output.pitch.pid.i = params.pitch.pid.i;
      output.pitch.pid.d = params.pitch.pid.d;
      output.pitch.pid.i_clamp_max = params.pitch.pid.i_clamp_max;
      output.pitch.pid.i_clamp_min = params.pitch.pid.i_clamp_min;
      output.pitch.pid.antiwindup = params.pitch.pid.antiwindup;
      output.yaw.max = params.yaw.max;
      output.yaw.min = params.yaw.min;
      output.yaw.scan_add = params.yaw.scan_add;
      output.yaw.reverse = params.yaw.reverse;
      output.yaw.pid.p = params.yaw.pid.p;
      output.yaw.pid.i = params.yaw.pid.i;
      output.yaw.pid.d = params.yaw.pid.d;
      output.yaw.pid.i_clamp_max = params.yaw.pid.i_clamp_max;
      output.yaw.pid.i_clamp_min = params.yaw.pid.i_clamp_min;
      output.yaw.pid.antiwindup = params.yaw.pid.antiwindup;
      output.bullet_solver.g = params.bullet_solver.g;
      output.bullet_solver.resistance_coff = params.bullet_solver.resistance_coff;
      output.bullet_solver.time_delay = params.bullet_solver.time_delay;

      return output;
    }

    void refresh_dynamic_parameters() {
      auto updated_params = get_params();
      // TODO remove any destroyed dynamic parameters

      // declare any new dynamic parameters
      rclcpp::Parameter param;

    }

    rcl_interfaces::msg::SetParametersResult update(const std::vector<rclcpp::Parameter> &parameters) {
      auto updated_params = get_params();

      for (const auto &param: parameters) {
        if (param.get_name() == (prefix_ + "open_loop")) {
            updated_params.open_loop = param.as_bool();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "use_external_state_interface")) {
            updated_params.use_external_state_interface = param.as_bool();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "pitch.joint")) {
            if(auto validation_result = not_empty<std::string>(param);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.pitch.joint = param.as_string();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "pitch.max")) {
            updated_params.pitch.max = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "pitch.min")) {
            updated_params.pitch.min = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "pitch.scan_add")) {
            updated_params.pitch.scan_add = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "pitch.scan_range")) {
            updated_params.pitch.scan_range = param.as_double_array();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "pitch.reverse")) {
            updated_params.pitch.reverse = param.as_bool();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "pitch.pid.p")) {
            updated_params.pitch.pid.p = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "pitch.pid.i")) {
            updated_params.pitch.pid.i = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "pitch.pid.d")) {
            updated_params.pitch.pid.d = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "pitch.pid.i_clamp_max")) {
            updated_params.pitch.pid.i_clamp_max = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "pitch.pid.i_clamp_min")) {
            updated_params.pitch.pid.i_clamp_min = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "pitch.pid.antiwindup")) {
            updated_params.pitch.pid.antiwindup = param.as_bool();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "yaw.joint")) {
            if(auto validation_result = not_empty<std::string>(param);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.yaw.joint = param.as_string();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "yaw.max")) {
            updated_params.yaw.max = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "yaw.min")) {
            updated_params.yaw.min = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "yaw.scan_add")) {
            updated_params.yaw.scan_add = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "yaw.scan_range")) {
            updated_params.yaw.scan_range = param.as_double_array();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "yaw.reverse")) {
            updated_params.yaw.reverse = param.as_bool();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "yaw.pid.p")) {
            updated_params.yaw.pid.p = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "yaw.pid.i")) {
            updated_params.yaw.pid.i = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "yaw.pid.d")) {
            updated_params.yaw.pid.d = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "yaw.pid.i_clamp_max")) {
            updated_params.yaw.pid.i_clamp_max = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "yaw.pid.i_clamp_min")) {
            updated_params.yaw.pid.i_clamp_min = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "yaw.pid.antiwindup")) {
            updated_params.yaw.pid.antiwindup = param.as_bool();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "bullet_solver.g")) {
            updated_params.bullet_solver.g = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "bullet_solver.resistance_coff")) {
            updated_params.bullet_solver.resistance_coff = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "bullet_solver.cam_offset")) {
            updated_params.bullet_solver.cam_offset = param.as_double_array();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "bullet_solver.time_delay")) {
            updated_params.bullet_solver.time_delay = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "tracker_topic")) {
            updated_params.tracker_topic = param.as_string_array();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "shooter_cmd_topic")) {
            updated_params.shooter_cmd_topic = param.as_string();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
      }

      updated_params.__stamp = clock_.now();
      update_internal_params(updated_params);
      if (user_callback_) {
         user_callback_(updated_params);
      }
      return rsl::to_parameter_result_msg({});
    }

    void declare_params(){
      auto updated_params = get_params();
      // declare all parameters and give default values to non-required ones
      if (!parameters_interface_->has_parameter(prefix_ + "open_loop")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Open loop control";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.open_loop);
          parameters_interface_->declare_parameter(prefix_ + "open_loop", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "use_external_state_interface")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Use external state interface";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.use_external_state_interface);
          parameters_interface_->declare_parameter(prefix_ + "use_external_state_interface", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "pitch.joint")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Joint names of the pitch joints";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.pitch.joint);
          parameters_interface_->declare_parameter(prefix_ + "pitch.joint", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "pitch.max")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Maximum pitch angle";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.pitch.max);
          parameters_interface_->declare_parameter(prefix_ + "pitch.max", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "pitch.min")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Minimum pitch angle";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.pitch.min);
          parameters_interface_->declare_parameter(prefix_ + "pitch.min", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "pitch.scan_add")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "For sentry scan mode";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.pitch.scan_add);
          parameters_interface_->declare_parameter(prefix_ + "pitch.scan_add", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "pitch.scan_range")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "For sentry scan mode";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.pitch.scan_range);
          parameters_interface_->declare_parameter(prefix_ + "pitch.scan_range", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "pitch.reverse")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Reverse direction of the pitch motor";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.pitch.reverse);
          parameters_interface_->declare_parameter(prefix_ + "pitch.reverse", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "pitch.pid.p")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Proportional gain";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.pitch.pid.p);
          parameters_interface_->declare_parameter(prefix_ + "pitch.pid.p", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "pitch.pid.i")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Integral gain";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.pitch.pid.i);
          parameters_interface_->declare_parameter(prefix_ + "pitch.pid.i", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "pitch.pid.d")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Derivative gain";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.pitch.pid.d);
          parameters_interface_->declare_parameter(prefix_ + "pitch.pid.d", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "pitch.pid.i_clamp_max")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Upper integral clamp.";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.pitch.pid.i_clamp_max);
          parameters_interface_->declare_parameter(prefix_ + "pitch.pid.i_clamp_max", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "pitch.pid.i_clamp_min")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Lower integral clamp.";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.pitch.pid.i_clamp_min);
          parameters_interface_->declare_parameter(prefix_ + "pitch.pid.i_clamp_min", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "pitch.pid.antiwindup")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Antiwindup functionality. When set to true, limits the integral error to prevent windup; otherwise, constrains the integral contribution to the control output. i_clamp_max and i_clamp_min are applied in both scenarios.";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.pitch.pid.antiwindup);
          parameters_interface_->declare_parameter(prefix_ + "pitch.pid.antiwindup", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "yaw.joint")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Joint names of the yaw joints";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.yaw.joint);
          parameters_interface_->declare_parameter(prefix_ + "yaw.joint", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "yaw.max")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Maximum yaw angle";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.yaw.max);
          parameters_interface_->declare_parameter(prefix_ + "yaw.max", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "yaw.min")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Minimum yaw angle";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.yaw.min);
          parameters_interface_->declare_parameter(prefix_ + "yaw.min", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "yaw.scan_add")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "For sentry scan mode";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.yaw.scan_add);
          parameters_interface_->declare_parameter(prefix_ + "yaw.scan_add", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "yaw.scan_range")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "For sentry scan mode";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.yaw.scan_range);
          parameters_interface_->declare_parameter(prefix_ + "yaw.scan_range", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "yaw.reverse")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Reverse direction of the yaw motor";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.yaw.reverse);
          parameters_interface_->declare_parameter(prefix_ + "yaw.reverse", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "yaw.pid.p")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Proportional gain";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.yaw.pid.p);
          parameters_interface_->declare_parameter(prefix_ + "yaw.pid.p", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "yaw.pid.i")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Integral gain";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.yaw.pid.i);
          parameters_interface_->declare_parameter(prefix_ + "yaw.pid.i", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "yaw.pid.d")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Derivative gain";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.yaw.pid.d);
          parameters_interface_->declare_parameter(prefix_ + "yaw.pid.d", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "yaw.pid.i_clamp_max")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Upper integral clamp.";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.yaw.pid.i_clamp_max);
          parameters_interface_->declare_parameter(prefix_ + "yaw.pid.i_clamp_max", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "yaw.pid.i_clamp_min")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Lower integral clamp.";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.yaw.pid.i_clamp_min);
          parameters_interface_->declare_parameter(prefix_ + "yaw.pid.i_clamp_min", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "yaw.pid.antiwindup")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Antiwindup functionality. When set to true, limits the integral error to prevent windup; otherwise, constrains the integral contribution to the control output. i_clamp_max and i_clamp_min are applied in both scenarios.";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.yaw.pid.antiwindup);
          parameters_interface_->declare_parameter(prefix_ + "yaw.pid.antiwindup", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "bullet_solver.g")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Gravity";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.bullet_solver.g);
          parameters_interface_->declare_parameter(prefix_ + "bullet_solver.g", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "bullet_solver.resistance_coff")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Resistance coefficient";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.bullet_solver.resistance_coff);
          parameters_interface_->declare_parameter(prefix_ + "bullet_solver.resistance_coff", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "bullet_solver.cam_offset")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Camera height";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.bullet_solver.cam_offset);
          parameters_interface_->declare_parameter(prefix_ + "bullet_solver.cam_offset", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "bullet_solver.time_delay")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Time delay";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.bullet_solver.time_delay);
          parameters_interface_->declare_parameter(prefix_ + "bullet_solver.time_delay", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "tracker_topic")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Topic name for the tracker";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.tracker_topic);
          parameters_interface_->declare_parameter(prefix_ + "tracker_topic", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "shooter_cmd_topic")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Topic name for the shooter cmd";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.shooter_cmd_topic);
          parameters_interface_->declare_parameter(prefix_ + "shooter_cmd_topic", parameter, descriptor);
      }
      // get parameters and fill struct fields
      rclcpp::Parameter param;
      param = parameters_interface_->get_parameter(prefix_ + "open_loop");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.open_loop = param.as_bool();
      param = parameters_interface_->get_parameter(prefix_ + "use_external_state_interface");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.use_external_state_interface = param.as_bool();
      param = parameters_interface_->get_parameter(prefix_ + "pitch.joint");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      if(auto validation_result = not_empty<std::string>(param);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'pitch.joint': {}", validation_result.error()));
      }
      updated_params.pitch.joint = param.as_string();
      param = parameters_interface_->get_parameter(prefix_ + "pitch.max");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.pitch.max = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "pitch.min");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.pitch.min = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "pitch.scan_add");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.pitch.scan_add = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "pitch.scan_range");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.pitch.scan_range = param.as_double_array();
      param = parameters_interface_->get_parameter(prefix_ + "pitch.reverse");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.pitch.reverse = param.as_bool();
      param = parameters_interface_->get_parameter(prefix_ + "pitch.pid.p");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.pitch.pid.p = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "pitch.pid.i");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.pitch.pid.i = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "pitch.pid.d");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.pitch.pid.d = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "pitch.pid.i_clamp_max");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.pitch.pid.i_clamp_max = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "pitch.pid.i_clamp_min");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.pitch.pid.i_clamp_min = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "pitch.pid.antiwindup");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.pitch.pid.antiwindup = param.as_bool();
      param = parameters_interface_->get_parameter(prefix_ + "yaw.joint");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      if(auto validation_result = not_empty<std::string>(param);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'yaw.joint': {}", validation_result.error()));
      }
      updated_params.yaw.joint = param.as_string();
      param = parameters_interface_->get_parameter(prefix_ + "yaw.max");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.yaw.max = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "yaw.min");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.yaw.min = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "yaw.scan_add");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.yaw.scan_add = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "yaw.scan_range");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.yaw.scan_range = param.as_double_array();
      param = parameters_interface_->get_parameter(prefix_ + "yaw.reverse");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.yaw.reverse = param.as_bool();
      param = parameters_interface_->get_parameter(prefix_ + "yaw.pid.p");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.yaw.pid.p = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "yaw.pid.i");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.yaw.pid.i = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "yaw.pid.d");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.yaw.pid.d = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "yaw.pid.i_clamp_max");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.yaw.pid.i_clamp_max = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "yaw.pid.i_clamp_min");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.yaw.pid.i_clamp_min = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "yaw.pid.antiwindup");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.yaw.pid.antiwindup = param.as_bool();
      param = parameters_interface_->get_parameter(prefix_ + "bullet_solver.g");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.bullet_solver.g = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "bullet_solver.resistance_coff");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.bullet_solver.resistance_coff = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "bullet_solver.cam_offset");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.bullet_solver.cam_offset = param.as_double_array();
      param = parameters_interface_->get_parameter(prefix_ + "bullet_solver.time_delay");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.bullet_solver.time_delay = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "tracker_topic");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.tracker_topic = param.as_string_array();
      param = parameters_interface_->get_parameter(prefix_ + "shooter_cmd_topic");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.shooter_cmd_topic = param.as_string();


      updated_params.__stamp = clock_.now();
      update_internal_params(updated_params);
    }

    using userParameterUpdateCB = std::function<void(const Params&)>;
    void setUserCallback(const userParameterUpdateCB& callback){
      user_callback_ = callback;
    }

    void clearUserCallback(){
      user_callback_ = {};
    }

    private:
      void update_internal_params(Params updated_params) {
        std::lock_guard<std::mutex> lock(mutex_);
        params_ = std::move(updated_params);
      }

      std::string prefix_;
      Params params_;
      rclcpp::Clock clock_;
      std::shared_ptr<rclcpp::node_interfaces::OnSetParametersCallbackHandle> handle_;
      std::shared_ptr<rclcpp::node_interfaces::NodeParametersInterface> parameters_interface_;
      userParameterUpdateCB user_callback_;

      rclcpp::Logger logger_;
      std::mutex mutable mutex_;
  };

} // namespace tide_gimbal_controller
