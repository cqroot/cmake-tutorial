# 设置所需 CMake 的最低版本为 3.10。
cmake_minimum_required(VERSION 3.10)

# 创建名为 tutorial 的项目，并设置项目版本为 1.0。
project(tutorial VERSION 1.0)

# 指定使用 C11 标准。
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED True)

# 读取子目录 math。
add_subdirectory(math)

# 添加一个命为 Tutorial 的二进制，源文件为 tutorial.c。
add_executable(tutorial tutorial.c)

# 链接 library 到我们的 executable。
target_link_libraries(tutorial PUBLIC mysqrt)

# 添加目录 math。
target_include_directories(
    tutorial
    PUBLIC "${PROJECT_BINARY_DIR}" "${PROJECT_SOURCE_DIR}/math"
)

# add the binary tree to the search path for include files
# so that we will find TutorialConfig.h
target_include_directories(tutorial PUBLIC "${PROJECT_BINARY_DIR}")
