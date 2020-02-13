cmake_minimum_required(VERSION 3.0)

project(rush)

file(GLOB rushFiles
    "*.cpp"
    "*.hpp"
)

add_executable(rush ${rushFiles})