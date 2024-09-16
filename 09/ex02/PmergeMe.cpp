/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcozigon <gcozigon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 17:28:50 by gcozigon          #+#    #+#             */
/*   Updated: 2024/03/13 15:21:36 by gcozigon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"


PmergeMe::PmergeMe(char **av)
{
	std::string token;
	std::vector <int> print;

    for (int i = 1; av[i]; i++)
		print.push_back(std::atoi(av[i]));
    std::cout << "Before:  ";
    for (unsigned long i = 0; i < print.size(); i++)
        std::cout << print[i] << " ";
    for (unsigned long i = 0; i < print.size(); i++)
        std::cout << print[i] << " ";
    _time._vecBegin = std::clock();
    for (unsigned long i = 0; i < print.size(); i++)
        _vector.push_back(print[i]);
    merge_insert(_vector.begin(), _vector.end());
    _time._vecEnd = std::clock();
    
    _time._dequeBegin = std::clock();
    for (unsigned long i = 0; i < print.size(); i++)
        _deque.push_back(print[i]);
    merge_insert(_deque.begin(), _deque.end());
    _time._dequeEnd = std::clock();
    std::cout << "\nAfter:  ";
    for (unsigned long i = 0; i < _vector.size(); i++)
        std::cout << _vector[i] << " ";
    std::cout << std::endl;
    std::cout << "Time to process a range of " << _vector.size() << " elements with std::vector : " << _time._vecEnd - _time._vecBegin << " us\n";
	std::cout << "Time to process a range of " << _deque.size() << " elements with std::deque : " << _time._dequeEnd - _time._dequeBegin  << " us\n";
}

PmergeMe::~PmergeMe()
{
	std::cout << "Destructor called" << std::endl;
}

PmergeMe::PmergeMe(const PmergeMe &toCopy)
{
	*this = toCopy;
}

PmergeMe &PmergeMe::operator=(const PmergeMe &toCopy)
{
	if (this != &toCopy)
	{
		*this = toCopy;
	}
	return (*this);
}

void	printVector(const std::vector<int> &vec)
{
	std::cout << "Vector: ";
	for (std::vector<int>::const_iterator it = vec.begin(); it != vec.end(); ++it)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}

void PmergeMe::merge_insert(it_vec first, it_vec last)
{
	it_vec	middle;

	// std::cout << "\033[1;31mRECALL\033[0m\n"
	// 			<< std::endl;
	if (std::distance(first, last) <= 1)
	{
		// std::cout << "RETURN" << std::endl;
		return ;
	}
	// std::cout << "Splitting: ";
	// printVector(std::vector<int>(first, last));
	middle = first;
	std::advance(middle, (std::distance(first, last) / 2));
	// std::cout << "FIRST Middle: " << *middle << std::endl;
	merge_insert(first, middle);
	// std::cout << "MIDDLE LAST " << *middle << " last " << *last << std::endl;
	merge_insert(middle, last);
	// std::cout << "Merging: ";
	// printVector(std::vector<int>(first, last));
	std::inplace_merge(first, middle, last);
	// std::cout << "After merge: ";
	// printVector(std::vector<int>(first, last));
}


void PmergeMe::merge_insert(std::deque<int>::iterator first, std::deque<int>::iterator last)
{
    std::deque<int>::iterator middle;
    // std::cout << "\033[1;31mRECALL\033[0m\n"
    // 			<< std::endl;
    if (std::distance(first, last) <= 1)
    {
        // std::cout << "RETURN" << std::endl;
        return ;
    }
    // std::cout << "Splitting: ";
    // printVector(std::vector<int>(first, last));
    middle = first;
    std::advance(middle, (std::distance(first, last) / 2));
    // std::cout << "FIRST Middle: " << *middle << std::endl;
    merge_insert(first, middle);
    // std::cout << "MIDDLE LAST " << *middle << " last " << *last << std::endl;
    merge_insert(middle, last);
    // std::cout << "Merging: ";
    // printVector(std::vector<int>(first, last));
    std::inplace_merge(first, middle, last);
    // std::cout << "After merge: ";
    // printVector(std::vector<int>(first, last));
}

bool	parseArgs(char **av)
{
    if (!*av)
    {
        std::cerr << "Usage: ./PmergeMe [int int int ...]" << std::endl;
        return (false);
    }
    for (int i = 1; av[i]; i++)
    {
        if (av[i] == NULL)
        {
            std::cerr << "Error: " << av[i] << " is not a number" << std::endl;
            return (false);
        }
        std::stringstream ss(av[i]);
        long long int x;
        ss >> x;
        if (x > INT_MAX || x < INT_MIN)
        {
            std::cerr << "Error: " << av[i] << " is out of range" << std::endl;
            return (false);
        }
        for (int j = 0; av[i][j]; j++)
        {
            if (!isdigit(av[i][j]) && av[i][j] != ' ')
            {
                std::cerr << "Error: " << av[i] << " is not a number" << std::endl;
                return (false);
            }
            if ((av[i][j] == ' ' && av[i][j + 1] == ' ') || (av[i][j] == ' ' && isdigit(av[i][j + 1])))
            {
                std::cerr << "Error: " << av[i] << " is not a number" << std::endl;
                return (false);
            }
        }
    }
    return (true);
}
