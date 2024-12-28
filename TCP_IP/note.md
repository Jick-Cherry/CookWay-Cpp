#

## 

## 3. 基本概念和原理，学习目标
1. 数据包收发：利用pcap往网络上收发数据包
   1. 了解相关操作
   2. 学习Wireshark的使用
2. 多线程环境：熟悉操作系统抽象层
   1. 熟悉操作系统的多线程多任务编程环境
3. 熟悉基本的socket编程API和TCP/IP体系结构
   1. 创建一个基于TCP协议的echo服务器

### done

以下内容参考docs.pingcode.com/baike/1307675

1. apt install libpcap-dev
2. 在编译环境中添加系统默认头文件路径(undone)
   1. 系统默认头文件路径 
        /usr/include
   2. 默认库文件路径
        /usr/lib
        ``` 
        gcc -o myprogram myprogram.c  -lpcaps
        ```