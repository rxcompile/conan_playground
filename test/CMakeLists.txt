add_executable(test_linkage main.cpp)
target_link_libraries(test_linkage PRIVATE lib1 lib2 lib3 CONAN_PKG::catch2)
target_compile_features(test_linkage PUBLIC cxx_std_17)

enable_testing()
add_test(NAME Test.Link COMMAND test_linkage)