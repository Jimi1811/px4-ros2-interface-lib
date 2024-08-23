/****************************************************************************
 * Copyright (c) 2024 PX4 Development Team.
 * SPDX-License-Identifier: BSD-3-Clause
 ****************************************************************************/

#include <px4_ros2/vehicle_state/land_detected.hpp>

namespace px4_ros2
{

LandDetected::LandDetected(Context & context)
: Subscription<px4_msgs::msg::LandDetected>(context, "fmu/out/vehicle_land_detected")
{
  RequirementFlags requirements{};
  context.setRequirement(requirements);
}

} // namespace px4_ros2
