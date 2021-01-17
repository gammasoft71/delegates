cmake_minimum_required(VERSION 3.3)

project(hello_world_delegates)
find_package(delegates REQUIRED)
add_executable(${PROJECT_NAME} src/hello_world_delegates.cpp)
target_link_libraries(${PROJECT_NAME} delegates)
set_target_properties(${PROJECT_NAME} PROPERTIES FOLDER "delegates")
