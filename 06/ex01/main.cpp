/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcozigon <gcozigon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 11:03:31 by gcozigon          #+#    #+#             */
/*   Updated: 2024/02/22 16:28:33 by gcozigon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

int main(void)
{
    Data data;
    data.str = "Hello";
    data.i = 42;

    Serialization s;
    std::cout << "data.str: " << data.str << std::endl;
    std::cout << "data.i: " << data.i << std::endl;
    std::cout << "data ptr: " << &data << std::endl;
    uintptr_t raw = s.serialize(&data);
    std::cout << "raw: " << raw << std::endl;
    
    Data *ptr = s.deserialize(raw);

    std::cout << "ptr->str: " << ptr->str << std::endl;
    std::cout << "ptr->i: " << ptr->i << std::endl;
    std::cout << "ptr: " << ptr << std::endl;

    return (0);
}

