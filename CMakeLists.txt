cmake_minimum_required(VERSION 3.10)
project(main CXX)

option(ENABLE_TESTS "Enables testing of project libraries" OFF)

# CMake setup
set (CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake")
include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup(TARGETS)
include(cotire)
if(ENABLE_TESTS)
    enable_testing()
endif()

# Global compile options for the project
add_compile_options(-Wall -Wpedantic)

# targets
add_subdirectory(src/binary)
add_subdirectory(src/lib1)
add_subdirectory(src/lib2)
add_subdirectory(src/lib3)
