/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcozigon <gcozigon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 18:35:08 by gcozigon          #+#    #+#             */
/*   Updated: 2024/01/16 22:05:58 by gcozigon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	// Create a ClapTrap instance
	ClapTrap claptrap("CL4P-TP");
	ClapTrap qwerty("QWERTYUIOP");
	// Test attack, takeDamage, and beRepaired functions
	claptrap.attack("Target1");
	claptrap.takeDamage(2);
	claptrap.beRepaired(100);
	claptrap.beRepaired(100);
	claptrap.beRepaired(100);
	claptrap.beRepaired(100);
	claptrap.beRepaired(100);
	claptrap.beRepaired(100);
	claptrap.attack("Target2");
	
	std::cout << "\nFinal Status:\n"
				<< "Name: " << claptrap.getName() << "\n"
				<< "Hit Points: " << claptrap.getHitPoints() << "\n"
				<< "Energy Points: " << claptrap.getEnergyPoints() << "\n"
				<< "Attack Damage: " << claptrap.getAttackDamage() << std::endl;

	std::cout << "\nFinal Status:\n"
				<< "Name: " << qwerty.getName() << "\n"
				<< "Hit Points: " << qwerty.getHitPoints() << "\n"
				<< "Energy Points: " << qwerty.getEnergyPoints() << "\n"
				<< "Attack Damage: " << qwerty.getAttackDamage() << std::endl;
	
	claptrap.attack("Target1");
	claptrap.attack("Target1");
	claptrap.attack("Target1");
	claptrap.beRepaired(100);
	claptrap.beRepaired(100);
	claptrap.beRepaired(100);
	claptrap.beRepaired(100);
	
	qwerty.takeDamage(600);
	qwerty.attack("Target2");
	qwerty.attack("Target3");
	qwerty.attack("Target3.5");
	
	
	std::cout << "\nFinal Status:\n"
				<< "Name: " << claptrap.getName() << "\n"
				<< "Hit Points: " << claptrap.getHitPoints() << "\n"
				<< "Energy Points: " << claptrap.getEnergyPoints() << "\n"
				<< "Attack Damage: " << claptrap.getAttackDamage() << std::endl;
	
	
	std::cout << "\nFinal Status:\n"
				<< "Name: " << qwerty.getName() << "\n"
				<< "Hit Points: " << qwerty.getHitPoints() << "\n"
				<< "Energy Points: " << qwerty.getEnergyPoints() << "\n"
				<< "Attack Damage: " << qwerty.getAttackDamage() << std::endl;
				
	std::cout <<"\n\n\n\n\n\n";
	ClapTrap qwerty2("");
	qwerty2.attack("Target2");
	qwerty2.attack("Target3");
	qwerty2.attack("Target3.5");
	qwerty2.attack("Target3.5");
	
	return (0);
}
