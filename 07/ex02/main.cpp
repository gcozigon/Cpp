/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcozigon <gcozigon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 15:19:55 by gcozigon          #+#    #+#             */
/*   Updated: 2024/02/24 11:48:30 by gcozigon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>
#include <string>
#include <exception>
#include <stdexcept>
#include <typeinfo>

int main()
{
	try
	{
		std::cout << std::endl << "Array of 5 int";
		Array<int> a(5);
		a[0] = 1;
		a[1] = 2;
		a[2] = 3;
		a[3] = 4;
		a[4] = 5;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Array<float> a(5);
		std::cout << std::endl << "Array of 5 float";
		a[0] = 1.1;
		// std::cout << "\n" << a[0] << std::endl;
		a[1] = 2.2;
		a[2] = 3.3;
		a[3] = 4.4;
		a[4] = 5.5;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Array<std::string> a(5);
		std::cout << std::endl << "Array of 5 string (test with out of limits)";
		a[0] = "ab";
		a[1] = "cd";
		a[2] = "ef";
		a[3] = "gh";
		a[4] = "ij";
		a[5] = "kl";
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl << std::endl;
	}
	return 0;
}