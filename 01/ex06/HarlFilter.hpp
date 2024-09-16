/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HarlFilter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcozigon <gcozigon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 16:29:40 by gcozigon          #+#    #+#             */
/*   Updated: 2023/12/20 03:08:43 by gcozigon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARLFILTER_HPP
#define HARLFILTER_HPP

#include <ostream>
#include <iostream>
#include <string>
#include <iomanip>

class Harl
{
	private:
		std::string name;

	public:
		Harl();
		~Harl();
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );
		void complain( std::string level );
};
#endif
