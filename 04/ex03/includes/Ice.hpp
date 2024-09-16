/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcozigon <gcozigon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 14:45:57 by gcozigon          #+#    #+#             */
/*   Updated: 2024/01/18 15:02:03 by gcozigon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>
# include <string>
# include "AMateria.hpp"

class Ice : public AMateria
{
  public:
    Ice();
    Ice(Ice const &src);
    ~Ice();

    Ice &operator=(Ice const &rhs);

    AMateria *clone() const;
    void use(ICharacter &target);
};

#endif