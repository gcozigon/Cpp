/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcozigon <gcozigon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 17:02:24 by gcozigon          #+#    #+#             */
/*   Updated: 2024/01/19 18:37:03 by gcozigon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>

class WrongAnimal
{
  protected:
	std::string _type;

  public:
	WrongAnimal();
	WrongAnimal(std::string name);
	WrongAnimal(WrongAnimal const &src);
	virtual ~WrongAnimal();
	WrongAnimal &operator=(WrongAnimal const &rhs);

	void makeSound() const;
	void setType(std::string type);
	std::string getType() const;
};

#endif