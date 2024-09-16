#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon)
{
	this->_name= name;
	this->_weapon = &weapon;
}

HumanA::~HumanA()
{
	// std::cout << "destructor called" << std::endl;
}

void HumanA::attack()
{
	std::cout << getName() << " attacks with their " << _weapon->getType() << std::endl;
}

void	HumanA::setName(std::string str)
{
	this->_name = str;
}

std::string HumanA::getName()
{
	return (this->_name);
}
Weapon	HumanA::getWeapon(void)
{
	return (*_weapon);
}
