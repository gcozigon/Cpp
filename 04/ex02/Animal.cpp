/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcozigon <gcozigon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 19:35:51 by gcozigon          #+#    #+#             */
/*   Updated: 2024/01/17 16:58:46 by gcozigon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(Animal const &src)
{
    std::cout << "Animal copy constructor called" << std::endl;
    *this = src;
}

Animal::Animal(std::string name)
{
    std::cout << "Animal parametric constructor called" << std::endl;
    this->_type = name;
}

Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
}

Animal &Animal::operator=(Animal const &rhs)
{
    if (this != &rhs)
        this->_type = rhs._type;
    return (*this);
}

void Animal::makeSound() const
{
    std::cout << "Animal makes a sound" << std::endl;
}

void Animal::setType(std::string type)
{
    this->_type = type;
}

std::string Animal::getType() const
{
    return (this->_type);
}