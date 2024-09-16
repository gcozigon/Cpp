/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Amateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcozigon <gcozigon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 14:48:09 by gcozigon          #+#    #+#             */
/*   Updated: 2024/01/19 18:27:06 by gcozigon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const &type) : _type(type)
{
    std::cout << "AMateria parametric constructor called" << std::endl;
}

AMateria::AMateria(AMateria const &src)
{
    std::cout << "AMateria copy constructor called" << std::endl;
    *this = src;
}

AMateria::~AMateria()
{
    std::cout << "AMateria destructor called" << std::endl;
}

AMateria &AMateria::operator=(AMateria const &rhs)
{
    std::cout << "AMateria assignation operator called" << std::endl;
    if (this != &rhs)
        this->_type = rhs.getType();
    return (*this);
}

std::string const &AMateria::getType() const
{
    return (this->_type);
}

void AMateria::use(ICharacter &target)
{
    std::cout << "* Amateria USE " << target.getName() << " *" << std::endl;
}