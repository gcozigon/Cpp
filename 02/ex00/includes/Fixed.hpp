/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcozigon <gcozigon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 16:29:40 by gcozigon          #+#    #+#             */
/*   Updated: 2024/01/11 18:48:32 by gcozigon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>

class Fixed
{
  private:
	int i;
	static const int i_const = 8;
  public:
	Fixed();
	~Fixed();
	Fixed(const Fixed &);
	Fixed &operator=(const Fixed &);
	int getRawBits(void) const;
	void setRawBits(int const raw);
};

#endif