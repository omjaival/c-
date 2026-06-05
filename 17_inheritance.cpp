#include <iostream>

class Entity
{
  public:
    float X,Y;

    void Move(float xa, float ya)
    {
        X  += xa;
        Y  += ya;
    }
}

class player : public Entity
{
    public:
    const char* Name;

    void PrintName()
    {
        std::cout<<Name<<std::endl;
    }
};
int main()
{
    player player;
    player.Move(5,5);
    player.X=2;

    std::cin.get();
}