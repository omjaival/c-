#include<iostream>
#include<cstring>

#include<stdlib.h>

int main()
{
      using namespace std::string_literals;

      std::u32string name0 = U"Prabhas"s + U"Raju";

      const char* example = R"(Line1
    Line2
    Line3
    Line4)";

      const char* name  = u8"Prabhas";
      const wchar_t* name2 = L"Prabhas";

      const char16_t* name3 = u"Prabhas";
      const char32_t* name4 = U"Prabhas";

      std::cout << name0 << std::endl;
      std::cin.get();
}