/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcozigon <gcozigon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 16:32:07 by gcozigon          #+#    #+#             */
/*   Updated: 2024/01/10 17:25:11 by gcozigon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
# include <string>

#include <iostream>
#include <string>

int main() {
    std::string str = "HI THIS IS BRAIN";

    std::cout << "Adresse de la string en mémoire : " << &str << std::endl;

    std::string* stringPTR = &str;

    std::cout << "Adresse stockée dans stringPTR : " << stringPTR << std::endl;

    std::string &stringREF = str;

    std::cout << "Adresse stockée dans stringREF : " << &stringREF << std::endl;
   
    std::cout << "Valeur de la string : " << str << std::endl;

    std::cout << "Valeur pointée par stringPTR : " << *stringPTR << std::endl;

    std::cout << "Valeur pointée par stringREF : " << stringREF << std::endl;

    return 0;
}
