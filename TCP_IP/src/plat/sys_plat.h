#include <pcap.h> //这个引用是我猜的，未必正确
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

#define plat_strlen        kernel_strlen
#define plat_strcpy        kernel_strcpy
#define plat_strncpy       kernel_strncpy
#define plat_strcmp        kernel_strcmp
#define plat_stricmp       kernel_stricmp
#define plat_memset        kernel_memset
#define plat_memcpy        kernel_memcpy
#define plat_memcmp        kernel_memcmp
#define plat_sprintf       kernel_sprintf
#define plat_vsprintf      kernel_vsprintf
#define plat_printf        kernel_printf

#else

#include <windows.h> //不知道是什么头文件
#include <pcap.h>
#include <stdio.h>   //这里其实很想替换成cstdio看看效果
#include <string.h>

typedef DWORD net_time_t; //时间类型




#define plat_strlen        strlen
#define plat_strcpy        strcpy
#define plat_strncpy       strncpy
#define plat_strcmp        strcmp
#define plat_stricmp       _stricmp
#define plat_memset        memset
#define plat_memcpy        memcpy
#define plat_memcmp        memcmp
#define plat_sprintf       sprintf
#define plat_vsprintf      vsprintf
#define plat_printf        printf

#endif




