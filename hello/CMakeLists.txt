cmake_minimum_required(VERSION 3.18)
project(hello CXX)

find_package(PkgConfig REQUIRED)
pkg_check_modules(GTKMM gtkmm-4.0)
# pkg_check_modules(GTK4 REQUIRED IMPORTED_TARGET gtk4)

set(SOURCES
  hello.cpp
  main.cpp
)

add_executable(${PROJECT_NAME} ${SOURCES})

target_include_directories(${PROJECT_NAME} PRIVATE ${GTKMM_INCLUDE_DIRS})
target_link_libraries(${PROJECT_NAME} PRIVATE ${GTKMM_LIBRARIES})
