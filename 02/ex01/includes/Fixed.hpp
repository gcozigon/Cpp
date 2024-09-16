/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcozigon <gcozigon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 16:29:40 by gcozigon          #+#    #+#             */
/*   Updated: 2024/01/12 13:08:48 by gcozigon         ###   ########.fr       */
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
	Fixed(const Fixed &);
	Fixed(const int value);
	Fixed(const float value);
	
	Fixed &operator=(const Fixed &);
	int getRawBits(void) const;
	void setRawBits(int const raw);
	
	float toFloat( void ) const;
	int toInt( void ) const;
	
	void print(std::ostream &out) const;
	
};
std::ostream &operator<<(std::ostream &out, const Fixed &fixed);

#endif