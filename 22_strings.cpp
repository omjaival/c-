#include <iostream>
#include <string>

void PrintString(const std::string& string)
{
    std::cout << string <<  std::endl;
}

int main()
{
    std::string  name = std::string( "Prabhas") + "hello";
    PrintString(name);
    bool contains =  name.find("ha") != std::string::npos;
    std::cout << name << std::endl;

    std::cin.get();
}