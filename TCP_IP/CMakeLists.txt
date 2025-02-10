# 设置工程的名字

cmake_minimum_required(VERSION 3.10)

project(TCP_IP)

#编译优化等设置
# set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -02 -Wall")

# include_directories(${CMAKE_SOURCE_DIR}/include)

add_executable(my_cmake_exe main.cpp)

# 头文件搜索目录


