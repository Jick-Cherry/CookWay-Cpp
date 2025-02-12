#include <iostream>
#include <vector>
#include <string>

using std::vector;
using std::string;
using std::cout;
using std::endl;

int main(){
    vector<int> ivec; //ivec保存int类型的对象
    vector<vector<string>> file; //该向量的元素是vector对象

    //由于在函数内，默认初始化初值为空，Segmentation fault
    //如下赋初值后正常运行
    vector<int> ivec = {256};
    cout << ivec[0] << endl;
    
    //由于在函数内，默认初始化初值为空，Segmentation fault
    //通过如下方法为函数添加末尾值后，正常运行
    vector<int> ivec;
    ivec.push_back(512);
    cout << ivec[0] << endl;

    //指定了vector的元素数量，此时会默认全部赋0 或 null；
    //因此下文可正常运行
    vector<int> ivec(10);
    cout << ivec[0] << ivec[2] << std::endl;
    
    vector<int> ivec2(ivec);
    cout << ivec2[0] << "and" << ivec[0] << endl;

    //读取单词并存入vector
    string word;
    vector<string> text;
    while (std::cin >> word)
    {
        text.push_back(word);
    }
    
    
}