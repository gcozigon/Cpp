/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcozigon <gcozigon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 17:37:09 by gcozigon          #+#    #+#             */
/*   Updated: 2024/01/19 19:25:30 by gcozigon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain created" << std::endl;
}

Brain::Brain(Brain const & src)
{
    std::cout << "Brain copy constructor called" << std::endl;
    for (int i = 0; i < 100; i++)
        this->_ideas[i] = src._ideas[i];
}

Brain::~Brain()
{
    std::cout << "Brain destroyed" << std::endl;
}

Brain &		Brain::operator=(Brain const & rhs)
{
    if (this != &rhs)
    {
        for (int i = 0; i < 100; i++)
            this->_ideas[i] = rhs._ideas[i];
    }
    return *this;
}

Brain *Brain::getBrain()
{
    return (this);
}

void		Brain::setIdeas(std::string ideas[100])
{
    for (int i = 0; i < 100; i++)
        this->_ideas[i] = ideas[i];
}

std::string *Brain::getIdeas()
{
    return (this->_ideas);
}

void		Brain::printIdeas() const
{
    for (int i = 0; i < 100; i++)
        std::cout << this->_ideas[i] << std::endl;
}