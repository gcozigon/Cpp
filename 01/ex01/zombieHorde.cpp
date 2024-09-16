#include "Zombie.hpp"
#include <iostream>
#include <string>
#include <iomanip>

Zombie* zombieHorde(int N, std::string name)
{
    if (N < 1)
    {
        std::cout << "Not a valid integer" << std::endl;
        return (NULL);
    }
    Zombie* zombie = new Zombie[N];
    for (int i = 0; i < N; i++)
        zombie[i].setName(name);
    return (zombie);
}
