# CMakeLists.txt
project("pine-script-parser")

# minimum required CMAKE version
CMAKE_MINIMUM_REQUIRED(VERSION 3.7)

SET (CMAKE_CXX_STANDARD 17)
set (CMAKE_PROJECT_VERSION 1.0.0)

add_subdirectory(antlr4-cpp-runtime-4.11.1-source)

# add generated grammar to demo binary target
add_executable(test_antlr main.cpp)
target_link_libraries(test_antlr
antlr4_static
)