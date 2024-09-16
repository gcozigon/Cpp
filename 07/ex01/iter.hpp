/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcozigon <gcozigon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 14:39:35 by gcozigon          #+#    #+#             */
/*   Updated: 2024/02/23 15:17:19 by gcozigon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP


#include <iostream>
#include <string>
#include <typeinfo>
#include <iomanip>

template <typename T>
void print(const T &x)
{
    std::cout << std::endl;
    std::cout << x << " ";
}
    

template <typename T>
void	iter(T *array, int size, void (*f)(T const &))
{
	for (int i = 0; i < size; i++)
		f(array[i]);
}

#endif