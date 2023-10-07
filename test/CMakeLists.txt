# Macros

macro(add_test test_name)

add_executable("test-${test_name}" "${test_name}.cpp")
target_link_libraries("test-${test_name}" GTest::gtest_main cpp-math)
target_include_directories("test-${test_name}" PUBLIC "${CMAKE_SOURCE_DIR}/include")
gtest_discover_tests("test-${test_name}")

endmacro()

# Setup Google Test

set(BUILD_GMOCK OFF)
set(INSTALL_GTEST OFF)

include(FetchContent)
FetchContent_Declare(
    googletest
    URL https://github.com/google/googletest/archive/refs/tags/v1.14.0.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

# Add Tests

include(GoogleTest)

# add_test(expression)
