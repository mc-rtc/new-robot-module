# Here we find a typical ROS description package, this set the
# JVRC_DESCRIPTION_PATH CMake variable
find_description_package(jvrc_description)
# Generate the robot module C++ code using this value
configure_file(NewRobotModule.in.cpp
               "${CMAKE_CURRENT_BINARY_DIR}/NewRobotModule.cpp")

set(module_SRC "${CMAKE_CURRENT_BINARY_DIR}/NewRobotModule.cpp")

set(module_HDR NewRobotModule.h)

add_robot(NewRobotModule "${module_SRC}" "${module_HDR}")
target_include_directories(NewRobotModule PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}")
