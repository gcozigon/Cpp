/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcozigon <gcozigon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 18:10:42 by gcozigon          #+#    #+#             */
/*   Updated: 2024/02/27 14:47:35 by gcozigon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <algorithm>
# include <climits>
# include <exception>
# include <iostream>
# include <vector>
# include <string>
# include <sstream>
# include <stdexcept>

class Span
{
  public:
	Span();
	Span(unsigned int N);
	Span(const Span &src);
	~Span();
	Span &operator=(const Span &rhs);
    

	void addNumber(int n);
	int shortestSpan();
	int longestSpan();
    void addNnumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end);    

	class SpanFullException : public std::exception
	{
		public:
		virtual const char *what() const throw();
	};
	class SpanNoSpanException : public std::exception
	{
		public:
		virtual const char *what() const throw();
	};

  private:
	unsigned int _N;
	std::vector<int> _v;
};

#endif