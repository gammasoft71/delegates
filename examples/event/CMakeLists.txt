cmake_minimum_required(VERSION 3.3)

project(event)
find_package(delegates REQUIRED)
add_executable(${PROJECT_NAME} src/event.cpp)
target_link_libraries(${PROJECT_NAME} delegates)
set_target_properties(${PROJECT_NAME} PROPERTIES FOLDER "delegates")
