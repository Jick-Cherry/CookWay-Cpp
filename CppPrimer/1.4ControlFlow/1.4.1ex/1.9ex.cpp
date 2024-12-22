#include <iostream>

int main(){
    int i = 50;
    int sum = 0;
    while (i < 101) //101 = 100 + 1
    {
        sum += i;
        i++;
    }
    std::cout << "Sum of 50 to 100 inclusive is "
            << sum << std::endl;
    return 0;
}