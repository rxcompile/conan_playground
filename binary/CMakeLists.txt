add_executable(binary main.cpp nontrivial.cpp)
target_link_libraries(binary PRIVATE lib1 lib2 lib3)
target_compile_features(binary PUBLIC cxx_std_17)
cotire(binary)