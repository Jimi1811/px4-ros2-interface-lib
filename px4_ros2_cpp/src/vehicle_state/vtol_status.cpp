/****************************************************************************
 * Copyright (c) 2024 PX4 Development Team.
 * SPDX-License-Identifier: BSD-3-Clause
 ****************************************************************************/

#include <px4_ros2/vehicle_state/vtol_status.hpp>

namespace px4_ros2
{

VtolStatus::VtolStatus(Context & context)
: Subscription<px4_msgs::msg::VtolStatus>(context, "fmu/out/vtol_vehicle_status")
{
  RequirementFlags requirements{};
  context.setRequirement(requirements);
}

} // namespace px4_ros2
