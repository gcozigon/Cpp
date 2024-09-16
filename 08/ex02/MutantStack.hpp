/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcozigon <gcozigon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 14:59:34 by gcozigon          #+#    #+#             */
/*   Updated: 2024/02/27 15:47:50 by gcozigon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <vector>
# include <iostream>
# include <algorithm>
# include <iterator>
# include <stack>
# include <deque>
# include <list>
# include <string>

template <typename T>
class MutantStack : public std::stack<T>
{
    public:
        MutantStack(){};
        MutantStack(const MutantStack &src){if (this != &src){*this = src;}};
        virtual ~MutantStack(){};
        MutantStack	&operator=(const MutantStack &rhs){if (this != &rhs){*this = rhs;}return *this;};
        typedef typename std::stack<T>::container_type::iterator iterator;
        iterator begin(){return std::stack<T>::c.begin();};
        iterator end(){return std::stack<T>::c.end();};
};


#endif