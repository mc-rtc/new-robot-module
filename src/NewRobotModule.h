#pragma once

#include <mc_rbdyn/RobotModule.h>

#include <mc_robots/api.h>

namespace mc_robots
{

struct MC_ROBOTS_DLLAPI NewRobotModule : public mc_rbdyn::RobotModule
{
  NewRobotModule();
};

} // namespace mc_robots
