/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcozigon <gcozigon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 12:06:36 by gcozigon          #+#    #+#             */
/*   Updated: 2024/01/15 15:05:22 by gcozigon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iomanip>

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	_fixed = 0;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::Fixed(int const value)
{
    std::cout << "Int constructor called" << std::endl;
    _fixed = roundf(value * (1 << _stock));
}

Fixed::Fixed(float const value)
{
    std::cout << "Float constructor called" << std::endl;
    _fixed = roundf(value * (1 << _stock));
}

void Fixed::print(std::ostream &out) const
{
    out << this->toFloat();
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
    fixed.print(out);
    return out;
}

Fixed &Fixed::operator=(const Fixed &src)
{
	std::cout << "Copy assignment operator called" << std::endl;
	_fixed = src.getRawBits();
	return (*this);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_fixed = raw;
}

int Fixed::getRawBits(void) const
{
	return (this->_fixed);
}

float Fixed::toFloat(void) const
{
	return ((float)_fixed / (float)(1 << _stock));
}

int Fixed::toInt(void) const
{
	return (_fixed >> _stock);
}
