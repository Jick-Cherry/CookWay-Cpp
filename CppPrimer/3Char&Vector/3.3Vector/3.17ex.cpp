#include <iostream>
#include <vector>
#include <string>

using std::vector;
using std::string;

int main()
{    
    vector<string> writeObject;
    string readObject;
    char cont = 'y';

    while (std::cin >> readObject) //这里确实会一直运行下去，需要内部添加终止
    {
        writeObject.push_back(readObject);
        std::cout << "Continue? (y or n)" << std::endl;
        std::cin >> cont;
        if (cont != 'y' && cont != 'Y')
            break;
        std::cout << "Please enter the next word: " << std::endl;
        
    }
    
    for(auto &mem : writeObject)
    {
        for (auto &c : mem) //遍历其中的每一个字符
            c = toupper(c); //转写为大写字母
        std::cout << mem << std::endl;
    }

    return 0;
}