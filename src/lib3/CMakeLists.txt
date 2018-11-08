add_library(lib3
    lib3.cpp
    include/lib3.h)

target_link_libraries(lib3 PRIVATE lib1 lib2)
target_include_directories(lib3 PUBLIC "include")

install(TARGETS lib3
    LIBRARY DESTINATION lib
    ARCHIVE DESTINATION lib
    RUNTIME DESTINATION bin
    INCLUDES DESTINATION include
)

if(ENABLE_TESTS)
    enable_testing()
    add_subdirectory(test)
endif()