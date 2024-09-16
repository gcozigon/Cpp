/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcozigon <gcozigon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 18:35:08 by gcozigon          #+#    #+#             */
/*   Updated: 2024/01/16 21:44:18 by gcozigon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	std::cout << std::endl;
	ClapTrap HumanB("HumanB");
	ScavTrap HumanA("HumanA");
	FragTrap HumanC("HumanC");
	HumanB.attack("HumanA");
	HumanC.attack("HumanA");
	HumanC.attack("HumanA");
	HumanC.attack("HumanA");
	HumanA.guardGate();
	HumanC.attack("HumanA");
	HumanC.highFivesGuys();
	
	HumanC.takeDamage(HumanA.getAttackDamage());
	
	HumanC.takeDamage(HumanC.getAttackDamage() * 8);
	HumanA.takeDamage(HumanC.getAttackDamage() * 4);
	HumanB.takeDamage(HumanA.getAttackDamage());
	return (0);
}