
#include <stdint.h>
#include <time.h>

//系统硬件配置
//不同网卡配置，共两块网卡
//不太明白这里是在干什么
#if 1
static const char netdev0_ip[] = "192.168.74.2";
static const char netdev0_gw[] = "192.168.74.1";
static const char friend0_ip[] = "192.168.74.3";
static const char netdev0_phy_ip[] = "192.168.74.1";//用于收发包的真实网卡ip地址，在qemu上不需要使用，不懂
static const char netdev0_mask[] = "255.255.255.0";
static const uint8_t netdev0_hwaddr[] = {0x00, 0x50, 0x56, 0xc0, 0x00, 0x11}; //此处数据应根据实际情况修改

#else
static const char netdev0_ip[] = "192.168.74.2";
static const char netdev0_gw[] = "192.168.74.1";
static const char friend0_ip[] = "192.168.74.3";
static const char netdev0_phy_ip[] = "192.168.74.1";//用于收发包的真实网卡ip地址，在qemu上不需要使用，不懂
static const char netdev0_mask[] = "255.255.255.0";

#endif


#if 1

#else

#include <windows.h> //不知道是什么头文件
#include <pcap.h>
#include <stdio.h>   //这里其实很想替换成cstdio看看效果
#include <string.h>

typedef DWORD net_time_t; //时间类型



#endif




