/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcozigon <gcozigon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 14:44:07 by gcozigon          #+#    #+#             */
/*   Updated: 2024/03/07 16:39:15 by gcozigon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <string>
# include <vector>
# include <map>
#include <fstream>
#include <iostream>
#include <string>
#include <sstream>

# define INT_MAX 2147483647
# define INT_MIN -2147483648


class BitcoinExchange
{
  public:
	BitcoinExchange();
	BitcoinExchange(char *filename);
	~BitcoinExchange();
	void get_csv();
	void printData();
	bool check_key(std::string key);
	bool check_value(std::string value, int x);
	std::string** sort_key();
	void get_input(std::string **keys);
	void exec_exchange(std::string **keys);
	bool convert_check_date(std::string *date, std::string *target, int x);
	

  private:
	char *_filename;
	std::string _input_date;
	std::string _input_value;
	int _bool_line;
	std::map <std::string, std::string> _map;
};

#endif