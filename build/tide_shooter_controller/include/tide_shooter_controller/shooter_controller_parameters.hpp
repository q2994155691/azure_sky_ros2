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



namespace tide_shooter_controller {

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
        bool open_loop = true;
        std::string referee_shooter_type = "";
        struct FrictionWheels {
            std::vector<std::string> joint = {};
            std::vector<std::string> reverse = {};
            struct Pid {
                double p = 0.0;
                double i = 0.0;
                double d = 0.0;
                bool antiwindup = false;
                double i_clamp_max = 0.0;
                double i_clamp_min = 0.0;
            } pid;
        } friction_wheels;
        struct Loader {
            std::string joint = "";
            bool reverse = false;
            struct Pid {
                double p = 0.0;
                double i = 0.0;
                double d = 0.0;
                bool antiwindup = false;
                double i_clamp_max = 0.0;
                double i_clamp_min = 0.0;
            } pid;
        } loader;
        // for detecting if the parameter struct has been updated
        rclcpp::Time __stamp;
    };
    struct StackParams {
        bool open_loop = true;
        struct FrictionWheels {
            struct Pid {
                double p = 0.0;
                double i = 0.0;
                double d = 0.0;
                bool antiwindup = false;
                double i_clamp_max = 0.0;
                double i_clamp_min = 0.0;
            } pid;
        } friction_wheels;
        struct Loader {
            bool reverse = false;
            struct Pid {
                double p = 0.0;
                double i = 0.0;
                double d = 0.0;
                bool antiwindup = false;
                double i_clamp_max = 0.0;
                double i_clamp_min = 0.0;
            } pid;
        } loader;
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
    : ParamListener(parameters_interface, rclcpp::get_logger("tide_shooter_controller"), prefix) {
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
      output.friction_wheels.pid.p = params.friction_wheels.pid.p;
      output.friction_wheels.pid.i = params.friction_wheels.pid.i;
      output.friction_wheels.pid.d = params.friction_wheels.pid.d;
      output.friction_wheels.pid.antiwindup = params.friction_wheels.pid.antiwindup;
      output.friction_wheels.pid.i_clamp_max = params.friction_wheels.pid.i_clamp_max;
      output.friction_wheels.pid.i_clamp_min = params.friction_wheels.pid.i_clamp_min;
      output.loader.reverse = params.loader.reverse;
      output.loader.pid.p = params.loader.pid.p;
      output.loader.pid.i = params.loader.pid.i;
      output.loader.pid.d = params.loader.pid.d;
      output.loader.pid.antiwindup = params.loader.pid.antiwindup;
      output.loader.pid.i_clamp_max = params.loader.pid.i_clamp_max;
      output.loader.pid.i_clamp_min = params.loader.pid.i_clamp_min;

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
        if (param.get_name() == (prefix_ + "referee_shooter_type")) {
            updated_params.referee_shooter_type = param.as_string();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "friction_wheels.joint")) {
            if(auto validation_result = not_empty<std::string>(param);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.friction_wheels.joint = param.as_string_array();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "friction_wheels.reverse")) {
            updated_params.friction_wheels.reverse = param.as_string_array();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "friction_wheels.pid.p")) {
            updated_params.friction_wheels.pid.p = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "friction_wheels.pid.i")) {
            updated_params.friction_wheels.pid.i = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "friction_wheels.pid.d")) {
            updated_params.friction_wheels.pid.d = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "friction_wheels.pid.antiwindup")) {
            updated_params.friction_wheels.pid.antiwindup = param.as_bool();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "friction_wheels.pid.i_clamp_max")) {
            updated_params.friction_wheels.pid.i_clamp_max = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "friction_wheels.pid.i_clamp_min")) {
            updated_params.friction_wheels.pid.i_clamp_min = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "loader.joint")) {
            if(auto validation_result = not_empty<std::string>(param);
              !validation_result) {
                return rsl::to_parameter_result_msg(validation_result);
            }
            updated_params.loader.joint = param.as_string();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "loader.reverse")) {
            updated_params.loader.reverse = param.as_bool();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "loader.pid.p")) {
            updated_params.loader.pid.p = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "loader.pid.i")) {
            updated_params.loader.pid.i = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "loader.pid.d")) {
            updated_params.loader.pid.d = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "loader.pid.antiwindup")) {
            updated_params.loader.pid.antiwindup = param.as_bool();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "loader.pid.i_clamp_max")) {
            updated_params.loader.pid.i_clamp_max = param.as_double();
            RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
        }
        if (param.get_name() == (prefix_ + "loader.pid.i_clamp_min")) {
            updated_params.loader.pid.i_clamp_min = param.as_double();
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
      if (!parameters_interface_->has_parameter(prefix_ + "referee_shooter_type")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Referee shooter type";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.referee_shooter_type);
          parameters_interface_->declare_parameter(prefix_ + "referee_shooter_type", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "friction_wheels.joint")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Friction wheels names";
          descriptor.read_only = true;
          auto parameter = to_parameter_value(updated_params.friction_wheels.joint);
          parameters_interface_->declare_parameter(prefix_ + "friction_wheels.joint", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "friction_wheels.reverse")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Reverse direction of the friction wheels";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.friction_wheels.reverse);
          parameters_interface_->declare_parameter(prefix_ + "friction_wheels.reverse", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "friction_wheels.pid.p")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Proportional gain for PID";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.friction_wheels.pid.p);
          parameters_interface_->declare_parameter(prefix_ + "friction_wheels.pid.p", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "friction_wheels.pid.i")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Integral gain for PID";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.friction_wheels.pid.i);
          parameters_interface_->declare_parameter(prefix_ + "friction_wheels.pid.i", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "friction_wheels.pid.d")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Derivative gain for PID";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.friction_wheels.pid.d);
          parameters_interface_->declare_parameter(prefix_ + "friction_wheels.pid.d", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "friction_wheels.pid.antiwindup")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Antiwindup functionality. When set to true, limits the integral error to prevent windup; otherwise, constrains the integral contribution to the control output. i_clamp_max and i_clamp_min are applied in both scenarios.";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.friction_wheels.pid.antiwindup);
          parameters_interface_->declare_parameter(prefix_ + "friction_wheels.pid.antiwindup", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "friction_wheels.pid.i_clamp_max")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Upper integral clamp.";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.friction_wheels.pid.i_clamp_max);
          parameters_interface_->declare_parameter(prefix_ + "friction_wheels.pid.i_clamp_max", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "friction_wheels.pid.i_clamp_min")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Lower integral clamp.";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.friction_wheels.pid.i_clamp_min);
          parameters_interface_->declare_parameter(prefix_ + "friction_wheels.pid.i_clamp_min", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "loader.joint")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Loader motor name";
          descriptor.read_only = true;
          auto parameter = to_parameter_value(updated_params.loader.joint);
          parameters_interface_->declare_parameter(prefix_ + "loader.joint", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "loader.reverse")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Reverse direction of the loader";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.loader.reverse);
          parameters_interface_->declare_parameter(prefix_ + "loader.reverse", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "loader.pid.p")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Proportional gain for PID";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.loader.pid.p);
          parameters_interface_->declare_parameter(prefix_ + "loader.pid.p", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "loader.pid.i")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Integral gain for PID";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.loader.pid.i);
          parameters_interface_->declare_parameter(prefix_ + "loader.pid.i", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "loader.pid.d")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Derivative gain for PID";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.loader.pid.d);
          parameters_interface_->declare_parameter(prefix_ + "loader.pid.d", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "loader.pid.antiwindup")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Antiwindup functionality. When set to true, limits the integral error to prevent windup; otherwise, constrains the integral contribution to the control output. i_clamp_max and i_clamp_min are applied in both scenarios.";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.loader.pid.antiwindup);
          parameters_interface_->declare_parameter(prefix_ + "loader.pid.antiwindup", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "loader.pid.i_clamp_max")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Upper integral clamp.";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.loader.pid.i_clamp_max);
          parameters_interface_->declare_parameter(prefix_ + "loader.pid.i_clamp_max", parameter, descriptor);
      }
      if (!parameters_interface_->has_parameter(prefix_ + "loader.pid.i_clamp_min")) {
          rcl_interfaces::msg::ParameterDescriptor descriptor;
          descriptor.description = "Lower integral clamp.";
          descriptor.read_only = false;
          auto parameter = to_parameter_value(updated_params.loader.pid.i_clamp_min);
          parameters_interface_->declare_parameter(prefix_ + "loader.pid.i_clamp_min", parameter, descriptor);
      }
      // get parameters and fill struct fields
      rclcpp::Parameter param;
      param = parameters_interface_->get_parameter(prefix_ + "open_loop");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.open_loop = param.as_bool();
      param = parameters_interface_->get_parameter(prefix_ + "referee_shooter_type");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.referee_shooter_type = param.as_string();
      param = parameters_interface_->get_parameter(prefix_ + "friction_wheels.joint");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      if(auto validation_result = not_empty<std::string>(param);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'friction_wheels.joint': {}", validation_result.error()));
      }
      updated_params.friction_wheels.joint = param.as_string_array();
      param = parameters_interface_->get_parameter(prefix_ + "friction_wheels.reverse");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.friction_wheels.reverse = param.as_string_array();
      param = parameters_interface_->get_parameter(prefix_ + "friction_wheels.pid.p");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.friction_wheels.pid.p = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "friction_wheels.pid.i");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.friction_wheels.pid.i = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "friction_wheels.pid.d");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.friction_wheels.pid.d = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "friction_wheels.pid.antiwindup");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.friction_wheels.pid.antiwindup = param.as_bool();
      param = parameters_interface_->get_parameter(prefix_ + "friction_wheels.pid.i_clamp_max");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.friction_wheels.pid.i_clamp_max = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "friction_wheels.pid.i_clamp_min");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.friction_wheels.pid.i_clamp_min = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "loader.joint");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      if(auto validation_result = not_empty<std::string>(param);
        !validation_result) {
          throw rclcpp::exceptions::InvalidParameterValueException(fmt::format("Invalid value set during initialization for parameter 'loader.joint': {}", validation_result.error()));
      }
      updated_params.loader.joint = param.as_string();
      param = parameters_interface_->get_parameter(prefix_ + "loader.reverse");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.loader.reverse = param.as_bool();
      param = parameters_interface_->get_parameter(prefix_ + "loader.pid.p");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.loader.pid.p = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "loader.pid.i");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.loader.pid.i = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "loader.pid.d");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.loader.pid.d = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "loader.pid.antiwindup");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.loader.pid.antiwindup = param.as_bool();
      param = parameters_interface_->get_parameter(prefix_ + "loader.pid.i_clamp_max");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.loader.pid.i_clamp_max = param.as_double();
      param = parameters_interface_->get_parameter(prefix_ + "loader.pid.i_clamp_min");
      RCLCPP_DEBUG_STREAM(logger_, param.get_name() << ": " << param.get_type_name() << " = " << param.value_to_string());
      updated_params.loader.pid.i_clamp_min = param.as_double();


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

} // namespace tide_shooter_controller
