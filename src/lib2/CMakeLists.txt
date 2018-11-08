add_library(lib2
    lib2.cpp
    include/lib2.h)

target_link_libraries(lib2 PRIVATE lib1)
target_include_directories(lib2 PUBLIC "include")

install(TARGETS lib2
    LIBRARY DESTINATION lib
    ARCHIVE DESTINATION lib
    RUNTIME DESTINATION bin
    INCLUDES DESTINATION include
)

if(ENABLE_TESTS)
    enable_testing()
    add_subdirectory(test)
endif()