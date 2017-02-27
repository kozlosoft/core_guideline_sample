cmake_minimum_required(VERSION 2.8)

project(core_guideline_sample)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14 -Wall -Wextra -Werror")

add_subdirectory(ok)
add_subdirectory(fail)
