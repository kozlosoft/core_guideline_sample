cmake_minimum_required(VERSION 2.8.7)

project(fail)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_executable(${PROJECT_NAME} ${PROJECT_NAME}.cpp)
