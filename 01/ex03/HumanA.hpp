/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcozigon <gcozigon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 15:56:35 by gcozigon          #+#    #+#             */
/*   Updated: 2024/01/10 15:20:01 by gcozigon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_CPP
# define HUMANA_CPP

# include "Weapon.hpp"
# include <iomanip>
# include <iostream>
# include <stdlib.h>
# include <string>

class	Weapon;

class HumanA
{
  private:
	std::string _name;
	Weapon *_weapon;

  public:
	HumanA(std::string name, Weapon &arme);
	~HumanA();
	void attack();
	void setName(std::string str);
	std::string getName();
	Weapon getWeapon();
};

#endif