#include <iostream>
int divide (int a,int b)
{
    return a/b;
}

void dividefunction(int a, int b)
{
    int result = divide(a,b);
    std::cout<< result << std::endl;
}
int main()
{
    dividefunction(50,20);
    std::cin.get();
}
