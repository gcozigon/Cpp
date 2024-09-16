/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcozigon <gcozigon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 18:32:46 by gcozigon          #+#    #+#             */
/*   Updated: 2024/01/19 18:22:35 by gcozigon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

/*default constructor*/
Character::Character(std::string const &name)
	: _name(name)
{
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
    this->_nb_materia = 0;
    this->_tab_free = NULL;
    this->_tab_free_size = 0;
    std::cout << "Character " << this->getName() << " has been created" << std::endl;
}


/*destruct*/
Character::~Character()
{
    for (int i = 0; i < 4; i++)
    {
        if (this->_inventory[i])
        {
            delete this->_inventory[i];
            this->_inventory[i] = NULL;
        }
    }
    for (int i = 0; i < _tab_free_size; i++)
        delete _tab_free[i];
    delete [] _tab_free;
    std::cout << "Character " << this->getName() << " has been deleted" << std::endl;
}

/*recopie*/
Character::Character(Character const &src)
{
    this->_name = src.getName();
    for (int i = 0; i < 4; i++)
    {
        if (src._inventory[i])
            this->_inventory[i] = src._inventory[i]->clone();
        else
            this->_inventory[i] = NULL;
    }
    std::cout << "Character " << this->getName() << " has been copied" << std::endl;
}

/*oper*/
Character &Character::operator=(Character const &rhs)
{
    if (this != &rhs)
    {
        this->_name = rhs.getName();
        for (int i = 0; i < 4; i++)
        {
            if (this->_inventory[i])
            {
                delete this->_inventory[i];
                this->_inventory[i] = NULL;
            }
            if (rhs._inventory[i])
            {
                this->_inventory[i] = rhs._inventory[i]->clone();
            }
        }
    }
    this->_nb_materia = rhs._nb_materia;
    this->_tab_free = NULL;
    this->_tab_free_size = 0;
    std::cout << "Character " << this->getName() << " has been cloned" << std::endl;
    return (*this);
}

std::string const &Character::getName() const
{
	return (this->_name);
}

void Character::equip(AMateria *m)
{
	if (!m)
	{
		std::cout << "No materia to equip" << std::endl;
		return ;
	}
    if (_nb_materia < 4)
    {
        for (int i = 0; i < 4; i++)
        {
            if (this->_inventory[i] == m)
            {
                std::cout << "Character :: " << this->getName() << " already has this materia" << std::endl;
                return ;
            }
            else if (!this->_inventory[i])
            {
                this->_inventory[i] = m;
                _nb_materia++;
                return ;
            }
        }
    }
	else
	{
		std::cout << "Character :: " << this->getName() << " Inventory is full" << std::endl;
		delete m;
        return ;
	}
}


void Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4 && this->_inventory[idx])
    {
        AMateria **tmp = new AMateria*[_tab_free_size + 1];
        for (int i = 0; i < _tab_free_size; i++)
            tmp[i] = _tab_free[i];
        delete [] _tab_free;
        tmp[_tab_free_size] = this->_inventory[idx];
		this->_inventory[idx] = NULL;
        _tab_free = tmp;
        _tab_free_size++;
        _nb_materia--;
    }
    else if (!this->_inventory[idx])
        std::cout << "No materia at this index" << std::endl;
    else if (idx < 0 || idx > 3)
        std::cout << "Invalid index" << std::endl;
}

void Character::use(int idx, ICharacter &target)
{
    if (idx < 0 || idx > 3)
    {
        return ((void)(std::cout << "Invalid index" << std::endl));
    }
	if (idx >= 0 && idx < 4 && this->_inventory[idx])
		this->_inventory[idx]->use(target);
    else if (this->_inventory[idx] == NULL)
        std::cout << "No materia at this index" << std::endl;
}
