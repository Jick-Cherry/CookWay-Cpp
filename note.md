# 记录每天学习的内容

标识符命名规则
1. 字母数字下划线
2. 首位不能是数字

整型：
short     2Byte   -32768——32767 越界循环
int       4Byte   -2^31
long long 8Byte   -2^63

sizeof 统计数据类型所占内存大小

10/315

## 基本知识点记录
### 常量修饰const
#### const int * / int const *
    所指向地址的数据不可改变
``` C
    const int * p;
    p = &a;
    p = &b;
    // *p = b; //该语句是错的，p指向地址内的数据不可改变 
```
#### int * const
    所指向的地址不可改变
``` C
    int * const p = &a;
    *p = 5;
    *p = 7;
    // p = &b; //该语句是错的，p指向的地址不可改变 
```
#### const int * const
    地址和数据均不可改变
