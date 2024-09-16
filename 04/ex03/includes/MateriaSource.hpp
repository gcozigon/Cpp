/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcozigon <gcozigon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 15:19:50 by gcozigon          #+#    #+#             */
/*   Updated: 2024/01/19 18:21:29 by gcozigon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <iostream>
# include <string>
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
  public:
    MateriaSource();
    MateriaSource(MateriaSource const &src);
    ~MateriaSource();
    MateriaSource &operator=(MateriaSource const &rhs);

    void learnMateria(AMateria *);
    AMateria *createMateria(std::string const &type);

  private:
    AMateria *_materia[4];
    int _nb_materia;
};

#endif