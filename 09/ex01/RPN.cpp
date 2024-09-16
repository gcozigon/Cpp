/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcozigon <gcozigon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 15:46:46 by gcozigon          #+#    #+#             */
/*   Updated: 2024/03/13 15:07:40 by gcozigon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"
#include <iostream>
#include <stdlib.h>

RPN::RPN()
{
    return;
}

RPN::RPN(const RPN &src)
{
    *this = src;
    return;
}

RPN &RPN::operator=(const RPN &rhs)
{
    if (this != &rhs)
    {
        this->_stack = rhs._stack;
    }
    return *this;
}

RPN::~RPN()
{
    return;
}

void RPN::exec_operator(char c)
{
    if (_stack.size() < 2)
    {
        std::cout << "Error : Not enough operands" << std::endl;
        exit(1);
    }
    int a = _stack.back();
    _stack.pop_back();
    int b = _stack.back();
    _stack.pop_back();
    if (c == '+')
        _stack.push_back(b + a);
    else if (c == '-')
        _stack.push_back(b - a);
    else if (c == '*')
        _stack.push_back(b * a);
    else if (c == '/')
    {
        if (a == 0)
        {
            std::cout << "Error : Division by zero" << std::endl;
            exit(1);
        }
        _stack.push_back(b / a);
    }
}

void RPN::parseInput(char *str)
{
    int i = -1;
    while (str[++i])
    {
        if ((isdigit(str[i]) && str[i + 1] == ' ') || (isdigit(str[i]) && str[i + 1] == '\0')) 
            _stack.push_back(str[i] - '0');
        else if (str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/' || str[i] == '%')
            exec_operator(str[i]);
        else if (str[i] == ' ')
            ;
        else
        {
            std::cout << "Error : Invalid input" << std::endl;
            exit(1);
        }
    }
    std::cout << _stack.back() << std::endl;
}
