//#include <iostream>

//不引用头文件，会因找不到命名空间报错
#include <vector>

using std::vector;

vector<int> ivec;
vector<int> ivec2(ivec);

