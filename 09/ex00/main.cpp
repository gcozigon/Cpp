/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcozigon <gcozigon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 16:24:22 by gcozigon          #+#    #+#             */
/*   Updated: 2024/03/13 14:51:52 by gcozigon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char **argv)
{
    if (ac != 2)
    {
        std::cout << "Error: could not open file." << std::endl;
        return 1;
    }
    std::ifstream inputFile(argv[1]);
    if (!inputFile.is_open())
    {
        std::cerr << "Erreur lors de l'ouverture du fichier : " << argv[1] << std::endl;
       return (1);
    }
    BitcoinExchange exchange(argv[1]);
    return (0);
}

