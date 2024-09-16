/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcozigon <gcozigon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 19:35:59 by gcozigon          #+#    #+#             */
/*   Updated: 2024/01/18 18:26:27 by gcozigon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal
{
  protected:
	std::string _type;

  public:
	Animal();
	Animal(std::string name);
	Animal(Animal const &src);
	virtual ~Animal();
	Animal &operator=(Animal const &rhs);

	virtual void makeSound() const;
	void setType(std::string type);
	std::string getType() const;
};

#endif
