/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcozigon <gcozigon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 19:50:30 by gcozigon          #+#    #+#             */
/*   Updated: 2024/01/19 20:18:59 by gcozigon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include <iostream>
# include <string>
# include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain *_brain;
  public:
	Cat();
	Cat(Cat const &src);
	Cat(std::string name);
	~Cat();
	Cat &operator=(Cat const &rhs);

	void makeSound() const;
	virtual Brain 		*getBrain ( void ) const;
};

#endif