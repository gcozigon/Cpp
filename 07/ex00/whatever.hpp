/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcozigon <gcozigon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 14:39:35 by gcozigon          #+#    #+#             */
/*   Updated: 2024/02/23 14:40:30 by gcozigon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template< typename T >
void	swap(T &a, T &b)
{
    T	tmp;

    tmp = a;
    a = b;
    b = tmp;
}

template< typename T >
T	min(T a, T b)
{
    return (a < b ? a : b);
}

template< typename T >
T	max(T a, T b)
{
    return (a > b ? a : b);
}

#endif