/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcozigon <gcozigon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 18:35:08 by gcozigon          #+#    #+#             */
/*   Updated: 2024/01/16 21:52:06 by gcozigon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap clapTrap("");
	clapTrap.attack("Enemy");
	clapTrap.takeDamage(30);
	
	std::cout << std::endl;
	std::cout << std::endl;

	ScavTrap scavvvvv("");
	scavvvvv.attack("Bandit");
	scavvvvv.guardGate();
	scavvvvv.takeDamage(154);

	std::cout << std::endl;
	std::cout << std::endl;
	
	ScavTrap scavTrap("SC4V-TP");
	scavTrap.attack("Bandit");
	scavTrap.guardGate();
	scavTrap.takeDamage(154);
	scavTrap.takeDamage(154);
	scavTrap.takeDamage(154);
	
	return (0);
}
