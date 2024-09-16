/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcozigon <gcozigon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 17:25:46 by gcozigon          #+#    #+#             */
/*   Updated: 2024/02/20 17:33:32 by gcozigon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main ( void )
{
	try
	{
		Bureaucrat TEST1("TEST1", 1);
		Bureaucrat TEST2("TEST2", 1);
		Bureaucrat TEST3("TEST3", 5);
		std::cout << "\n************ TEST IF ALL IS CORRECT (SIGNED AND LEVEL OK) ************\n";
		AForm *form1 = new ShrubberyCreationForm("T1");
		TEST1.signForm(*form1);
		TEST1.executeForm(*form1);
		std::cout << "\n";
		AForm *form2 = new RobotomyRequestForm("T2");
		TEST2.signForm(*form2);
		TEST2.executeForm(*form2);
		std::cout << "\n";
		AForm *form3 = new PresidentialPardonForm("T3");
		TEST3.signForm(*form3);
		TEST3.executeForm(*form3);
		std::cout << "\n\n";
		delete form1;
		delete form2;
		delete form3;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	try
	{
		Bureaucrat b1("b1", 1);
		Bureaucrat b2("b2", 1);
		Bureaucrat b3("b3", 5);
		std::cout << "\n************ TEST IF FORM IS NOT SIGNED ************\n";
		AForm *form4 = new ShrubberyCreationForm("bad_b1form");
		b1.executeForm(*form4);
		std::cout << "\n";
		AForm *form5 = new RobotomyRequestForm("bad_b2form");
		b2.executeForm(*form5);
		std::cout << "\n";
		AForm *form6 = new PresidentialPardonForm("bad_b3form");
		b3.executeForm(*form6);
		std::cout << "\n\n";
		delete form4;
		delete form5;
		delete form6;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	try
	{
		std::cout << "\n************ TEST IF GRADE IS TOO LOW ************\n";
		Bureaucrat b4("b4", 145);
		AForm *form7 = new ShrubberyCreationForm("bad_b4form");
		b4.signForm(*form7);
		b4.executeForm(*form7);
		std::cout << "\n";
		Bureaucrat b5("b5", 137);
		AForm *form8 = new RobotomyRequestForm("bad_b5form");
		b5.signForm(*form8);
		b5.executeForm(*form8);
		std::cout << "\n";
		Bureaucrat b6("b6", 26);
		AForm *form9 = new PresidentialPardonForm("bad_b6form");
		b6.signForm(*form9);
		b6.executeForm(*form9);
		std::cout << "\n\n";
		delete form7;
		delete form8;
		delete form9;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
