/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcozigon <gcozigon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 16:32:07 by gcozigon          #+#    #+#             */
/*   Updated: 2024/01/13 16:16:40 by gcozigon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int	main(void)
{
	Fixed	a;

	Fixed const b(Fixed(5.05f) * Fixed(2));
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max(a, b) << std::endl;
	return (0);
}

// int	main(void)
// {
// 	Fixed a(10);
// 	Fixed b(2.1f);
//  	std::cout << "Result: " << a + b << std::endl;
// 	std::cout << "Result: " << a - b << std::endl;
// 	std::cout << "Result: " << a * b * a - b * b << std::endl;
// 	std::cout << "Result: " << a / b << std::endl;

// 	Fixed c(42);
// 	std::cout << "\n\n" << std::endl;
// 	std::cout << "Result: " << ++c << std::endl;
// 	std::cout << "Result: " << --c << std::endl;

// 	std::cout << "Result: " << c++ << std::endl;
// 	std::cout << "Result: " << c-- << std::endl;

// 	std::cout << "\n\n" << std::endl;
// 	if (a > b)
// 		std::cout << "a > b" << std::endl;

// 	if (a < b)
// 		std::cout << "a < b" << std::endl;

// 	if (a >= b)
// 		std::cout << "a >= b" << std::endl;

// 	if (a <= b)
// 		std::cout << "a <= b" << std::endl;

// 	if (a == b)
// 		std::cout << "a == b" << std::endl;

// 	if (a != b)
// 		std::cout << "a != b" << std::endl;

// 	std::cout << "\n\n" << std::endl;

// 	std::cout << "min(a, b): " << Fixed::min(a, b) << std::endl;
// 	std::cout << "max(a, b): " << Fixed::max(a, b) << std::endl;

// 	std::cout << "\n\n" << std::endl;
// 	return (0);
// }
