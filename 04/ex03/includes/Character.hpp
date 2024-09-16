/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcozigon <gcozigon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 18:31:45 by gcozigon          #+#    #+#             */
/*   Updated: 2024/01/19 18:22:42 by gcozigon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"
# include <iostream>

class AMateria;

class Character : public ICharacter
{
  public:
	Character(std::string const &name);
	Character(Character const &src);
	~Character();

	Character &operator=(Character const &rhs);

	std::string const &getName() const;
	void equip(AMateria *m);
	void unequip(int idx);
	void use(int idx, ICharacter &target);

  private:
	std::string _name;
	AMateria *_inventory[4];
	int _nb_materia;
	AMateria **_tab_free;
	int _tab_free_size;
	
	
};

#endif