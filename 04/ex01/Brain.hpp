/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcozigon <gcozigon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 17:36:51 by gcozigon          #+#    #+#             */
/*   Updated: 2024/01/19 19:16:09 by gcozigon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string.h>

class Brain
{
  private:
	std::string _ideas[100];

  public:
	Brain();
	Brain(Brain const &src);
	Brain &operator=(Brain const &rhs);
	~Brain();


	void setIdeas(std::string ideas[100]);
	std::string *getIdeas();
    Brain *getBrain();
	void printIdeas() const;
};

#endif