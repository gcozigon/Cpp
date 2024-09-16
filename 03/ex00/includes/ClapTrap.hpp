/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcozigon <gcozigon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 18:34:43 by gcozigon          #+#    #+#             */
/*   Updated: 2024/01/16 21:45:11 by gcozigon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{
  protected:
	std::string _Name;
	unsigned int _HitPoints;
	unsigned int _EnergyPoints;
	unsigned int _AttackDamage;

  public:
	ClapTrap();
	ClapTrap(const std::string &Name);
	ClapTrap(const ClapTrap &src);
	~ClapTrap();
	ClapTrap &operator=(const ClapTrap &rhs);

	void attack(const std::string &target);
	void takeDamage(unsigned int nb);
	void beRepaired(unsigned int nb);

	std::string getName() const;
	unsigned int getHitPoints() const;
	unsigned int getEnergyPoints() const;
	unsigned int getAttackDamage() const;
	
	void setName(std::string name);
	void setHitPoints(unsigned int hitPoints);
	void setEnergyPoints(unsigned int energyPoints);
	void setAttackDamage(unsigned int attackDamage);
};

#endif
