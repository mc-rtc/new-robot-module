# Here we find a typical ROS description package, this set the
# JVRC_DESCRIPTION_PATH CMake variable
find_description_package(jvrc_description)
# Generate the robot module YAML description using this value
configure_file(NewRobotModuleYAML.in.yaml
               "${CMAKE_CURRENT_BINARY_DIR}/NewRobotModuleYAML.yaml")

# Install the YAML file
set(MODULE_INSTALL_LOCATION "${CMAKE_INSTALL_PREFIX}/share/${PROJECT_NAME}/")
install(FILES "${CMAKE_CURRENT_BINARY_DIR}/NewRobotModuleYAML.yaml"
        DESTINATION "${MODULE_INSTALL_LOCATION}")

# Configure the alias accordingly
configure_file(alias/NewRobotModuleYAML.in.yaml
               "${CMAKE_CURRENT_BINARY_DIR}/alias/NewRobotModuleYAML.yaml")

# Install the alias
install(FILES "${CMAKE_CURRENT_BINARY_DIR}/alias/NewRobotModuleYAML.yaml"
        DESTINATION "${MC_ROBOTS_ALIASES_DIRECTORY}")
