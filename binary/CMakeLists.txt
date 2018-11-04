cmake_minimum_required(VERSION 3.10)
project(binary CXX)

add_executable(binary main.cpp)
target_link_libraries(binary PRIVATE lib1 lib2 lib3)