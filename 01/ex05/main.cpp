/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcozigon <gcozigon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 16:32:07 by gcozigon          #+#    #+#             */
/*   Updated: 2024/01/10 18:02:39 by gcozigon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int main(void)
{
    Harl test;
    
    test.complain("INFO");
    test.complain("WARNING");
    test.complain("DEBUG");
    test.complain("DEBUG");
    test.complain("DEBUG");
    test.complain("DEBUG");
    test.complain("ERROR");
    return 0;
}
