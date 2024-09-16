/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcozigon <gcozigon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 12:06:36 by gcozigon          #+#    #+#             */
/*   Updated: 2024/01/15 14:57:50 by gcozigon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iomanip>

Fixed::Fixed()
{
	_fixed = 0;
}

Fixed::~Fixed()
{
}

Fixed::Fixed(const Fixed &src)
{
	*this = src;
}

Fixed::Fixed(int const value)
{
	_fixed = roundf(value * (1 << _stock));
}

Fixed::Fixed(float const value)
{
	_fixed = roundf(value * (1 << _stock));
}

void Fixed::print(std::ostream &out) const
{
	out << this->toFloat();
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
	fixed.print(out);
	return (out);
}

Fixed &Fixed::operator=(const Fixed &src)
{
	_fixed = src.getRawBits();
	return (*this);
}

void Fixed::setRawBits(int const raw)
{
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

Fixed Fixed::operator+(const Fixed &other) const
{
	return (Fixed(this->toFloat() + other.toFloat()));
}

Fixed Fixed::operator-(const Fixed &other) const
{
	return (Fixed(this->toFloat() - other.toFloat()));
}

Fixed Fixed::operator*(const Fixed &other) const
{
	return (Fixed(this->toFloat() * other.toFloat()));
}

Fixed Fixed::operator/(const Fixed &other) const
{
	return (Fixed(this->toFloat() / other.toFloat()));
}

bool Fixed::operator>(const Fixed &other)
{
	if (this->toFloat() > other.toFloat())
		return (1);
	return (0);
}

bool Fixed::operator<(const Fixed &other)
{
	if (this->toFloat() < other.toFloat())
		return (1);
	return (0);
}

bool Fixed::operator>=(const Fixed &other)
{
	if (this->toFloat() >= other.toFloat())
		return (1);
	return (0);
}

bool Fixed::operator<=(const Fixed &other)
{
	if (this->toFloat() <= other.toFloat())
		return (1);
	return (0);
}

bool Fixed::operator==(const Fixed &other)
{
	if (this->toFloat() == other.toFloat())
		return (1);
	return (0);
}

bool Fixed::operator!=(const Fixed &other)
{
	if (this->toFloat() != other.toFloat())
		return (1);
	return (0);
}

Fixed Fixed::operator++(int i)
{
	Fixed	tmp;

	(void)i;
	tmp = *this;
	this->_fixed++;
	return (tmp);
}

Fixed &Fixed::operator++(void)
{
	this->_fixed++;
	return (*this);
}
Fixed &Fixed::operator--(void)
{
	this->_fixed--;
	return (*this);
}
Fixed Fixed::operator--(int i)
{
	Fixed	tmp;
	

	(void)i;
	tmp = *this;
	this->_fixed--;
	return (tmp);
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a.toFloat() < b.toFloat())
		return (a);
	return (b);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a.toFloat() > b.toFloat())
		return (a);
	return (b);
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if (a.toFloat() < b.toFloat())
		return (a);
	return (b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if (a.toFloat() > b.toFloat())
		return (a);
	return (b);
}
