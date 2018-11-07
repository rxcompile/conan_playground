add_executable(test_lib1 main.cpp)
target_link_libraries(test_lib1 PRIVATE lib1 CONAN_PKG::gtest)
target_compile_features(test_lib1 PUBLIC cxx_std_17)

enable_testing()
add_test(NAME Lib1 COMMAND test_lib1)