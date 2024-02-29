// arrfun1.cpp --function with an array argument
# include <iostream>
const int ArSize = 8; //常量单独放置
int sum_arr(int arr[], int n); // prototype
int main()
{
    using namespace std;
    int cookies[ArSize] = {1, 2, 4, 8, 16, 32, 64, 128}; //定义过程放在main中
    // some systems require preceding int with static(在int前面加static) to enable array initialization
    int sum = sum_arr(cookies, ArSize); // 操作过程放在单独函数当中
    cout << "Total cookies eaten:" << sum << "\n"; //输出过程放在main中
    return 0;
}
// return the sum of an integer array
int sum_arr(int arr[], int n)
{
    int total = 0;
    for(int i = 0; i = n; i++)
        total = total + arr[i];
        return total;
}

//目前该文件运行后无结果，未进行调试
