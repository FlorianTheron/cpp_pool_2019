cmake_minimum_required(VERSION 3.0)

project(santa)

file(GLOB santaFiles
    "*.cpp"
    "*.hpp"
)

add_executable(santa ${santaFiles})