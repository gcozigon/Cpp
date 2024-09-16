/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcozigon <gcozigon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 16:32:07 by gcozigon          #+#    #+#             */
/*   Updated: 2024/01/10 18:20:19 by gcozigon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HarlFilter.hpp"
#include <cstdlib>
#include <iostream>
#include <string>

bool	isDigit(const std::string &str)
{
	for (int i = 0; str[i]; i++)
	{
		if (!std::isdigit(str[i]))
			return (false);
	}
	return (true);
}

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "*Error* : wrong number of arguments" << std::endl;
		return (0);
	}
	Harl	test;
	std::string str;
	str = av[1];
	std::string tab[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	
	
	if (str.empty() || (str != "DEBUG" && str != "INFO" && str != "WARNING" && str != "ERROR"))
	{
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		return (0);
	}
	test.complain(str);
	return (0);
}
