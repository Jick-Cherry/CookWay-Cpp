#include <iostream>
using namespace std;

template<class T>
class linearList
{
    public:
        virtual ~linearList(){};
        virtual bool empty() const = 0; //返回true，当且仅当线性表为空
        virtual int size() const = 0; //返回线性表的元素个数
        virtual T& get(int theIndex) const = 0;//
}

int main(int, char**)
{
    cout << "Hello, World!" << endl;

    return 0;
}

