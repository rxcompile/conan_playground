find_package(GTest REQUIRED)

add_executable(test_linkage_gtest main_gtest.cpp)
target_link_libraries(test_linkage_gtest PRIVATE lib1 lib2 lib3 CONAN_PKG::gtest)
target_compile_features(test_linkage_gtest PUBLIC cxx_std_17)

enable_testing()
add_test(NAME gtest COMMAND test_linkage_gtest)