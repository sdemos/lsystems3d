# CMakeList.txt
# cs243 project3 mish
# author: Stephen Demos (sxd4303)

# Naming the project sets it up so that I can refer to things using
# the name of the project if I want
cmake_minimum_required(VERSION 2.6)
project(OPENGL_TUTORIALS)

set(CMAKE_CXX_COMPILER "clang++")
set(CMAKE_CXX_FLAGS "-Wall -Wextra -ggdb -std=c++11 -lGL")

# Add the subdirectory so cmake knows where to look for stuff
# I don't think I need to add one for the include dir
add_subdirectory(libs/glfw)
add_subdirectory(src)
