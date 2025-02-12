# 设置工程的名字

cmake_minimum_required(VERSION 3.10)

project(TCP_IP)

#编译优化等设置
# set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -02 -Wall")

# include_directories(${CMAKE_SOURCE_DIR}/include)

add_executable(my_cmake_exe main.cpp)

# 头文件搜索目录

# 添加外部库路径

# 为了适配类Unix系统，引入了pcap库，但不知道具体是怎么添加的
add_definitions(-DNET_DRIVER_PACP) # use pcap

message(STATUS "current platform: ${CMAKE_HOST_SYSTEM_NAME}") # 当前平台什么东西，不懂
if(CMAKE_HOST_SYSTEM_NAME MATCHES "Windows") # 系统宏定义（内置宏定义） 匹配了（内置语法） Windows
    add_definitions(-DSYS_PLAT_WINDOWS)
    target_link_libraries(${PROJECT_NAME} wpcap packet Ws2_32) #大概是说，当系统为Windows时，用这些库和项目名
else()
    # Linux和Mac上的特定配置
    add_definitions(-DSYS_PLAT_LINUX)
    target_link_libraries(${PROJECT_NAME} pthread pcap) #大概是说，当系统为Linux和Mac时，用这些配置
endif()



