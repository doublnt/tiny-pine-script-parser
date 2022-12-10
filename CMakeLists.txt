# CMakeLists.txt

# minimum required CMAKE version
CMAKE_MINIMUM_REQUIRED(VERSION 3.7)

LIST( APPEND CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/cmake )

# compiler must be 11 or 14
SET (CMAKE_CXX_STANDARD 14)

# add external build for antlrcpp
include( ExternalAntlr4Cpp )

add_executable(test_antlr main.cpp)