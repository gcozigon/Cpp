/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcozigon <gcozigon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 16:20:59 by gcozigon          #+#    #+#             */
/*   Updated: 2024/01/16 21:54:59 by gcozigon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "../includes/FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap()
    : ClapTrap()
{
    this->_HitPoints = 100;
    this->_EnergyPoints = 100;
    this->_AttackDamage = 30;
    std::cout << "FragTrap " << this->_Name << " is constructed!" << std::endl;
}

FragTrap::FragTrap(std::string name)
    : ClapTrap(name)
{
    this->_HitPoints = 100;
    this->_EnergyPoints = 100;
    this->_AttackDamage = 30;
    std::cout << "FragTrap " << this->_Name << " is constructed!" << std::endl;
}

FragTrap::FragTrap(const FragTrap &src)
{
    *this = src;
    std::cout << "FragTrap " << this->_Name << " is constructed by copy!" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << this->_Name << " is destroyed!" << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const &rhs)
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

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << this->_Name << " is asking for high fives!" << std::endl;
}

void FragTrap::attack(std::string const &target)
{
    if (this->_EnergyPoints > 0)
    {
        std::cout << "FragTrap " << this->_Name << " attacks " << target << " causing " << this->_AttackDamage << " damage!" << std::endl;
        this->_EnergyPoints--;
    }
}
