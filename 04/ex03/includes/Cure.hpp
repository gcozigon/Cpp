/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcozigon <gcozigon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 14:45:31 by gcozigon          #+#    #+#             */
/*   Updated: 2024/01/18 15:19:05 by gcozigon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include <string>

# include "AMateria.hpp"

class Cure : public AMateria
{
  public:
    Cure();
    Cure(Cure const &src);
    ~Cure();

    Cure &operator=(Cure const &rhs);

    AMateria *clone() const;
    void use(ICharacter &target);
};

#endif