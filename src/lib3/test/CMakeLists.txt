add_executable(test_lib3 main.cpp)
target_link_libraries(test_lib3 PRIVATE lib3 CONAN_PKG::gtest)
target_compile_features(test_lib3 PUBLIC cxx_std_17)

enable_testing()
add_test(NAME Lib3 COMMAND test_lib3)