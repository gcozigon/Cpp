/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcozigon <gcozigon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 15:57:18 by gcozigon          #+#    #+#             */
/*   Updated: 2024/01/10 17:27:49 by gcozigon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_CPP
# define WEAPON_CPP

# include <iomanip>
# include <iostream>
# include <stdlib.h>
# include <string>

class Weapon
{
  private:
	std::string _type;

  public:
	Weapon();
	Weapon(std::string type);
	~Weapon();
	void setType(std::string type);
	const std::string getType();
};

#endif