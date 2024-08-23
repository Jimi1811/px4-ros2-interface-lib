/****************************************************************************
 * Copyright (c) 2023 PX4 Development Team.
 * SPDX-License-Identifier: BSD-3-Clause
 ****************************************************************************/

#pragma once

#include <px4_msgs/msg/home_position.hpp>
#include <px4_ros2/common/context.hpp>
#include <px4_ros2/odometry/subscription.hpp>

namespace px4_ros2
{
/** \ingroup vehicle_state
 *  @{
 */

/**
 * @brief Provides access to the vehicle's home position
 *
 * @ingroup vehicle_state
 */
class HomePosition : public Subscription<px4_msgs::msg::HomePosition>
{
public:
  explicit HomePosition(Context & context);

};

/** @}*/
} /* namespace px4_ros2 */
