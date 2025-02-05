/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcozigon <gcozigon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 15:22:14 by gcozigon          #+#    #+#             */
/*   Updated: 2024/01/19 18:26:50 by gcozigon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"


Ice::Ice() : AMateria("ice")
{
    std::cout << "Ice default constructor called" << std::endl;
}

Ice::Ice(Ice const &src) : AMateria(src)
{
    std::cout << "Ice copy constructor called" << std::endl;
    (void)src;
    //here
}

Ice::~Ice()
{
    std::cout << "Ice destructor called" << std::endl;
}

Ice &Ice::operator=(Ice const &rhs)
{
    std::cout << "Ice assignation operator called" << std::endl;
    if (this != &rhs)
        this->_type = rhs.getType();
    return (*this);
}

AMateria *Ice::clone() const
{
    return (new Ice(*this));
}

void Ice::use(ICharacter &target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
