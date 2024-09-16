/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcozigon <gcozigon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 15:56:09 by gcozigon          #+#    #+#             */
/*   Updated: 2024/01/10 17:28:50 by gcozigon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	this->_type = type;
}

Weapon::Weapon()
{
	// std::cout << "Constructor called" << std::endl; 
}

Weapon::~Weapon()
{
	// std::cout << "Destructor called" << std::endl; 
}

void Weapon::setType(std::string type)
{
	this->_type = type;
}

const std::string Weapon::getType()
{
	if (this->_type.empty())
		return ("no type");
	return (this->_type);
}
