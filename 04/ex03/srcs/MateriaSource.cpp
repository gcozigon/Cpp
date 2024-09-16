/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcozigon <gcozigon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 15:20:17 by gcozigon          #+#    #+#             */
/*   Updated: 2024/01/19 16:23:46 by gcozigon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		this->_materia[i] = NULL;
	this->_nb_materia = 0;
	std::cout << "MateriaSource default constructor called" << std::endl;
}

MateriaSource::MateriaSource(MateriaSource const &src)
{
	*this = src;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_materia[i])
			delete this->_materia[i];
	}
	std::cout << "MateriaSource destructor called" << std::endl;
}

MateriaSource &MateriaSource::operator=(MateriaSource const &rhs)
{
	if (this != &rhs)
	{
		for (int i = 0; i < 4; i++)
		{
			if (_materia[i])
				_materia[i] = rhs._materia[i]->clone();
		}
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria *m)
{
	if (!m)
	{
		std::cout << "No materia to learn" << std::endl;
		return ;
	}
	if (_nb_materia < 4)
	{
		for (int i = 0; i < 4; i++)
		{
			if (!_materia[i])
			{
				_materia[i] = m;
				_nb_materia++;
				return ;
			}
		}
	}
	else
	{
		std::cout << "MateriaSource is full" << std::endl;
		delete m;
		return ;
	}
}

	AMateria *MateriaSource::createMateria(std::string const &type)
	{
		for (int i = 0; i < 4; i++)
		{
			if (this->_materia[i] && this->_materia[i]->getType() == type)
				return (this->_materia[i]->clone());
		}
		std::cout << "MateriaSource doesn't have this materia" << std::endl;
		return (NULL);
	}