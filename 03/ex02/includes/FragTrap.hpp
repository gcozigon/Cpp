/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcozigon <gcozigon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 21:33:53 by gcozigon          #+#    #+#             */
/*   Updated: 2024/01/16 21:54:52 by gcozigon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>

class FragTrap : public ClapTrap
{
  public:
    FragTrap();
    FragTrap(const std::string name);
    FragTrap(const FragTrap &src);
    ~FragTrap();
    FragTrap &operator=(const FragTrap &rhs);

    void highFivesGuys();
    void attack(const std::string &target);
};

#endif