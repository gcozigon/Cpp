/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcozigon <gcozigon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 16:29:40 by gcozigon          #+#    #+#             */
/*   Updated: 2024/01/15 15:06:01 by gcozigon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>
#include <cmath>

class Fixed
{
  private:
	int _fixed;
	static const int _stock = 8;

  public:
	Fixed();
	~Fixed();
	Fixed(Fixed const &src);
	Fixed(const int value);
	Fixed(const float value);
	
	Fixed &operator=(const Fixed &);
	int getRawBits(void) const;
	void setRawBits(int const raw);
	
	float toFloat( void ) const;
	int toInt( void ) const;
	
	void print(std::ostream &out) const;
	Fixed operator+(const Fixed &other) const;
	Fixed operator-(const Fixed &other) const;
	Fixed operator*(const Fixed &other) const;
	Fixed operator/(const Fixed &other) const;

	bool operator>(const Fixed &other);
	bool operator<(const Fixed &other);
	bool operator>=(const Fixed &other);
	bool operator<=(const Fixed &other);
	bool operator==(const Fixed &other);
	bool operator!=(const Fixed &other);
	
	Fixed &operator++();
	Fixed &operator--();
	Fixed operator++(int i);
	Fixed operator--(int i);	
	
	static const Fixed &min(const Fixed &a, const Fixed &b);
	static const Fixed &max(const Fixed &a, const Fixed &b);
	static Fixed &min(Fixed &a, Fixed &b);
	static Fixed &max(Fixed &a, Fixed &b);
	
};
std::ostream &operator<<(std::ostream &out, const Fixed &fixed);


#endif