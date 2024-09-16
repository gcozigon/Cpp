/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcozigon <gcozigon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 16:32:07 by gcozigon          #+#    #+#             */
/*   Updated: 2023/12/12 16:35:47 by gcozigon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>

int	main(void)
{
	std::string cmd;
	PhoneBook PhoneBook;
	while (1)
	{
		PhoneBook.PutQuestions(6);
		getline(std::cin, cmd);
		if (cmd == "EXIT" || std::cin.eof())
			return (1);
		if (cmd == "ADD")
			PhoneBook.add();
		else if (cmd == "SEARCH")
			PhoneBook.search();
		else if (cmd.empty())
		{
			continue;
		}
	}
}
