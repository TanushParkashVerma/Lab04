cmake_minimum_required(VERSION 3.14)
project(Lab04)

set(CMAKE_CXX_STANDARD 14)

add_executable(Lab04 inheritance.cpp animal.cpp animal.hpp bird.cpp bird.hpp canine.cpp canine.hpp)