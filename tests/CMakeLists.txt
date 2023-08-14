if(TARGET NewRobotModule)
  set(ROBOT_MODULE_PARAMS "\"NewRobotModule\"")
  configure_file("${CMAKE_CURRENT_SOURCE_DIR}/loader.in.cpp"
                 "${CMAKE_CURRENT_BINARY_DIR}/NewRobotModule/loader.cpp")
  add_executable(loader_NewRobotModule
                 "${CMAKE_CURRENT_BINARY_DIR}/NewRobotModule/loader.cpp")
  target_link_libraries(loader_NewRobotModule PUBLIC mc_rtc::mc_rbdyn)
  add_test(NAME loader_NewRobotModule
           COMMAND loader_NewRobotModule "$<TARGET_FILE_DIR:NewRobotModule>")
endif()

if(EXISTS "${PROJECT_BINARY_DIR}/yaml/NewRobotModuleYAML.yaml")
  set(ROBOT_MODULE_PARAMS
      "\"json\", \"${PROJECT_BINARY_DIR}/yaml/NewRobotModuleYAML.yaml\"")
  configure_file("${CMAKE_CURRENT_SOURCE_DIR}/loader.in.cpp"
                 "${CMAKE_CURRENT_BINARY_DIR}/NewRobotModuleYAML/loader.cpp")
  add_executable(loader_NewRobotModuleYAML
                 "${CMAKE_CURRENT_BINARY_DIR}/NewRobotModuleYAML/loader.cpp")
  target_link_libraries(loader_NewRobotModuleYAML PUBLIC mc_rtc::mc_rbdyn)
  add_test(NAME loader_NewRobotModuleYAML
           COMMAND loader_NewRobotModuleYAML
                   "${MC_ROBOTS_RUNTIME_INSTALL_PREFIX}")
endif()
