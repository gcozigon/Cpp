/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcozigon <gcozigon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 16:30:40 by gcozigon          #+#    #+#             */
/*   Updated: 2024/01/10 14:10:03 by gcozigon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iomanip>

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

