/****************************************************************************
 * Copyright (c) 2023 PX4 Development Team.
 * SPDX-License-Identifier: BSD-3-Clause
 ****************************************************************************/

#pragma once

#include <px4_msgs/msg/vtol_vehicle_status.hpp>
#include <px4_ros2/common/context.hpp>
#include <px4_ros2/odometry/subscription.hpp>

namespace px4_ros2
{
/** \ingroup vehicle_state
 *  @{
 */

/**
 * @brief Provides access to the vtol vehicle's status
 *
 * @ingroup vehicle_state
 */
class VtolStatus : public Subscription<px4_msgs::msg::VtolVehicleStatus>
{
public:
  explicit VtolStatus(Context & context);

};

/** @}*/
} /* namespace px4_ros2 */
