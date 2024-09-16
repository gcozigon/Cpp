/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcozigon <gcozigon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 15:24:36 by gcozigon          #+#    #+#             */
/*   Updated: 2024/01/19 18:26:38 by gcozigon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
    std::cout << "Cure default constructor called" << std::endl;
}

Cure::Cure(Cure const &src) : AMateria(src)
{
    std::cout << "Cure copy constructor called" << std::endl;
}

Cure::~Cure()
{
    std::cout << "Cure destructor called" << std::endl;
}

Cure &Cure::operator=(Cure const &rhs)
{
    std::cout << "Cure assignation operator called" << std::endl;
    if (this != &rhs)
        this->_type = rhs.getType();
    return (*this);
}

AMateria *Cure::clone() const
{
    return (new Cure(*this));
}

void Cure::use(ICharacter &target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

