/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcozigon <gcozigon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 19:50:47 by gcozigon          #+#    #+#             */
/*   Updated: 2024/01/19 18:36:13 by gcozigon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(): Animal()
{
    std::cout << "Dog default constructor called" << std::endl;
    this->_type = "Dog";
}

Dog::Dog(Dog const &src)
{
    std::cout << "Dog copy constructor called" << std::endl;
    *this = src;
}

Dog::Dog(std::string name) : Animal(name)
{
    std::cout << "Dog parametric constructor called" << std::endl;
    this->_type = name;
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
}

Dog &Dog::operator=(Dog const &rhs)
{
    if (this != &rhs)
        this->_type = rhs._type;
    return (*this);
}

void Dog::makeSound() const
{
    std::cout << "Dog makes a sound" << std::endl;
}
