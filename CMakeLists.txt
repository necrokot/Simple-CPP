cmake_minimum_required(VERSION 3.0.0)
project(T01 VERSION 0.1.0)

include(CTest)
enable_testing()
file(GLOB_RECURSE sources src/*.cpp)

add_executable(T01 ${sources})
include_directories(${CMAKE_SOURCE_DIR})

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
