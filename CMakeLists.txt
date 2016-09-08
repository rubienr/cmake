#
# Created by rubienr on 08.09.16.
#

cmake_minimum_required(VERSION 3.5)
project(MyCmykeExample)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(CDEBUG "")
set(CXXDEBUG "")
include(./build-settings/compile_settings_global.cmake)
add_subdirectory(include)
add_subdirectory(src)
add_subdirectory(test)
add_subdirectory(mlayout)