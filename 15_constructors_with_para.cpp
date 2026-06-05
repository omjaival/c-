#include <iostream>

class Entity
{
public:
    float X, Y;

    Entity()
    {

    }

    Entity(float x, float y)
    {
        X = x;
        Y = y;
    }

    void print()
    {
        std::cout << X << "," << Y<< std::endl;
    }
};
int main()
{
    Entity e(10.0f,50.0f);
    e.print();
    std::cin.get();
}