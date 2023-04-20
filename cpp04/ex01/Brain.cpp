/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smessal <smessal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 18:43:32 by smessal           #+#    #+#             */
/*   Updated: 2023/04/20 19:27:59 by smessal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::out << "Brain default constructor called" << std::endl;
	return ;
}

Brain::~Brain(void)
{
	delete[] ideas;
	std::out << "Brain destructor called, ideas freed" << std::endl;
	return ;
}

void	Brain::rand_ideas(void)
{
	this->ideas = new std::string[100];
	for (int i = 0; i < 100; i++)
		this->ideas[i] = "idea " + std::to_string(i);
	return ;
}

Brain::Brain(const Brain &cpy) : _type(cpy.getType())
{
	std::cout <<"Brain copy constructor called" << std::endl;
	return ;
}

Brain	Brain::operator=(const Brain &equal)
{
	this->_type = equal._type;
	std::cout << "Brain overload operator = called" << std::endl;
	return (*this);
}