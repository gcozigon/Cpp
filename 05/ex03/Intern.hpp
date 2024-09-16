/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcozigon <gcozigon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 16:34:28 by gcozigon          #+#    #+#             */
/*   Updated: 2024/02/20 17:40:57 by gcozigon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include "AForm.hpp"

class AForm;

class Intern
{
    public:
        Intern();
        Intern(Intern const &src);
        ~Intern();
        Intern &operator=(Intern const &rhs);

        AForm *makeForm(std::string form, std::string target);
        AForm *newShrubberyCreationForm(std::string target);
        AForm *newPresidentialPardonForm(std::string target);
        AForm *newRobotomyRequestForm(std::string target);
        class UnknownFormException : public std::exception
        {
            public:
                const char *what() const throw();
        };
    
    private:
        std::string _formNames[3];
        AForm *(Intern::*_formFuncs[3])(std::string target);
};

#endif