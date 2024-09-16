/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcozigon <gcozigon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 12:06:36 by gcozigon          #+#    #+#             */
/*   Updated: 2024/01/11 18:49:21 by gcozigon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iomanip>

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->i = 0;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}


Fixed::Fixed(const Fixed& src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed& Fixed::operator=(const Fixed& src)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->i = src.getRawBits();
	return (*this);
}

void Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called" << std::endl;
	this->i = raw;
}

int Fixed::getRawBits( void ) const
{

	std::cout << "getRawBits member function called" << std::endl;
	return (this->i);
}