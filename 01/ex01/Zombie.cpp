#include "Zombie.hpp"

Zombie::Zombie()
{
	// std::cout << " Constructeur !!! " << std::endl;
}

Zombie::~Zombie()
{
	// std::cout << "Destructeur !!! " << this->name << std::endl;
}

void Zombie::announce()
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(std::string str)
{
	this->name = str;
}

std::string Zombie::getName()
{
	return (this->name);
}