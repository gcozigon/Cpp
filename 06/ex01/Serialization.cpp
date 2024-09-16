/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcozigon <gcozigon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 21:01:36 by gcozigon          #+#    #+#             */
/*   Updated: 2024/02/22 16:17:44 by gcozigon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"


Serialization::Serialization()
{
}

Serialization::Serialization(Serialization const &src)
{
    *this = src;
}

Serialization::~Serialization()
{
}

Serialization &Serialization::operator=(Serialization const &rhs)
{
    if (this != &rhs)
        *this = rhs;
    return (*this);
}

uintptr_t Serialization::serialize(Data* ptr)
{
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data* Serialization::deserialize(uintptr_t raw)
{
    return (reinterpret_cast<Data*>(raw));
}
