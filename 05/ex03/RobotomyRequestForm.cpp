/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcozigon <gcozigon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 18:53:15 by gcozigon          #+#    #+#             */
/*   Updated: 2024/02/17 17:06:09 by gcozigon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("default", 72, 45)
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm(target, 72, 45)
{
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src) : AForm(src)
{
    *this = src;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs)
{
    if (this != &rhs)
    {
        this->AForm::operator=(rhs);
    }
    return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
    if (!this->getSigned())
        throw AForm::FormNotSignedException();
    if (executor.getGrade() > this->getGradeExec())
        throw AForm::GradeTooLowException();
    if (rand() % 2)
        std::cout
        << this->getName() << " has been robotomized successfully" << std::endl;
    else
        std::cout << this->getName() << " has failed to be robotomized" << std::endl;        
}