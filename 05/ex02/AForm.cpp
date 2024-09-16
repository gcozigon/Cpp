/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcozigon <gcozigon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 20:00:43 by gcozigon          #+#    #+#             */
/*   Updated: 2024/02/17 16:47:10 by gcozigon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : _name("default"), _signed(false), _gradeSign(1), _gradeExec(1)
{
}


AForm::~AForm()
{
}

AForm::AForm(std::string name, int gradeSign, int gradeExec)
    : _name(name), _signed(false), _gradeSign(gradeSign), _gradeExec(gradeExec) {
    if (gradeSign < 1 || gradeExec < 1)
        throw AForm::GradeTooHighException();
    else if (gradeSign > 150 || gradeExec > 150)
        throw AForm::GradeTooLowException();
}

AForm::AForm(AForm const &src)
    : _name(src.getName()), _signed(src.getSigned()), _gradeSign(src.getGradeSign()), _gradeExec(src.getGradeExec()) {
    *this = src;
}
AForm &AForm::operator=(AForm const &rhs)
{
    if (this != &rhs)
    {
        this->_signed = rhs.getSigned();
    }
    return (*this);
}

std::string AForm::getName() const
{
    return (this->_name);
}

bool AForm::getSigned() const
{
    return (this->_signed);
}

int AForm::getGradeSign() const
{
    return (this->_gradeSign);
}

int AForm::getGradeExec() const
{
    return (this->_gradeExec);
}

void AForm::beSigned(Bureaucrat &bureaucrat)
{
    if (bureaucrat.getGrade() > this->_gradeSign)
        throw AForm::GradeTooLowException();
    else
        this->_signed = true;
}

std::ostream &operator<<(std::ostream &o, AForm const &rhs)
{
    o << rhs.getName() << " is ";
    if (rhs.getSigned())
        o << "signed";
    else
        o << "not signed";
    o << " and requires a grade " << rhs.getGradeSign() << " to be signed and a grade " << rhs.getGradeExec() << " to be executed." << std::endl;
    return (o);
}

const char *AForm::GradeTooHighException::what() const throw()
{
    return ("Grade is too high");
}

const char *AForm::GradeTooLowException::what() const throw()
{
    return ("Grade is too low");
}

const char *AForm::FormNotSignedException::what() const throw()
{
    return ("Form is not signed");
}