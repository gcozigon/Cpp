/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcozigon <gcozigon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 20:03:36 by gcozigon          #+#    #+#             */
/*   Updated: 2024/01/16 21:53:16 by gcozigon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"
#include "../includes/ScavTrap.hpp"

ScavTrap::ScavTrap()
	: ClapTrap()
{
	this->_HitPoints = 100;
	this->_EnergyPoints = 50;
	this->_AttackDamage = 20;
	this->_Name = "Default";
	std::cout << "ScavTrap " << this->_Name << " is constructed!" << std::endl;
}

ScavTrap::ScavTrap(const std::string &Name)
	: ClapTrap()
{
	if (Name == "")
		this->_Name = "Default";
	else
		this->_Name = Name;
	this->_HitPoints = 100;
	this->_EnergyPoints = 50;
	this->_AttackDamage = 20;
	std::cout << "ScavTrap " << this->_Name << " is constructed!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &src)
{
	*this = src;
	std::cout << "ScavTrap " << this->_Name << " is constructed by copy!" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->_Name << " is destroyed!" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &rhs)
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

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->_Name << " is now in Gatekeeper mode!" << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
	if (this->_EnergyPoints > 0)
	{
		std::cout << "ScavTrap " << this->_Name << " attacks " << target << " causing " << this->_AttackDamage << " damage!" << std::endl;
		this->_EnergyPoints--;
	}
}