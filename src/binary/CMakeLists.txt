add_executable(binary main.cpp raii_signal.cpp)
target_link_libraries(binary PRIVATE lib1 lib2 lib3 CONAN_PKG::boost)
target_compile_features(binary PUBLIC cxx_std_17)
cotire(binary)

install(TARGETS binary
    LIBRARY DESTINATION lib
    ARCHIVE DESTINATION lib
    RUNTIME DESTINATION bin
    INCLUDES DESTINATION include
)