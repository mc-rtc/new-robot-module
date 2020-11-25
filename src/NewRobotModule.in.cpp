#include "NewRobotModule.h"

#include <RBDyn/parsers/urdf.h>

namespace
{

// This is set by CMake, see CMakeLists.txt
static const std::string JVRC_DESCRIPTION_PATH = "@JVRC_DESCRIPTION_PATH@";

} // namespace

namespace mc_robots
{

NewRobotModule::NewRobotModule() : mc_rbdyn::RobotModule(JVRC_DESCRIPTION_PATH, "jvrc1")
{
  // True if the robot has a fixed base, false otherwise
  bool fixed = false;
  // Makes all the basic initialization that can be done from an URDF file
  init(rbd::parsers::from_urdf_file(urdf_path, fixed));
}

} // namespace mc_robots

#include <mc_rbdyn/RobotModuleMacros.h>

ROBOT_MODULE_DEFAULT_CONSTRUCTOR("NewRobotModule", mc_robots::NewRobotModule)
