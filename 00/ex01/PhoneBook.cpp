/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcozigon <gcozigon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 16:30:40 by gcozigon          #+#    #+#             */
/*   Updated: 2023/12/19 17:24:44 by gcozigon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iomanip>

PhoneBook::PhoneBook()
{
	index = 0;
	nb_add = 0;
}

PhoneBook::~PhoneBook()
{
	// std::cout << "Destructeur !!!" << std::endl;
}

void PhoneBook::PutQuestions(int i)
{
	if (i == 0)
		std::cout << "What is your first name ?" << std::endl;
	if (i == 1)
		std::cout << "What is your last name ?" << std::endl;
	if (i == 2)
		std::cout << "What is your nickname ?" << std::endl;
	if (i == 3)
		std::cout << "What is your Number ?" << std::endl;
	if (i == 4)
		std::cout << "What is your darkest secret ?" << std::endl;
	if (i == 5)
		std::cout << "Select index" << std::endl;
	if (i == 6)
		std::cout << "Select an option: ADD, SEARCH, EXIT" << std::endl;
}

void PhoneBook::add()
{
	int	i;

	std::string str;
	i = 0;
	if (this->index == 8)
		this->index = 0;
	while (i < 5)
	{
		PutQuestions(i);
		getline(std::cin, str);
		if (str.empty())
		{
			std::cout << "*Warning* : don't put an empty response\n\n\n" << std::endl;
			return;
		}
		_contacts[this->index].get_response(str, i);
		i++;
	}
	this->index++;
	this->nb_add++;
	if (this->nb_add > 8)
		this->nb_add = 8;
	std::cout << "\nAdding a new contact to the phone book." << std::endl;
}


bool isDigit(const std::string& str) 
{
    for (char c : str)
	{
        if (!std::isdigit(c)) 
            return false;
    }
    return true;
}

void PhoneBook::search()
{
	std::string str;

	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|     index|first name| last name|  nickname|" << std::endl;
	for (int i = 0; i < this->nb_add; i++)
		std::cout << "|" << std::setw(10) << i << "|" << std::setw(10) << _contacts[i].GetFirstName() << "|" << std::setw(10) << _contacts[i].GetLastName() << "|" << std::setw(10) << _contacts[i].GetNickName() << "|" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "\n\n\n";
	
	PutQuestions(5);
	getline(std::cin, str);
	if (str.empty())
	{
		std::cout << "*Warning* : don't put an empty response\n\n\n" << std::endl;
		return;
	}
    if (!isDigit(str) || str.length() > 1) {
        std::cout << "Enter a valid digit" << std::endl;
        return;
    }
	int num = atoi(&str[0]);
	if (num >= nb_add)
	{
		std::cout << "Select an existing index" << std::endl;	
		return ;
	}
	std::cout << "Converted number: " << num << std::endl;
	_contacts[num].DisplayContact();
}