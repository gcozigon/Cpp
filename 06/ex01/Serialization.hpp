/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcozigon <gcozigon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 21:01:44 by gcozigon          #+#    #+#             */
/*   Updated: 2024/02/22 16:35:06 by gcozigon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZATION_HPP
# define SERIALIZATION_HPP

# include <iostream>
# include <string>
# include <stdint.h>
# include <sstream>
# include <stdlib.h>

struct Data
{
    std::string str;
    int i;
};

class Serialization
{
  public:
    Serialization(std::string const &input);
    Serialization(Serialization const &src);
    ~Serialization();
    Serialization &operator=(Serialization const &rhs);

    uintptr_t serialize(Data* ptr);
    Data* deserialize(uintptr_t raw);
    
    private:
      Serialization();
};

#endif