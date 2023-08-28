/****************************************************************************
 * Copyright (c) 2023 PX4 Development Team.
 * SPDX-License-Identifier: BSD-3-Clause
 ****************************************************************************/

#pragma once

#include <px4_msgs/msg/manual_control_setpoint.hpp>
#include <rclcpp/rclcpp.hpp>

using namespace std::chrono_literals; // NOLINT

namespace px4_sdk
{

class ModeBase;

class ManualControlInput
{
public:
  /**
   * Stick position in [-1,1]. Move right, positive roll rotation, right side down
   */
  float roll() const {return _manual_control_setpoint.roll;}
  /**
   * Stick position in [-1,1]. Move forward, negative pitch rotation, nose down
   */
  float pitch() const {return _manual_control_setpoint.pitch;}
  /**
   * Stick position in [-1,1]. Positive yaw rotation, clockwise when seen top down
   */
  float yaw() const {return _manual_control_setpoint.yaw;}
  /**
   * Stick position in [-1,1]. Move up, positive thrust, -1 is minimum available 0% or -100%, +1 is 100% thrust
   */
  float throttle() const {return _manual_control_setpoint.throttle;}

  float aux1() const {return _manual_control_setpoint.aux1;}
  float aux2() const {return _manual_control_setpoint.aux2;}
  float aux3() const {return _manual_control_setpoint.aux3;}
  float aux4() const {return _manual_control_setpoint.aux4;}
  float aux5() const {return _manual_control_setpoint.aux5;}
  float aux6() const {return _manual_control_setpoint.aux6;}

  bool isValid() const
  {
    return _manual_control_setpoint.valid &&
           _node.get_clock()->now() - _last_manual_control_setpoint < 500ms;
  }

private:
  explicit ManualControlInput(ModeBase & mode_base);

  friend class ModeBase;

  rclcpp::Subscription<px4_msgs::msg::ManualControlSetpoint>::SharedPtr _manual_control_setpoint_sub;
  px4_msgs::msg::ManualControlSetpoint _manual_control_setpoint{};
  rclcpp::Time _last_manual_control_setpoint{};
  rclcpp::Node & _node;
};

} /* namespace px4_sdk */
