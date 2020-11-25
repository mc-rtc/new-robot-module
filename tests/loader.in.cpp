#include <mc_rbdyn/RobotLoader.h>

int main()
{
  mc_rbdyn::RobotLoader::clear();
  mc_rbdyn::RobotLoader::update_robot_module_path({std::string("@ROBOT_MODULE_PATH@")});
  auto rm = mc_rbdyn::RobotLoader::get_robot_module(@ROBOT_MODULE_PARAMS@);
  return 0;
}
