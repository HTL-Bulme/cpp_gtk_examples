cmake_minimum_required(VERSION 3.18)
project(range_widgets CXX)

include(../CMakeLists.config)

set(SOURCES
  range_widgets.cpp
  main.cpp
)

add_executable(${PROJECT_NAME} ${SOURCES})

target_include_directories(${PROJECT_NAME} PRIVATE ${GTKMM_INCLUDE_DIRS})
target_link_libraries(${PROJECT_NAME} PRIVATE ${GTKMM_LIBRARIES})
