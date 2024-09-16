/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcozigon <gcozigon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 18:24:25 by gcozigon          #+#    #+#             */
/*   Updated: 2024/02/17 12:15:01 by gcozigon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form()
	: _name("default"), _signed(false), _gradeSign(150), _gradeExec(150)
{
}

Form::~Form()
{
}

Form::Form(std::string name, int gradeSign, int gradeExec)
	: _name(name), _signed(false), _gradeSign(gradeSign), _gradeExec(gradeExec)
{
	if (gradeSign < 1 || gradeExec < 1)
		throw Form::GradeTooHighException();
	else if (gradeSign > 150 || gradeExec > 150)
		throw Form::GradeTooLowException();
}

Form::Form(Form const &src)
	: _name(src.getName()), _signed(src.getSigned()),
		_gradeSign(src.getGradeSign()), _gradeExec(src.getGradeExec())
{
	if (src.getGradeSign() < 1 || src.getGradeExec() < 1)
		throw Form::GradeTooHighException();
	else if (src.getGradeSign() > 150 || src.getGradeExec() > 150)
		throw Form::GradeTooLowException();
}
Form &Form::operator=(Form const &rhs)
{
	if (this != &rhs)
	{
		this->_signed = rhs.getSigned();
	}
	return (*this);
}

std::string Form::getName() const
{
	return (this->_name);
}

bool Form::getSigned() const
{
	return (this->_signed);
}

int Form::getGradeSign() const
{
	return (this->_gradeSign);
}

int Form::getGradeExec() const
{
	return (this->_gradeExec);
}

void Form::beSigned(Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > this->_gradeSign)
		throw Form::GradeTooLowException();
	else
		this->_signed = true;
}

std::ostream &operator<<(std::ostream &o, Form const &rhs)
{
	o << rhs.getName() << " is ";
	if (rhs.getSigned())
		o << "signed";
	else
		o << "not signed";
	o << " and requires a grade " << rhs.getGradeSign() << " to be signed and a grade " << rhs.getGradeExec() << " to be executed." << std::endl;
	return (o);
}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("Grade is too high");
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("Grade is too low");
}
