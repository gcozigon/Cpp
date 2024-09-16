/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcozigon <gcozigon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 16:02:47 by gcozigon          #+#    #+#             */
/*   Updated: 2024/01/03 15:27:18 by gcozigon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::get_response(std::string str, int i)
{
	if (i == 0)
		setFirstName(str);
	else if (i == 1)
		setLastName(str);
	else if (i == 2)
		setNickName(str);
	else if (i == 3)
		setPhoneNumber(str);
	else if (i == 4)
		setDarkestSecret(str);
}

void Contact::DisplayContact()
{
	std::cout << "firstname      : " << this->firstname << std::endl;
	std::cout << "lastname       : " << this->lastname << std::endl;
	std::cout << "nickname       : " << this->nickname << std::endl;
	std::cout << "Phone Number   : " << this->phoneNumber << std::endl;
	std::cout << "darkest Secret : " << this->darkestSecret << std::endl;
}

void	Contact::setFirstName(std::string str)
{
	this->firstname = str;
};

std::string Contact::GetFirstName()
{
	if (this->firstname.length() > 10)
		return (this->firstname.substr(0, 9) + ".");
	return (this->firstname);
};

void	Contact::setLastName(std::string str)
{
	this->lastname = str;
};

std::string Contact::GetLastName()
{
	if (this->lastname.length() > 10)
		return (this->lastname.substr(0, 9) + ".");
	return (this->lastname);
};

void	Contact::setNickName(std::string str)
{
	this->nickname = str;
};

std::string Contact::GetNickName()
{
	if (this->nickname.length() > 10)
		return (this->nickname.substr(0, 9) + ".");
	return (this->nickname);
};

void	Contact::setPhoneNumber(std::string str)
{
	this->phoneNumber = str;
};

std::string Contact::GetPhoneNumber()
{
	return (this->phoneNumber);
};

void	Contact::setDarkestSecret(std::string str)
{
	this->darkestSecret = str;
};

std::string Contact::GetDarkestSecret()
{
	return (this->darkestSecret);
};

Contact::Contact()
{
}

Contact::~Contact()
{
	// std::cout << "Destructeur !!!" << std::endl;
}
