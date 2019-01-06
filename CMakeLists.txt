cmake_minimum_required(VERSION 3.5.0)

find_program(CCACHE_PROGRAM ccache)
if(CCACHE_PROGRAM)
    set_property(GLOBAL PROPERTY RULE_LAUNCH_COMPILE "${CCACHE_PROGRAM}")
endif()

project(UsingETL)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_STANDARD 11) # flip this between 98 and 11 to see the difference

add_subdirectory(etl)

add_executable(myETLtest my_main.cpp etl_profile.h)
target_include_directories(myETLtest BEFORE PRIVATE .)
target_link_libraries(myETLtest PRIVATE etl)
