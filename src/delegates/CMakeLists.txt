cmake_minimum_required(VERSION 3.3)

# Project
project(delegates VERSION 1.0.0)
set(INCLUDES
  include/delegates/action.h
  include/delegates/delegate.h
  include/delegates/event.h
  include/delegates/event_args.h
  include/delegates/event_handler.h
  include/delegates/func.h
  include/delegates/overload.h
  include/delegates/predicate.h
  include/delegates/delegates
  include/delegates/delegates.h
)
set(SOURCES
  src/delegates/delegates.cpp
  src/delegates/event_args.cpp
)
source_group(include\\delegates FILES ${INCLUDES})
source_group(src\\delegates FILES ${SOURCES})

# Options
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Library properties
add_library(${PROJECT_NAME} STATIC ${INCLUDES} ${SOURCES})
if (MSVC)
  target_compile_options(${PROJECT_NAME} PRIVATE "$<$<CONFIG:Debug>:/Fd$<TARGET_FILE_DIR:${PROJECT_NAME}>/${PROJECT_NAME}${CMAKE_DEBUG_POSTFIX}.pdb>")
  target_compile_options(${PROJECT_NAME} PRIVATE "$<$<CONFIG:Release>:/Fd$<TARGET_FILE_DIR:${PROJECT_NAME}>/${PROJECT_NAME}.pdb>")
endif ()
target_include_directories(${PROJECT_NAME} PUBLIC $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include> PUBLIC $<INSTALL_INTERFACE:include>)
set_target_properties(${PROJECT_NAME} PROPERTIES FOLDER "delegates/src")

# install
install(DIRECTORY include/delegates/. DESTINATION include/delegates)
install(FILES $<TARGET_FILE_DIR:${PROJECT_NAME}>/${PROJECT_NAME}${CMAKE_DEBUG_POSTFIX}.pdb DESTINATION lib CONFIGURATIONS Debug OPTIONAL)
install(FILES $<TARGET_FILE_DIR:${PROJECT_NAME}>/${PROJECT_NAME}.pdb DESTINATION lib CONFIGURATIONS Release OPTIONAL)
install(TARGETS ${PROJECT_NAME} EXPORT delegates DESTINATION lib)
