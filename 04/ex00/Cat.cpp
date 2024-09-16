/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcozigon <gcozigon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 19:50:15 by gcozigon          #+#    #+#             */
/*   Updated: 2024/01/19 18:36:00 by gcozigon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
    std::cout << "Cat default constructor called" << std::endl;
    this->_type = "Cat";
}

Cat::Cat(std::string name) : Animal(name)
{
    std::cout << "Cat parametric constructor called" << std::endl;
    this->_type = name;
}

Cat::Cat(Cat const &src)
{
    std::cout << "Cat copy constructor called" << std::endl;
    *this = src;
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
}

Cat &Cat::operator=(Cat const &rhs)
{
    if (this != &rhs)
        this->_type = rhs._type;
    return (*this);
}

void Cat::makeSound() const
{
    std::cout << "Cat makes a sound" << std::endl;
}
