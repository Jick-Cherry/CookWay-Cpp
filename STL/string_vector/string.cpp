//输入输出流对象cin和cout在这一文件里定义
#include <iostream>

// 使用前需要包含头文件或包含标准库成员，本文中的两个库至少要包含一个才不会报错?
// #include <string>
using std::string;

using std::cin;
using std::cout;
using std::endl;
using std::getline;


int main()
{
    // 定义和初始化
    // 拷贝初始化与直接初始化的比较，推荐使用直接初始化
    // 主要靠“ = ”区分，但二者的构造函数存在不同，可能会对效率造成影响
    // https://www.cnblogs.com/citron/articles/6145350.html
    string s1; //初始化空字符串
    string s2 = s1; //s2是s1的副本，拷贝初始化
    string s3 = "hiya"; //s2是s1的副本，拷贝初始化
    // string s3("hiya");  //s2是字面值的副本，直接初始化
    string s4(10, 'c'); //s4 = 'cccccccccc'; 直接初始化

    //向string对象中读入数据，从空白结束处开始直到下一次空白为止
    //如下，键盘输入Hello World，实际只读入了Hello
    // cin >> s1;

    //也可以用如下方式，先s1，后s2
    //cin >> s1 >> s2;

    //读入全部string对象
    // while (cin >> s1)
    // {
    //     cout << s1 << endl;
    // }

    //读到换行符停止的函数getline, 但在输入流中不包含换行符
    //endl能够结束当前行输出并刷新显示缓冲区
    // string line;
    // while (getline(cin, line))
    // {
    //     cout << line <<endl;
    // }
    
    while(getline(cin, s1))
        //输出长度大于5字符的串
        if (s1.size() > 5)
        {
            cout << s1 << endl;
        }
        //输出非空串
        if (!s1.empty())
        {
            cout << s1 << endl;
        }
    //以上两个函数的返回值为string::size_type，无符号数，因此避免使用int等有符号数，避免因转换产生报错
    

}
