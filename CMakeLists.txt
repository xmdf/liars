cmake_minimum_required(VERSION 3.17)

project(LRS VERSION 0.0.1)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(ROOT "/Users/mattfalcone/home/root")

list(APPEND CMAKE_PREFIX_PATH "${ROOT}")


add_subdirectory(src)
enable_testing()
add_subdirectory(tests)
