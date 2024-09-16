/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcozigon <gcozigon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 18:24:03 by gcozigon          #+#    #+#             */
/*   Updated: 2024/02/17 12:12:44 by gcozigon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include <exception>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
  private:
	std::string const _name;
	bool _signed;
	const int _gradeSign;
	const int _gradeExec;
	

  public:
	Form();
	Form(std::string name, int gradeSign, int gradeExec);
	Form(Form const &src);
	Form &operator=(Form const &rhs);
	~Form();


	void beSigned(Bureaucrat &bureaucrat);
	std::string getName() const;
	bool getSigned() const;
	int getGradeSign() const;
	int getGradeExec() const;	

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
};
std::ostream &operator<<(std::ostream &o, Form const &rhs);
#endif