#include <iostream>
#include "Sales_item.h"

int main()
{
    //保存下一条交易记录的变量
    Sales_item total;
    //读入第一条交易记录，并确保有数据可以处理
    if (std::cin >> total)
    {
        //保存和的变量
        Sales_item trans;
        //读入并处理剩余交易记录
        while (std::cin >> trans)
        {
            //如果仍在处理相同的书
            if(total.isbn() == trans.isbn())
                //更新总销售额
                total += trans;
            else
            {
                //打印前一本书的结果
                std::cout << total << std::endl;
                //total表示下一本书的销售额
                total = trans;
            }
        }
        std::cout << total << std::endl; //打印最后一本书的结果
    } 
    else {
        //没有输入！警告读者
        std::cerr << "No data?!" << std::endl;
        return -1; //表示失败
    }

    return 0;
}