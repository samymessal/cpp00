/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smessal <smessal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 12:24:33 by smessal           #+#    #+#             */
/*   Updated: 2023/07/06 12:37:21 by smessal          ###   ########.fr       */
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

void	Span::addNumber(const int &toadd)
{
	if (_vec.size() < _max)
		_vec.push_back(toadd);
	else
		throw Span::MaxSize();
}

