/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcozigon <gcozigon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 17:03:18 by gcozigon          #+#    #+#             */
/*   Updated: 2024/01/17 17:03:32 by gcozigon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"
# include <iostream>
# include <string>

class WrongCat : public WrongAnimal
{
  public:
	WrongCat();
	WrongCat(WrongCat const &src);
	WrongCat(std::string name);
	~WrongCat();
	WrongCat &operator=(WrongCat const &rhs);

	void makeSound() const;
};

#endif