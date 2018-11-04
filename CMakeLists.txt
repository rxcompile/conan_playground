cmake_minimum_required(VERSION 3.10)
project(main CXX)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup(TARGETS)

add_subdirectory(binary)
add_subdirectory(lib1)
add_subdirectory(lib2)
add_subdirectory(lib3)

enable_testing()
add_subdirectory(test)