CMAKE_MINIMUM_REQUIRED(VERSION 3.0)
PROJECT(geomandel)

set(GEOMANDEL_VERSION_MAJOR 0)
set(GEOMANDEL_VERSION_MINOR 1)
set(GEOMANDEL_VERSION_PATCH 0)

option(UNIT_TEST "Build unit test executable" OFF)

add_subdirectory(src)

