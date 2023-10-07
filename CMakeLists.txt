cmake_minimum_required(VERSION 3.25)

project(cpp-math)

cmake_policy(SET CMP0135 NEW)
enable_testing()

# GoogleTest requires at least C++14
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

SET(CMAKE_EXPORT_COMPILE_COMMANDS 1)

add_library(cpp-math src/expression.cpp)
target_include_directories(cpp-math PUBLIC include)

add_custom_target(
	copy-compile-commands ALL
	${CMAKE_COMMAND} -E copy_if_different
	${CMAKE_BINARY_DIR}/compile_commands.json
	${CMAKE_CURRENT_LIST_DIR}
)

add_subdirectory(test)
