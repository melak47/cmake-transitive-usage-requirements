project(LibB)

add_library(lib-b src/lib_b.cpp)
target_include_directories(lib-b PUBLIC include)
target_link_libraries(lib-b PRIVATE lib-a)
