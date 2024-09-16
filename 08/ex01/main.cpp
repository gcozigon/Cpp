/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcozigon <gcozigon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 18:10:46 by gcozigon          #+#    #+#             */
/*   Updated: 2024/02/29 12:18:37 by gcozigon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>


int	main(void)
{
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	return (0);
}
 
 
// int main(void)
// {
// 	try
// 	{
// 		Span sp = Span(5);
// 		sp.addNumber(6);
// 		sp.addNumber(3);
// 		sp.addNumber(17);
// 		sp.addNumber(9);
// 		sp.addNumber(11);
// 		sp.addNumber(11);
// 		sp.addNumber(11);
// 		std::cout << sp.shortestSpan() << std::endl;
// 		std::cout << sp.longestSpan() << std::endl;
// 	}
// 	catch (std::exception &e)
// 	{
// 		std::cout << e.what() << std::endl;
// 	}
// 	try
// 	{
// 		Span sp = Span(1);
// 		sp.addNumber(6);
// 		std::cout << sp.shortestSpan() << std::endl;
// 		std::cout << sp.longestSpan() << std::endl;
// 	}
// 	catch (std::exception &e)
// 	{
// 		std::cout << e.what() << std::endl;
// 	}
	
// 	try
// 	{
// 		{
// 			Span sp = Span(10000);
// 			for (int i = 0; i < 10000; i++)
// 				sp.addNumber(i);
// 			std::cout << sp.shortestSpan() << std::endl;
// 			std::cout << sp.longestSpan() << std::endl;
		
// 		}
// 	}
// 	catch(const std::exception& e)
// 	{
// 		std::cerr << e.what() << '\n';
// 	}
	

// 	try
// 	{
// 		{
// 			Span sp = Span(50);
// 			std::vector<int> v;
// 			for (int i = 0; i < 50; i++)
// 				v.push_back(i);
// 			sp.addNnumbers(v.begin(), v.end());
// 			std::cout << sp.shortestSpan() << std::endl;
// 			std::cout << sp.longestSpan() << std::endl;
// 		}
	
// 	}
// 	catch(const std::exception& e)
// 	{
// 		std::cerr << e.what() << '\n';
// 	}
	
// 	return (0);
// }