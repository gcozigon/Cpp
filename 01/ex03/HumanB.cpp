#include "HumanB.hpp"

HumanB::HumanB(std::string name): _name(name)
{
	this->_weapon = NULL;
	// std::cout << "Je suis " << name << std::endl;
}

HumanB::~HumanB()
{
	// std::cout << "Destructor called" << std::endl;
}

void HumanB::attack()
{
	if (this->_weapon)
		std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}

void	HumanB::setName(std::string str)
{
	this->_name = str;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
}

std::string HumanB::getName()
{
	return (this->_name);
}