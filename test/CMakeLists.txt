#add_executable(test_linkage_catch main_catch.cpp)
#target_link_libraries(test_linkage_catch PRIVATE lib1 lib2 lib3 CONAN_PKG::catch2)
#target_compile_features(test_linkage_catch PUBLIC cxx_std_17)

add_executable(test_linkage_gtest main_gtest.cpp)
target_link_libraries(test_linkage_gtest PRIVATE lib1 lib2 lib3 CONAN_PKG::gtest)
target_compile_features(test_linkage_gtest PUBLIC cxx_std_17)

enable_testing()
#add_test(NAME TestCatch.Link COMMAND test_linkage_catch)
add_test(NAME TestGTest.Link COMMAND test_linkage_gtest)