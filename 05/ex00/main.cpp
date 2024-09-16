/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcozigon <gcozigon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 17:25:46 by gcozigon          #+#    #+#             */
/*   Updated: 2024/02/17 12:08:39 by gcozigon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


int main(void)
{
    try
    {
        Bureaucrat *bureaucrat = new Bureaucrat("Bob", 0);
        std::cout << *bureaucrat;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        Bureaucrat *bureaucrat = new Bureaucrat("Elliot", 151);
        std::cout << *bureaucrat;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        Bureaucrat *bureaucrat = new Bureaucrat("gcozigon", 1);
        std::cout << *bureaucrat;
        bureaucrat->incrementGrade();
        std::cout << *bureaucrat;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        Bureaucrat *bureaucrat = new Bureaucrat("Bob", 150);
        std::cout << *bureaucrat;
        bureaucrat->decrementGrade();
        std::cout << *bureaucrat;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return (0);
}