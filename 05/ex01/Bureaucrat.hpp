/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcozigon <gcozigon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 16:17:26 by gcozigon          #+#    #+#             */
/*   Updated: 2024/02/17 13:41:32 by gcozigon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# define MAX_GRADE 1
# define MIN_GRADE 150
#include "Form.hpp"

class Form;

class Bureaucrat
{
  private:
	Bureaucrat();
	std::string const _name;
	int _grade;

  public:
	Bureaucrat(std::string name, int grade);
	Bureaucrat(Bureaucrat const &src);
	~Bureaucrat();

	Bureaucrat &operator=(Bureaucrat const &rhs);

	std::string getName() const;
	int getGrade() const;
	void incrementGrade();
	void decrementGrade();
	
	void signForm(Form &form);
	class GradeTooHighException : public std::exception
	{
		public:
		virtual const char *what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
		public:
		virtual const char *what() const throw();
	};
};
std ::ostream &operator<<(std::ostream &o, Bureaucrat const &rhs);

#endif