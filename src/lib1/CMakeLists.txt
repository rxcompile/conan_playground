add_library(lib1
    lib1.cpp
    include/lib1.h)
target_include_directories(lib1 PUBLIC "include")
target_compile_features(lib1 PUBLIC cxx_std_17)

install(TARGETS lib1
    LIBRARY DESTINATION lib
    ARCHIVE DESTINATION lib
    RUNTIME DESTINATION bin
    INCLUDES DESTINATION include
)

if(ENABLE_TESTS)
    enable_testing()
    add_subdirectory(test)
endif()