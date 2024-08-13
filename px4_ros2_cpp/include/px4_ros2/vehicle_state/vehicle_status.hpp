/****************************************************************************
 * Copyright (c) 2023 PX4 Development Team.
 * SPDX-License-Identifier: BSD-3-Clause
 ****************************************************************************/

#pragma once

#include <Eigen/Eigen>
#include <px4_msgs/msg/vehicle_status.hpp>
#include <px4_ros2/common/context.hpp>
#include <px4_ros2/odometry/subscription.hpp>

namespace px4_ros2
{
/** \ingroup vehicle_state
 *  @{
 */

/**
 * @brief Provides access to the vehicle's status
 *
 * @ingroup vehicle_state
 */
class VehicleStatus : public Subscription<px4_msgs::msg::VehicleStatus>
{
public:
  explicit VehicleStatus(Context & context);

  /**
   * @brief Get the vehicle's arming status.
   *
   * @return true if the vehicle is armed.
  */
  bool armed() const
  {
    return lastValid(2s) && last().arming_state == px4_msgs::msg::VehicleStatus::ARMING_STATE_ARMED;
  }
};

/** @}*/
} /* namespace px4_ros2 */
