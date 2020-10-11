cmake_minimum_required(VERSION 3.15)
project(Engine)
set(CMAKE_CXX_STANDARD 20)

find_package(SDL2 REQUIRED SDL2)

add_executable(Engine main.cpp)

target_link_libraries(Engine PRIVATE SDL2)