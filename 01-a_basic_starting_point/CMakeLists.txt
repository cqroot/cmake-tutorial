# 设置所需 CMake 的最低版本为 3.10。
cmake_minimum_required(VERSION 3.10)

# 创建名为 tutorial 的项目，并设置项目版本为 1.0。
project(tutorial VERSION 1.0)

# 指定使用 C11 标准。
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED True)

# 使用配置文件。将 config.h.in 拷贝到 config.h，并替换其中的变量。
# 如果未定义该变量，则为空字符串。
configure_file(config.h.in config.h)

# 添加一个命为 Tutorial 的二进制，源文件为 tutorial.c。
add_executable(tutorial tutorial.c)

# 指定查找 include 文件的路径。
target_include_directories(tutorial PUBLIC "${PROJECT_BINARY_DIR}")
