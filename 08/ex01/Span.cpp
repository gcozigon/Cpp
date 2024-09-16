/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcozigon <gcozigon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 18:36:09 by gcozigon          #+#    #+#             */
/*   Updated: 2024/02/29 12:11:02 by gcozigon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{
}

Span::Span(unsigned int N) : _N(N)
{
}

Span::Span(const Span& src)
{
    *this = src;
}

Span::~Span()
{
}

Span& Span::operator=(const Span& rhs)
{
    if (this != &rhs)
    {
        _N = rhs._N;
        _v = rhs._v;
    }
    return (*this);
}


int Span::shortestSpan()
{
    if (_v.size() <= 2)
        throw SpanNoSpanException();
    std::sort(_v.begin(), _v.end());
    int min = _v[1] - _v[0];
    for (int i = 1; i < static_cast<int>(_v.size()); i++)
    {
        if (_v[i] - _v[i - 1] < min)
            min = _v[i] - _v[i - 1];
    }
    return (min);
}

int Span::longestSpan()
{
    if (_v.size() <= 2)
        throw SpanNoSpanException();
    std::sort(_v.begin(), _v.end());
    return (_v[_v.size() - 1] - _v[0]);
}
void Span::addNumber(int n)
{
    if (_v.size() >= _N)
        throw SpanFullException();
    _v.push_back(n);
}
const char* Span::SpanFullException::what() const throw()
{
    return ("Span is full");
}

const char* Span::SpanNoSpanException::what() const throw()
{
    return ("No span to find");
}

void Span::addNnumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
    if (_v.size() + std::distance(begin, end) > _N)
        throw SpanFullException();
    _v.insert(_v.end(), begin, end);
}