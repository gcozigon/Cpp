/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcozigon <gcozigon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 16:21:00 by gcozigon          #+#    #+#             */
/*   Updated: 2024/02/20 17:31:19 by gcozigon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include <string>
# include <exception>
# include "Bureaucrat.hpp"
#include <cstdlib>


class Bureaucrat;

class AForm
{
  private:
	std::string const _name;
	bool _signed;
	const int _gradeSign;
	const int _gradeExec;
	

  public:
	AForm();
	AForm(std::string name, int gradeSign, int gradeExec);
	AForm(AForm const &src);
	virtual ~AForm();

	AForm &operator=(AForm const &rhs);

	std::string getName() const;
	bool getSigned() const;
	int getGradeSign() const;
	int getGradeExec() const;
	virtual void execute(Bureaucrat const &executor) const = 0;
	void beSigned(Bureaucrat &bureaucrat);
	class GradeTooHighException : public std::exception
	{
		public:
			const char *what() const throw();
	};
	
	class GradeTooLowException : public std::exception
	{
		public:
			const char *what() const throw();
	};
	class FormNotSignedException : public std::exception
	{
		public:
			const char *what() const throw();
	};
};
std::ostream &operator<<(std::ostream &o, AForm const &rhs);

#endif