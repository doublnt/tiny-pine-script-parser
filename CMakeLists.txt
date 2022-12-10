# CMakeLists.txt
project("pine-script-parser")

# minimum required CMAKE version
CMAKE_MINIMUM_REQUIRED(VERSION 3.7)

set (CMAKE_CXX_STANDARD 17)
set (CMAKE_PROJECT_VERSION 1.0.0)

include_directories(
    ${PROJECT_SOURCE_DIR}/generated
)

include_directories(
  ${PROJECT_SOURCE_DIR}/runtime
  ${PROJECT_SOURCE_DIR}/runtime/atn
  ${PROJECT_SOURCE_DIR}/runtime/dfa
  ${PROJECT_SOURCE_DIR}/runtime/internal
  ${PROJECT_SOURCE_DIR}/runtime/misc
  ${PROJECT_SOURCE_DIR}/runtime/support
  ${PROJECT_SOURCE_DIR}/runtime/tree
  ${PROJECT_SOURCE_DIR}/runtime/tree/pattern
  ${PROJECT_SOURCE_DIR}/runtime/tree/xpath
)
file(GLOB libantlrcpp_SRC
  "${PROJECT_SOURCE_DIR}/runtime/*.cpp"
  "${PROJECT_SOURCE_DIR}/runtime/atn/*.cpp"
  "${PROJECT_SOURCE_DIR}/runtime/dfa/*.cpp"
  "${PROJECT_SOURCE_DIR}/runtime/internal/*.cpp"
  "${PROJECT_SOURCE_DIR}/runtime/misc/*.cpp"
  "${PROJECT_SOURCE_DIR}/runtime/support/*.cpp"
  "${PROJECT_SOURCE_DIR}/runtime/tree/*.cpp"
  "${PROJECT_SOURCE_DIR}/runtime/tree/pattern/*.cpp"
  "${PROJECT_SOURCE_DIR}/runtime/tree/xpath/*.cpp"
)

set(generated_src
    ${PROJECT_SOURCE_DIR}/generated/ExprLexer.cpp
    ${PROJECT_SOURCE_DIR}/generated/ExprBaseListener.cpp
    ${PROJECT_SOURCE_DIR}/generated/ExprListener.cpp
    ${PROJECT_SOURCE_DIR}/generated/ExprParser.cpp
)

add_library(antlr4_shared SHARED ${libantlrcpp_SRC})
add_library(antlr4_static STATIC ${libantlrcpp_SRC})

if(CMAKE_CXX_COMPILER_ID MATCHES "MSVC")
  set(disabled_compile_warnings "/wd4251")
else()
  set(disabled_compile_warnings "-Wno-overloaded-virtual")
endif()

if (WIN32)
  set(static_lib_suffix "-static")
  target_compile_definitions(antlr4_shared PUBLIC ANTLR4CPP_EXPORTS)
  target_compile_definitions(antlr4_static PUBLIC ANTLR4CPP_STATIC)
  if(CMAKE_CXX_COMPILER_ID MATCHES "MSVC")
    set(extra_share_compile_flags "-MP /wd4251")
    set(extra_static_compile_flags "-MP")
  endif()
endif()

add_executable(pine-script-test ${generated_src} main.cpp)
target_link_libraries(pine-script-test antlr4_static)