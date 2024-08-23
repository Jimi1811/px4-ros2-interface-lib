/****************************************************************************
 * Copyright (c) 2024 PX4 Development Team.
 * SPDX-License-Identifier: BSD-3-Clause
 ****************************************************************************/

#include <px4_ros2/vehicle_state/vehicle_status.hpp>

namespace px4_ros2
{

VehicleStatus::VehicleStatus(Context & context)
: Subscription<px4_msgs::msg::VehicleStatus>(context, "fmu/out/vehicle_status")
{
  RequirementFlags requirements{};
  context.setRequirement(requirements);
}

} // namespace px4_ros2
