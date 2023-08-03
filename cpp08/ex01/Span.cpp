/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smessal <smessal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 12:24:33 by smessal           #+#    #+#             */
/*   Updated: 2023/08/03 14:01:55 by smessal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

// Constructors
Span::Span() : _max(0)
{
	std::cout << "\e[0;33mDefault Constructor called of Span\e[0m" << std::endl;
}

Span::Span(unsigned int max) : _max(max)
{
	std::cout << "\e[0;33mMax Size Constructor called of Span\e[0m" << std::endl;
}

Span::Span(const Span &copy)
{
	(void) copy;
	std::cout << "\e[0;33mCopy Constructor called of Span\e[0m" << std::endl;
}


// Destructor
Span::~Span()
{
	std::cout << "\e[0;31mDestructor called of Span\e[0m" << std::endl;
}


// Operators
Span & Span::operator=(const Span &assign)
{
	(void) assign;
	return *this;
}

const char	*Span::MaxSize::what() const throw()
{
	return "Already at max size of Span class"; 	
}

const char	*Span::Empty::what() const throw()
{
	return "Not enough values in Span class"; 	
}

const char	*Span::BadType::what() const throw()
{
	return "Container must contain integers to add on Span class"; 	
}

void	Span::addNumber(const int &toadd)
{
	if (_vec.size() < _max)
		_vec.push_back(toadd);
	else
		throw Span::MaxSize();
}

unsigned int	Span::shortestSpan() const
{
	if (_vec.size() <= 1)
		throw Span::Empty();
	std::vector<int>	sorted = _vec;
	std::sort(sorted.begin(), sorted.end());
	unsigned int		shortest = _max;
	
	for (unsigned int i = 0; i < sorted.size(); i++)
	{
		if (i + 1 < sorted.size())
		{
			if (static_cast<unsigned int>(sorted[i + 1] - sorted[i]) < shortest)
				shortest = sorted[i + 1] - sorted[i];
		}
	}
	return shortest;
}

unsigned int	Span::longestSpan() const
{
	if (_vec.size() <= 1)
		throw Span::Empty();
	std::vector<int>	sorted = _vec;
	std::sort(sorted.begin(), sorted.end());
	unsigned int		longest = sorted.back() - sorted.front();
	// if (longest < sorted.front())
	// 	throw Span::Overflow();
	return longest;
}

void	Span::addArr(int start, int end)
{
	unsigned int	check = static_cast<unsigned int>(end - start);
	if (_vec.size() + check > _max && start < end)
		throw Span::MaxSize();
	while (start <= end)
	{
		addNumber(start);
		start++;
	}
}