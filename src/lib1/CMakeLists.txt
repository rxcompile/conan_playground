add_library(lib1
    lib1.cpp
    include/lib1.h)
target_include_directories(lib1 PUBLIC "include")

install(TARGETS lib1
    LIBRARY DESTINATION lib
    ARCHIVE DESTINATION lib
    RUNTIME DESTINATION bin
    INCLUDES DESTINATION include
)