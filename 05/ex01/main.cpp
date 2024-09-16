/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcozigon <gcozigon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 17:25:46 by gcozigon          #+#    #+#             */
/*   Updated: 2024/02/17 12:41:55 by gcozigon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"



int main ( void )
{
		Bureaucrat test("TEST", 10);
		Bureaucrat gab("GAB", 30);
		Form formulaire_one("Formulaire_One", 10, 10);
		Form formulaire_two("Formulaire_Two", 29, 29);

		std::cout << test << gab << "\n";
		std::cout << formulaire_one << formulaire_two << "\n";

		gab.signForm(formulaire_one);
		test.signForm(formulaire_two);
		gab.signForm(formulaire_two);
		test.signForm(formulaire_one);
		
		std::cout << "\n" << formulaire_one;
		std::cout << formulaire_two << "\n";
	
	try 
	{
		Form formulaire_three("Formulaire_Three", 0, 0);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	try
	{
		Form formulaire_four("Formulaire_Four", 151, 151);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
		std::cout << "\n";
	}
	return (0);
}