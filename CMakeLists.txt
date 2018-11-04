cmake_minimum_required(VERSION 3.10)
project(main CXX)

set (CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake")

include(conan)
conan_cmake_run(CONANFILE conanfile.txt
    BASIC_SETUP CMAKE_TARGETS
    BUILD missing)

include(cotire)

add_subdirectory(src/binary)
add_subdirectory(src/lib1)
add_subdirectory(src/lib2)
add_subdirectory(src/lib3)

enable_testing()
add_subdirectory(src/test)