/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcozigon <gcozigon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 15:29:19 by gcozigon          #+#    #+#             */
/*   Updated: 2024/03/13 14:15:51 by gcozigon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <algorithm>
#include "PmergeMe.hpp"

int main(int ac, char **av)
{
    (void)ac;
    if (!parseArgs(av))
        return (1);
    PmergeMe p(av);
    return (0);
}