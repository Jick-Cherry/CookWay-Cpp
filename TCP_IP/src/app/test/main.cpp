/**
 * @file main.cpp
 * @author Cherry (jick-cherry.github.com)
 * @brief 完成一些简单的测试程序，对比教程文件，引入了C风格的C标准库，采用C++方式编写实现
 * @version 0.1
 * @date 2024-12-28
 * 
 * @copyright Copyright (c) 2024
 * 
 */
#include <iostream> //add
#include <cstdio> //change cpp style
#include "sys_plat.h" //自定义平台相关头文件，封装了部分pcap接口

/// @brief 
/// @param  netdev0_phy_ip ip address
/// @param  netdev0_hwaddr MAC address
int main(){
    pcap_t * pcap = pcap_device_open(netdev0_phy_ip, netdev0_hwaddr);
    while (pcap)
    {
        static uint8_t buffer[1024];

        plat_printf();
    }
    
    std::cout << "Hello, TCP_IP"; //change cpp style
    return 0;
}