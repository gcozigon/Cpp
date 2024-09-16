/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcozigon <gcozigon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 15:46:50 by gcozigon          #+#    #+#             */
/*   Updated: 2024/03/13 15:05:57 by gcozigon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <sstream>
# include <string>
# include <vector>

class RPN
{
  public:
	RPN();
	RPN(const RPN &src);
	RPN &operator=(const RPN &rhs);
	~RPN();

	void parseInput(char *str);
	void keep_data(std::string input);
	void executeOperation(std::string operation);
	void exec_operator(char c);

  private:
	std::vector<int> _stack;
};

#endif