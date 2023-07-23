project(LibA)

add_library(lib-a src/lib_a.cpp)
target_include_directories(lib-a PUBLIC include)
