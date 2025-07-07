cmake_minimum_required(VERSION 3.10)
project(UnitTestGenerator)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} --coverage")

# Add GoogleTest
add_subdirectory(googletest)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

# Main app (optional, not needed for testing)
add_executable(main_app cpp_project/main.cpp)

# ✅ Correct: Define 'runTests' only once
add_executable(runTests tests/test_main.cpp cpp_project/add.cpp)
target_link_libraries(runTests gtest gtest_main)
