/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcozigon <gcozigon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 15:56:52 by gcozigon          #+#    #+#             */
/*   Updated: 2024/01/10 14:16:11 by gcozigon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_CPP
# define HUMANB_CPP

# include "Weapon.hpp"
# include <iomanip>
# include <iostream>
# include <stdlib.h>
# include <string>

class	Weapon;

class HumanB
{
  private:
	std::string _name;
	Weapon *_weapon;

  public:
	HumanB(std::string name);
	~HumanB();
	void attack();
	void setName(std::string str);
	void setWeapon(Weapon &weapon);
	std::string getName();
};

#endif