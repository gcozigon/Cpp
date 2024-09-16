/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcozigon <gcozigon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 16:29:40 by gcozigon          #+#    #+#             */
/*   Updated: 2024/01/10 17:50:14 by gcozigon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <ostream>
#include <iostream>
#include <string>
#include <iomanip>

class Harl
{
	private:
		std::string name;
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );

	public:
		void complain( std::string level );
		Harl();
		~Harl();
};
#endif
