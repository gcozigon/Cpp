/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcozigon <gcozigon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 18:53:20 by gcozigon          #+#    #+#             */
/*   Updated: 2024/02/17 17:15:09 by gcozigon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm()
	: AForm("default", 145, 137)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
	: AForm(target, 145, 137)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src)
	: AForm(src)
{
	*this = src;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs)
{
	if (this != &rhs)
	{
		this->AForm::operator=(rhs);
	}
	return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (!this->getSigned())
		throw AForm::FormNotSignedException();
	if (executor.getGrade() > this->getGradeExec())
		throw AForm::GradeTooLowException();
	std::ofstream file;
	std::string filename = this->getName() + "_shrubbery";
	file.open(filename.c_str());
	if (!file.is_open())
	{
		std::cerr << "Error: could not open file" << std::endl;
		return ;
	}
	file << "                                              ." << std::endl;
	file << "                                   .         ;" << std::endl;
	file << "      .              .              ;%     ;;" << std::endl;
	file << "        ,           ,                :;%  %;" << std::endl;
	file << "         :         ;                   :;%;'     .," << std::endl;
	file << ",.        %;     %;            ;        %;'    ,;" << std::endl;
	file << "  ;       ;%;  %%;        ,     %;    ;%;    ,%'" << std::endl;
	file << "   %;       %;%;      ,  ;       %;  ;%;   ,%;" << std::endl;
	file << "    ;%;      %;        ;%;        % ;%;  ,%;" << std::endl;
	file << "     `%;.     ;%;     %;'         `;%%;.%;'" << std::endl;
	file << "      `:;%.    ;%%. %@;        %; ;@%;%'" << std::endl;
	file << "         `:%;.  :;bd%;          %;@%;'" << std::endl;
	file << "           `@%:.  :;%.         ;@@%;" << std::endl;
	file << "             `@%.  `;@%.      ;@@%;" << std::endl;
	file << "               `@%%. `@%%    ;@@%;" << std::endl;
	file << "                 ;@%. :@%%  %@@%;" << std::endl;
	file << "                   %@bd%%%bd%%:;" << std::endl;
	file << "                     #@%%%%%:;;" << std::endl;
	file << "                     %@@%%%::;" << std::endl;
	file << "                     %@@@%(o);  . '" << std::endl;
	file << "                     %@@@o%;:(.,'" << std::endl;
	file << "                 `.. %@@@o%::;" << std::endl;
	file << "                    `)@@@o%::;" << std::endl;
	file << "                     %@@(o)::;" << std::endl;
	file << "                    .%@@@@%::;" << std::endl;
	file << "                    ;%@@@@%::;." << std::endl;
	file << "               ...;%@@@@@%%:;;;;,.." << std::endl;
	file.close();
}
