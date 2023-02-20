cmake_minimum_required(VERSION 3.14)
project(googleTest_Test)

set(CMAKE_CXX_STANDARD 14)

# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
set(GTEST_SOURCE_DIR googletest)
add_subdirectory(${GTEST_SOURCE_DIR})
include_directories(${GTEST_SOURCE_DIR}/include)

enable_testing()
aux_source_directory(./test DIR_TEST)
add_executable(hello_test ${DIR_TEST})
target_link_libraries(hello_test  GTest::gtest_main)

include(GoogleTest)
gtest_discover_tests(hello_test)