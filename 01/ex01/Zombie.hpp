/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcozigon <gcozigon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 16:29:40 by gcozigon          #+#    #+#             */
/*   Updated: 2024/01/08 14:15:52 by gcozigon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <ostream>
#include <iostream>
#include <string>
#include <iomanip>

class Zombie
{
  private:
	std::string name;

  public:
	Zombie();
	~Zombie();
	void setName(std::string str);
	std::string getName();
	void announce(void);
	
};
Zombie* zombieHorde( int N, std::string name );
#endif