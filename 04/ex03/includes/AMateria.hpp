/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcozigon <gcozigon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 14:42:25 by gcozigon          #+#    #+#             */
/*   Updated: 2024/01/19 18:20:29 by gcozigon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include "ICharacter.hpp"
# include <iostream>
# include <string>

class ICharacter;

class AMateria
{
  protected:
	std::string _type;

  public:
	AMateria(std::string const &type);
	AMateria(AMateria const &src);
	virtual ~AMateria();

	AMateria &operator=(AMateria const &rhs);

	std::string const &getType() const;
	virtual AMateria *clone() const = 0;
	virtual void use(ICharacter &target);
};

#endif