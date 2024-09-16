/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcozigon <gcozigon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 16:38:13 by gcozigon          #+#    #+#             */
/*   Updated: 2024/03/13 14:16:41 by gcozigon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <string>
# include <iostream>
# include <algorithm>
# include <math.h>
# include <limits.h>
# include <string.h>
# include <ctime>
# include <vector>
# include <deque>
# include <sstream>
# include <cstdlib>
# include <iomanip>
# include <iterator>


// # define INT_MAX 2147483647
// # define INT_MIN -2147483648


typedef struct s_time
{
    std::clock_t _vecBegin;
    std::clock_t _vecEnd;
    std::clock_t _dequeBegin;
    std::clock_t _dequeEnd;
}               t_time;

class PmergeMe
{
    private:
        t_time _time;
        
        std::vector<int> _vector;
        std::deque<int> _deque;
    public:
        PmergeMe();
        PmergeMe(char **av);
        ~PmergeMe();
        PmergeMe(const PmergeMe& toCopy);
        PmergeMe& operator=(const PmergeMe& toCopy);
        

        typedef std::vector<int>::iterator it_vec;
        void merge_insert(it_vec first, it_vec last);
        void merge_insert(std::deque<int>::iterator first, std::deque<int>::iterator last);

};
    
void printVector(const std::vector<int>& vec);
bool parseArgs(char **av);
#endif