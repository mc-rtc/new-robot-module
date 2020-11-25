cmake_minimum_required(VERSION 3.1)

set(CXX_DISABLE_WERROR 1)
set(CMAKE_CXX_STANDARD 11)

set(PROJECT_NAME NewRobotModule)
set(PROJECT_DESCRIPTION "NewRobotModule")
set(PROJECT_URL "")

project(${PROJECT_NAME} LANGUAGES CXX VERSION 1.0.0)
include(CTest)
enable_testing()

find_package(mc_rtc REQUIRED)

add_subdirectory(src)
add_subdirectory(yaml)

if(BUILD_TESTING)
  add_subdirectory(tests)
endif()
