/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcozigon <gcozigon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 19:57:10 by gcozigon          #+#    #+#             */
/*   Updated: 2024/01/19 20:16:41 by gcozigon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Brain.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include <iostream>
#include <sstream>

int	main(void)
{
	
	// Dog basic;
	// {
	// 	Dog tmp = basic;
		
	// }

	// /*Subject Main*/
	
	// std::cout << "SUBJECT MAIN" << std::endl;
	// {
	// 	const Animal *j = new Dog();
	// 	const Animal *i = new Cat();
	// 	delete j; //should not create a leak
	// 	delete i;
	// }
	// std::cout << "\n\n\n";

	// /*check constructor destructor*/
	// std::cout << "CHECK CONSTRUCTOR DESTRUCTOR" << std::endl;
	// {
	// 	Animal *animals_array[100];
	// 	for (int i = 0; i < 100; i++)
	// 	{
	// 		if (i % 2)
	// 			animals_array[i] = new Dog();
	// 		else
	// 			animals_array[i] = new Cat();
	// 	}
	// 	for (int i = 0; i < 100; i++)
	// 		delete animals_array[i];
	// }
	// std::cout << "\n\n\n";
	
	
	// /*check deep copy*/
	// std::cout << "CHECK DEEP COPY" << std::endl;
	// {
	// 	Dog *bob = new Dog("Bob");
	// 	    std::string ideacpytest[100] = {
    //     "0", "1", "2", "3", "4", "5", "6", "7", "8", "9",
    //     "10", "11", "12", "13", "14", "15", "16", "17", "18", "19",
    //     "20", "21", "22", "23", "24", "25", "26", "27", "28", "29",
    //     "30", "31", "32", "33", "34", "35", "36", "37", "38", "39",
    //     "40", "41", "42", "43", "44", "45", "46", "47", "48", "49",
    //     "50", "51", "52", "53", "54", "55", "56", "57", "58", "59",
    //     "60", "61", "62", "63", "64", "65", "66", "67", "68", "69",
    //     "70", "71", "72", "73", "74", "75", "76", "77", "78", "79",
    //     "80", "81", "82", "83", "84", "85", "86", "87", "88", "89",
    //     "90", "91", "92", "93", "94", "95", "96", "97", "98", "99"
    // };
	// 	bob->getBrain()->setIdeas(ideacpytest);
	// 	Dog *bob2 = new Dog(*bob);
	// 	bob->getBrain()->printIdeas();
	// 	bob2->getBrain()->printIdeas();
	// 	delete bob;
	// 	delete bob2;
	// }
	// std::cout << "\n\n\n";
}