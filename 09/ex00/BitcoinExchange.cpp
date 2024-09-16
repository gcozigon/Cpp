/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcozigon <gcozigon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 18:16:28 by gcozigon          #+#    #+#             */
/*   Updated: 2024/03/13 14:58:20 by gcozigon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <cstdlib>

BitcoinExchange::~BitcoinExchange()
{
}

BitcoinExchange::BitcoinExchange()
{
    _filename = NULL;
    _input_date = "";
    _input_value = "";
    _bool_line = 0;
}

BitcoinExchange::BitcoinExchange(char *filename) : _filename(filename)
{
    _input_date = "";
    _input_value = "";
    _bool_line = 0;
    get_csv();
    std::string **keys = sort_key();
    if (keys == NULL)
        return;
    get_input(keys);
    for (unsigned long i = 0; i < _map.size(); ++i)
        delete keys[i];
    delete[] keys;
}

void BitcoinExchange::exec_exchange(std::string **keys)
{
    (void)keys;
    for (unsigned long i = 0; i < _map.size(); ++i)
    {
        if (convert_check_date(keys[i], &_input_date, 1))
        {
            std::string value = _map[*keys[i - _bool_line]];
            std::stringstream ss(value);
            double val;
            ss >> val;
            std::stringstream ss2(_input_value);
            double val2;
            ss2 >> val2;
            float res = val * val2;
            std::stringstream ss3;
            ss3 << res;
            std::string str = ss3.str();
            std::cout << _input_date << "=>" << _input_value << " = " << str << std::endl;
            _bool_line = 0;
            return;
        }
    }
    unsigned long x = _map.size() - 1;
    std::string value = _map[*keys[x]];
    std::stringstream ss(value);
    double val;
    ss >> val;
    std::stringstream ss2(_input_value);
    double val2;
    ss2 >> val2;
    std::cout << _input_date << "=>" << _input_value << " = " << val * val2 << std::endl;
}

void BitcoinExchange::get_input(std::string **keys) 
{
    (void)keys;
    std::ifstream inputFile(this->_filename);
    std::string line;
    bool empty = true;
    while (std::getline(inputFile, line))
    {
        empty = false;
        std::string key, value;
        std::istringstream lineStream(line);
        if (std::getline(lineStream, key, '|') && std::getline(lineStream, value))
        {
            if (check_key(key.substr(0, 10)) && check_value(value.substr(1, value.length() - 1), 1))
            {
                _input_date = key;
                _input_value = value;
                exec_exchange(keys);
            }
        }
        else
            std::cout << "Error: bad input => " << line << std::endl;
    }
    if (empty)
        std::cout << "Error: empty file." << std::endl;
    inputFile.close();
}

void BitcoinExchange::printData()
{
    for (std::map<std::string, std::string>::iterator it = _map.begin(); it != _map.end(); it++)
        std::cout << it->first << " => " << it->second << std::endl;
}

bool BitcoinExchange::check_key(std::string key)
{
    if (key.length() != 10)
        return (false);    
    if (key[4] != '-' || key[7] != '-')
        return (false);
    
    for (int i = 0; i < 10; ++i)
    {
        if (i == 4 || i == 7)
            continue;
        if (!isdigit(key[i]))
            return (false);
    }
    int year = std::atoi(key.substr(0, 4).c_str());
    if (year < 2008 || year > 2024)
    {
        std::cout << "Error: not valid input" << year << std::endl;
        return (false);
    }
    int month = std::atoi(key.substr(5, 2).c_str());
    if (month < 1 || month > 12)
        return (false);
    int day = std::atoi(key.substr(8, 2).c_str());
    if (day < 1 || day > 31)
        return (false);
    if (month == 2 && day > 29)
        return (false);
    return (true);
}

bool BitcoinExchange::check_value(std::string value, int x)
{
    if (value[0] == '-')
    {
        std::cout << "Error: not a positive number." << std::endl;
        return (false);
    }
    for (unsigned long i = 0; i < value.length(); ++i)
    {
        if (!isdigit(value[i]) && value[i] != '.')
            return (false);
    }
    if (x == 1)
    {
        double f = std::atof(value.c_str());
        if (f < 0)
        {
            std::cout << "Error: not a positive number." << std::endl;
            return (false);
        }
        if (f > 1000)
        {
            std::cout << "Error: too large a number." << std::endl;
            return (false);
        }
    }
    return (true);
}


bool BitcoinExchange::convert_check_date(std::string *str1, std::string *str2, int x)
{;
    int year1 = std::atoi(str1->substr(0, 4).c_str());
    int month1 = std::atoi(str1->substr(5, 2).c_str());
    int day1 = std::atoi(str1->substr(8, 2).c_str());
    int year2 = std::atoi(str2->substr(0, 4).c_str());
    int month2 = std::atoi(str2->substr(5, 2).c_str());
    int day2 = std::atoi(str2->substr(8, 2).c_str());
    if (x == 1)
    {
        if (year1 == year2 && month1 == month2 && day1 == day2)
            return (true);
        if (year1 == year2 && month1 == month2 && day1 > day2)
        {
            _bool_line = 1;
            return (true);
        }
        if (year1 == year2 && month1 > month2)
            return (true);
        if (year1 > year2)
            return (true);
        return (false);
    }
    else
    {
        if (year1 > year2)
            return (true);
        if (year1 == year2 && month1 > month2)
            return (true);
        if (year1 == year2 && month1 == month2 && day1 > day2)
            return (true);
    }
    return (false);
}

void BitcoinExchange::get_csv() 
{
    std::ifstream inputFile("data.csv");
    if (!inputFile.is_open())
    {
        std::cerr << "Erreur lors de l'ouverture du fichier : " << "data.csv" << std::endl;
        return;
    }
    std::string line;
    while (std::getline(inputFile, line))
    {
        std::string key, value;
        std::istringstream lineStream(line);
        if (std::getline(lineStream, key, ',') && std::getline(lineStream, value))
        {
            if (check_key(key) && check_value(value, 0))
                _map[key] = value;
        }
    }
    inputFile.close();
}

std::string** BitcoinExchange::sort_key()
{
    std::string** keys = new std::string*[_map.size()];
    int index = 0;
    for (std::map<std::string, std::string>::iterator it = _map.begin(); it != _map.end(); ++it)
        keys[index++] = new std::string(it->first);

    for (unsigned long i = 0; i < _map.size(); ++i)
    {
        for (unsigned long j = 0; j < _map.size() - 1; ++j)
        {
            if (convert_check_date(keys[j], keys[j + 1], 0))
            {
                std::string *temp = keys[j];
                keys[j] = keys[j + 1];
                keys[j + 1] = temp;
            }
        }
    }
    return (keys);
}