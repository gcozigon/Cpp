/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcozigon <gcozigon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 15:20:05 by gcozigon          #+#    #+#             */
/*   Updated: 2024/02/24 11:40:36 by gcozigon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <exception>
# include <iomanip>
# include <iostream>
# include <stdexcept>
# include <string>
# include <typeinfo>

template <typename T>
class Array
{
public:
    Array(){_n = 0; _array = new T[_n];};
    ~Array(){delete[] _array;};
    Array(unsigned int n): _n(n), _array(new T[n]){};
    T &operator[](unsigned int i)
    {
        if (i >= static_cast<unsigned int>(_n))
            throw std::out_of_range("Index out of range");
        return (_array[i]);
    }
    int size() const
    {
        return (this->_n);
    }
    Array(const Array &src)
    {
        for (int i = 0; i < src.size(); i++)
        {
            this->_array[i] = src[i];
        }
    }
    Array &operator=(const Array &rhs)
    {
        if (this != &rhs)
        {
            delete[] _array;
            _n = rhs.size();
            _array = new T[_n];
            for (int i = 0; i < _n; i++)
            {
                _array[i] = rhs[i];
            }
        }
        return (*this);
    }

private:
    int _n;
    T *_array;
};
std::ostream &operator<<(std::ostream &o, Array<int> &rhs)
{
    for (int i = 0; i < rhs.size(); i++)
    {
        o << rhs[i] << " ";
    }
    return (o);
}

#endif
