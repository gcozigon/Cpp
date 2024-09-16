/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcozigon <gcozigon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 17:25:46 by gcozigon          #+#    #+#             */
/*   Updated: 2024/02/20 17:49:44 by gcozigon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main()
{
	try
	{
		std::cout << "Test if Intern make a Form doesn't exist :" << std::endl;
		std::cout << "----------------------------------------" << std::endl;
		Intern someRandomIntern;
		AForm* rrf;
		rrf = someRandomIntern.makeForm("FAKE_FORM", "Bender");
		Bureaucrat bender("Bender", 1);
		bender.signForm(*rrf);
		bender.executeForm(*rrf);

		delete rrf;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
		std::cout << "----------------------------------------" << std::endl << std::endl << std::endl;
	}

	try
	{
		std::cout << "Test if Intern make a correct Form :" << std::endl;
		std::cout << "----------------------------------------" << std::endl;
		Intern someRandomIntern;
		AForm* rrf;
		rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
		Bureaucrat bender("Bender", 1);
		bender.signForm(*rrf);
		bender.executeForm(*rrf);
		std::cout << "----------------------------------------" << std::endl;
		delete rrf;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}