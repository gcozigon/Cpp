/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcozigon <gcozigon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 11:35:31 by gcozigon          #+#    #+#             */
/*   Updated: 2024/02/21 21:36:32 by gcozigon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <cmath>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <stdlib.h>
#include <string>

ScalarConverter::ScalarConverter(std::string const &input)
	: _input(input)
{
	this->_char = 0;
	this->_int = 0;
	this->_float = 0;
	this->_double = 0;
	this->parseInput();
	this->getTypes();
	return ;
}

ScalarConverter::ScalarConverter(ScalarConverter const &src)
{
	*this = src;
}

ScalarConverter::~ScalarConverter()
{
}

ScalarConverter &ScalarConverter::operator=(ScalarConverter const &rhs)
{
	if (this != &rhs)
	{
		this->_input = rhs._input;
	}
	return (*this);
}


void ScalarConverter::displayError()
{
	std::cout << "char : impossible\n";
	std::cout << "int : impossible\n";
	if (this->_input[this->_input.length() - 1] == 'f')
		this->_input = this->_input.substr(0, this->_input.length() - 1);
	std::cout << "float : " << this->_input << "f\n";
	std::cout << "double : " << this->_input << std::endl;
}

void ScalarConverter::parseInput()
{
	if (this->_input == "nanf" || this->_input == "nan" || this->_input == "+inff" || this->_input == "+inf" || this->_input == "-inff" || this->_input == "-inf")
		displayError();
}

bool ScalarConverter::isChar()
{
	if (this->_input.length() == 1 && !isdigit(this->_input[0]))
		return (true);
	else if (this->_input.length() == 3 && this->_input[0] == '\'' && this->_input[2] == '\'' && !isdigit(this->_input[1]))
	{
		return (true);
	}	
	else
		return (false);
}

bool ScalarConverter::isInt()
{
	if (isdigit(this->_input[0]) || this->_input[0] == '-' || this->_input[0] == '+')
	{
		for (size_t i = 1; i < this->_input.length(); i++)
		{
			if (!isdigit(this->_input[i]))
				return (false);
		}
		return (true);
	}
	else
		return (false);
}

bool ScalarConverter::isFloat()
{
	if (this->_input.length() > 1 && (isdigit(this->_input[0]) || this->_input[0] == '-' || this->_input[0] == '+'))
	{
		for (size_t i = 1; i < this->_input.length(); i++)
		{
			if (!isdigit(this->_input[i]) && this->_input[i] != '.')
				return (false);
		}
		return (true);
	}
	else
		return (false);
}

bool ScalarConverter::isDouble()
{
	if (this->_input.length() > 1 && (isdigit(this->_input[0]) || this->_input[0] == '-' || this->_input[0] == '+'))
	{
		for (size_t i = 1; i < this->_input.length(); i++)
		{
			if (!isdigit(this->_input[i]) && this->_input[i] != '.')
				return (false);
		}
		return (true);
	}
	else
		return (false);
}


void ScalarConverter::getTypes()
{
	if (this->isChar())
		return (this->convertChar());
	else if (this->isInt())
		return this->convertInt();
	else if (this->isFloat())
		return this->convertFloat();
	else if (this->isDouble())
		return this->convertDouble();
}

void ScalarConverter::convertChar()
{
	std::stringstream ss;
	ss << this->_input;
	ss >> this->_char;
	if (this->_char < 32 || this->_char > 126)
		std::cout << "char : Non displayable\n";
	else
		std::cout << "char : " << this->_char << std::endl;
}

void ScalarConverter::convertInt()
{
	double i = std::atol(this->_input.c_str());
	char c = static_cast<char>(i);
	float f = static_cast<float>(i);
	double d = static_cast<double>(i);

	std::cout << "char : ";
	if (std::isprint(c))
		std::cout << "'" << c << "'\n";
	else
		std::cout << "Non displayable\n";
	if (INT_MIN <= i && i <= INT_MAX)
		std::cout << "int : " << i << "\n";
	else
		std::cout << "int : impossible\n";
	std::cout << "float : " << std::fixed << std::setprecision(1) << f << "f\n";
	std::cout << "double : " << std::fixed << std::setprecision(1) << d << "\n";
}


void ScalarConverter::convertFloat()
{
	double f = std::atof(this->_input.c_str());
	char c = static_cast<char>(f);
	int i = static_cast<int>(f);
	double d = static_cast<double>(f);

	std::cout << "char : ";
	if (std::isprint(c))
		std::cout << "'" << c << "'\n";
	else
		std::cout << "Non displayable\n";
	if (INT_MIN <= f && f <= INT_MAX)
		std::cout << "int : " << i << "\n";
	else
		std::cout << "int : impossible\n";
	std::cout << "float : " << std::fixed << std::setprecision(1) << f << "f\n";
	std::cout << "double : " << std::fixed << std::setprecision(1) << d << "\n";
}

void ScalarConverter::convertDouble()
{
	double d = std::atof(this->_input.c_str());
	char c = static_cast<char>(d);
	int i = static_cast<int>(d);
	float f = static_cast<float>(d);

	std::cout << "char : ";
	if (std::isprint(c))
		std::cout << "'" << c << "'\n";
	else
		std::cout << "Non displayable\n";
	if (INT_MIN <= d && d <= INT_MAX)
		std::cout << "int : " << i << "\n";
	else
		std::cout << "int : impossible\n";
	std::cout << "float : " << std::fixed << std::setprecision(1) << f << "f\n";
	std::cout << "double : " << std::fixed << std::setprecision(1) << d << "\n";
}
