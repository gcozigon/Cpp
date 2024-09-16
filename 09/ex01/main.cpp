/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcozigon <gcozigon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 15:47:07 by gcozigon          #+#    #+#             */
/*   Updated: 2024/03/04 19:42:39 by gcozigon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

#include <iostream>
#include <string>

int main(int ac, char **av)
{
    if (ac < 2)
    {
        std::cout << "Usage: ./rpn \"expression\"" << std::endl;
        return 1;
    }
    RPN rpn;
    rpn.parseInput(av[1]);
    return (0);
}