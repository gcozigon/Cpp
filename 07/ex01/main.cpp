/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcozigon <gcozigon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 14:39:17 by gcozigon          #+#    #+#             */
/*   Updated: 2024/02/24 11:32:56 by gcozigon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>
#include <string>
#include <typeinfo>
#include <iomanip>

int	main(void)
{
	int intArray[8] = {1, 1, 2, 3, 5, 8, 13, 21};
	float floatArray[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
	char charArray[5] = {'h', 'e', 'l', 'l', 'o'};
	std::string stringArray[3] = {"Hello", "World", "!"};

	std::cout << "intArray: ";
	iter(intArray, 8, print);
	std::cout << std::endl;
	std::cout << "floatArray: ";
	iter(floatArray, 5, print);
	std::cout << std::endl;
	std::cout << "charArray: ";
	iter(charArray, 5, print);
	std::cout << std::endl;
	std::cout << "stringArray: ";
	iter(stringArray, 3, print);
	std::cout << std::endl;
	

	
	return (0);
}