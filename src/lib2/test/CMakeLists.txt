add_executable(test_lib2 main.cpp)
target_link_libraries(test_lib2 PRIVATE lib2 CONAN_PKG::gtest)
target_compile_features(test_lib2 PUBLIC cxx_std_17)

enable_testing()
add_test(NAME Lib2 COMMAND test_lib2)