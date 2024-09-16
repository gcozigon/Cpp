/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcozigon <gcozigon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 18:34:35 by gcozigon          #+#    #+#             */
/*   Updated: 2024/01/16 22:10:55 by gcozigon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

ClapTrap::ClapTrap()
	: _Name("Default"), _HitPoints(10), _EnergyPoints(10), _AttackDamage(0)
{
	std::cout << "ClapTrap " << this->_Name << " is created!" << std::endl;
}

ClapTrap::ClapTrap(const std::string &Name)
	: _HitPoints(10), _EnergyPoints(10), _AttackDamage(0)
{
	if (Name == "")
		this->_Name = "Default";
	else
		this->_Name = Name;
    std::cout << "ClapTrap " << this->_Name << " is created!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &src)
{
	*this = src;
	std::cout << "ClapTrap " << this->_Name << " is created by copy!" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << this->_Name << " is destroyed!" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &rhs)
{
	if (this != &rhs)
	{
		this->_Name = rhs._Name;
		this->_HitPoints = rhs._HitPoints;
		this->_EnergyPoints = rhs._EnergyPoints;
		this->_AttackDamage = rhs._AttackDamage;
	}
	return (*this);
}

void ClapTrap::attack(const std::string &target)
{
	if (this->_EnergyPoints > 0)
	{
		std::cout << "ClapTrap " << this->_Name << " attacks " << target << " causing " << this->_AttackDamage << " damage!" << std::endl;
		this->_EnergyPoints--;
	}
	else
		std::cout << "ClapTrap " << this->_Name << " has no energy points left and can't attack!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int nb)
{
	if (this->_HitPoints > 0)
	{
		if (nb >= this->_HitPoints)
        {
			this->_HitPoints = 0;
            std::cout << "\033[1;31mGame over for ClapTrap " << this->_Name << "!\033[0m" << std::endl;
        }
		else
			this->_HitPoints -= nb;
		std::cout << "ClapTrap " << this->_Name << " takes " << nb << " damage. Remaining hit points: " << this->_HitPoints << std::endl;
	}
	else
		std::cout << "ClapTrap " << this->_Name << " has no hit points left and can't take any more damage!" << std::endl;
}


void ClapTrap::beRepaired(unsigned int nb)
{
	if (nb + this->_HitPoints > 10)
		nb = 10 - this->_HitPoints;
	if (this->_EnergyPoints > 0 && nb > 0)
	{
		this->_HitPoints += nb;
		this->_EnergyPoints--;
		std::cout << "ClapTrap " << this->_Name << " is repaired for " << nb << " hit points. Remaining hit points: " << this->_HitPoints << std::endl;
	}
	else if (this->_EnergyPoints == 0)
		std::cout << "ClapTrap " << this->_Name << " has no energy points left and can't be repaired!" << std::endl;
	else
		std::cout << "ClapTrap " << this->_Name << " is already at full health!" << std::endl;
}

std::string ClapTrap::getName() const
{
	return (this->_Name);
}

unsigned int ClapTrap::getHitPoints() const
{
	return (this->_HitPoints);
}

unsigned int ClapTrap::getEnergyPoints() const
{
	return (this->_EnergyPoints);
}

unsigned int ClapTrap::getAttackDamage() const
{
	return (this->_AttackDamage);
}


void ClapTrap::setName(std::string name)
{
	this->_Name = name;
}

void ClapTrap::setHitPoints(unsigned int hitPoints)
{
	this->_HitPoints = hitPoints;
}

void ClapTrap::setEnergyPoints(unsigned int energyPoints)
{
	this->_EnergyPoints = energyPoints;
}

void ClapTrap::setAttackDamage(unsigned int attackDamage)
{
	this->_AttackDamage = attackDamage;
}
