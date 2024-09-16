/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcozigon <gcozigon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 18:53:08 by gcozigon          #+#    #+#             */
/*   Updated: 2024/02/17 17:08:23 by gcozigon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("default", 25, 5)
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm(target, 25, 5)
{
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src) : AForm(src)
{
    *this = src;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs)
{
    if (this != &rhs)
    {
        this->AForm::operator=(rhs);
    }
    return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
    if (!this->getSigned())
        throw AForm::FormNotSignedException();
    if (executor.getGrade() > this->getGradeExec())
        throw AForm::GradeTooLowException();
    std::cout << this->getName() << " has been pardoned by Zafod Beeblebrox" << std::endl;
}
