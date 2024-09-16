/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcozigon <gcozigon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 20:07:57 by gcozigon          #+#    #+#             */
/*   Updated: 2023/11/21 14:13:05 by gcozigon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int ac, char **av)
{
	if (ac >= 2)
	{
		for (int i = 1; av[i]; ++i)
        {
		    for (int j = 0; av[i][j]; ++j)
			    std::cout << (char)toupper((int)av[i][j]);
        }
		std::cout << std::endl;
		return (0);
	}
	std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
}