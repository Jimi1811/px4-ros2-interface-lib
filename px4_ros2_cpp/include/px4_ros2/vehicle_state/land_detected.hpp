/****************************************************************************
 * Copyright (c) 2023 PX4 Development Team.
 * SPDX-License-Identifier: BSD-3-Clause
 ****************************************************************************/

#pragma once

#include <px4_msgs/msg/vehicle_land_detected.hpp>
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
class LandDetected : public Subscription<px4_msgs::msg::VehicleLandDetected>
{
public:
  explicit LandDetected(Context & context);

};

/** @}*/
} /* namespace px4_ros2 */
