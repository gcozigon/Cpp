/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcozigon <gcozigon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 20:03:38 by gcozigon          #+#    #+#             */
/*   Updated: 2024/01/16 21:52:49 by gcozigon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>
# include <string>

class ScavTrap : public ClapTrap
{
  public:
	ScavTrap();
	ScavTrap(const std::string &name);
	ScavTrap(const ScavTrap &src);
	~ScavTrap();
	ScavTrap &operator=(const ScavTrap &rhs);

	void guardGate();
	void attack(const std::string &target);
};

#endif
