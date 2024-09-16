/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcozigon <gcozigon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 17:02:56 by gcozigon          #+#    #+#             */
/*   Updated: 2024/01/19 18:36:51 by gcozigon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

WrongCat::WrongCat(): WrongAnimal()
{
    std::cout << "WrongCat default constructor called" << std::endl;
    this->_type = "WrongCat";
}

WrongCat::WrongCat(WrongCat const &src)
{
    std::cout << "WrongCat copy constructor called" << std::endl;
    *this = src;
}

WrongCat::WrongCat(std::string name) : WrongAnimal(name)
{
    std::cout << "WrongCat parametric constructor called" << std::endl;
    this->_type = name;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat &WrongCat::operator=(WrongCat const &rhs)
{
    if (this != &rhs)
        this->_type = rhs._type;
    return (*this);
}

void WrongCat::makeSound() const
{
    std::cout << "WrongCat makes a sound" << std::endl;
}