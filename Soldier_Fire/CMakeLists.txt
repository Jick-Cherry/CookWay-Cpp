cmake_minimum_required(VERSION 3.0)

project(SOLDIERFIRE)

#编译优化等设置
# set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -02 -Wall")

include_directories(${CMAKE_SOURCE_DIR}/include)

add_executable(my_cmake_exe main.cpp src/Gun.cpp src/Soldier.cpp)
