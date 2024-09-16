/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcozigon <gcozigon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 19:50:59 by gcozigon          #+#    #+#             */
/*   Updated: 2024/01/17 17:01:34 by gcozigon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include <iostream>
# include <string>

class Dog : public Animal
{
  public:
	Dog();
	Dog(std::string name);
	Dog(Dog const &src);
	~Dog();
	Dog &operator=(Dog const &rhs);

	void makeSound() const;
};

#endif