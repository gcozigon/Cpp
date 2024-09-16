/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcozigon <gcozigon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 11:35:40 by gcozigon          #+#    #+#             */
/*   Updated: 2024/02/21 20:50:26 by gcozigon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <string>
# define INT_MAX 2147483647
# define INT_MIN -2147483648

class ScalarConverter
{
  private:
	ScalarConverter();
	std::string _input;
	char _char;
	int _int;
	float _float;
	double _double;

  public:
	ScalarConverter(std::string const &input);
	ScalarConverter(ScalarConverter const &src);
	~ScalarConverter();
	ScalarConverter &operator=(ScalarConverter const &rhs);

	void parseInput();

	void displayError();

	void getTypes();
	bool isChar();
	bool isInt();
	bool isFloat();
	bool isDouble();
	

	void convertChar();
	void convertInt();
	void convertFloat();
	void convertDouble();
};

#endif