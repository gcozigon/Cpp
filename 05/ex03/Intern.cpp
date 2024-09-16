/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcozigon <gcozigon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 16:34:25 by gcozigon          #+#    #+#             */
/*   Updated: 2024/02/17 18:10:36 by gcozigon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern()
{
    _formNames[0] = "shrubbery creation";
    _formNames[1] = "robotomy request";
    _formNames[2] = "presidential pardon";
    _formFuncs[0] = &Intern::newShrubberyCreationForm;
    _formFuncs[1] = &Intern::newRobotomyRequestForm;
    _formFuncs[2] = &Intern::newPresidentialPardonForm;
}


Intern::Intern(Intern const &src)
{
    *this = src;
}

Intern::~Intern()
{
}

Intern &Intern::operator=(Intern const &rhs)
{
    if (this != &rhs)
    {
        for (int i = 0; i < 3; i++)
        {
            _formNames[i] = rhs._formNames[i];
            _formFuncs[i] = rhs._formFuncs[i];
        }
    }
    return (*this);
}

AForm *Intern::makeForm(std::string form, std::string target)
{
    for (int i = 0; i < 3; i++)
    {
        if (form == _formNames[i])
        {
            std::cout << "Intern creates " << form << std::endl;
            return ((this->*_formFuncs[i])(target));
        }
    }
    throw UnknownFormException();
}

std::ostream &operator<<(std::ostream &o, Intern const &rhs)
{
    (void)rhs;
    return (o);
}

const char *Intern::UnknownFormException::what() const throw()
{
    return ("Unknown form");
}

AForm *Intern::newShrubberyCreationForm(std::string target)
{
    return (new ShrubberyCreationForm(target));
}

AForm *Intern::newPresidentialPardonForm(std::string target)
{
    return (new PresidentialPardonForm(target));
}

AForm *Intern::newRobotomyRequestForm(std::string target)
{
    return (new RobotomyRequestForm(target));
}

