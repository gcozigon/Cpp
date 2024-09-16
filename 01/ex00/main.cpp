/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcozigon <gcozigon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 16:32:07 by gcozigon          #+#    #+#             */
/*   Updated: 2024/01/10 14:05:29 by gcozigon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

int	main(void) // regardez le sujet et regarder les fichiers a rendre
{
	Zombie *aaa = newZombie("gabgaabgaaab");
	aaa->announce();
	delete aaa;
	std::cout << "\n\n";
	randomChump("PITIEEEEEEEEEEEEEE");
}
