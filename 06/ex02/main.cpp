/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcozigon <gcozigon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 11:03:31 by gcozigon          #+#    #+#             */
/*   Updated: 2024/02/22 16:13:41 by gcozigon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>


Base *generate(void)
{
	int i = rand() % 3;
	if (i == 0)
		return (new A);
	if (i == 1)
		return (new B);
    else
        return (new C);        
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "Identify : A" << std::endl;
	if (dynamic_cast<B*>(p))
		std::cout << "Identify : B" << std::endl;
	if (dynamic_cast<C*>(p))
		std::cout << "Identify : C" << std::endl;
}

void identify(Base &p)
{
	try
	{
			A &a = dynamic_cast<A&>(p);
			std::cout << "A" << std::endl;
			(void)a;
	}
	catch ( std::exception &error)
	{
		std::cout << "Its not type A, Error : " << error.what() << std::endl;
	};
	try
	{
			B &b = dynamic_cast<B&>(p);
			std::cout << "B" << std::endl;
			(void)b;
	}
	catch ( std::exception &error)
	{
		std::cout << "Its not type B, Error : " << error.what() << std::endl;
	};
	try
	{
			C &c = dynamic_cast<C&>(p);
			std::cout << "C" << std::endl;
			(void)c;
	}
	catch ( std::exception &error)
	{
		std::cout << "Its not type C, Error : " << error.what() << std::endl;
	};
}

int main(void)
{
	std::srand(std::time(0));
	Base *base = generate();
	identify(base);
	identify(*base);

	delete base;
	return (0);
}