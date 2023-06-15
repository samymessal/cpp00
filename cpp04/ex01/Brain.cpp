/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smessal <smessal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 18:43:32 by smessal           #+#    #+#             */
/*   Updated: 2023/06/15 15:42:50 by smessal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	this->ideas = NULL;
	this->rand_ideas();
	std::cout << "Brain default constructor called" << std::endl;
	return ;
}

Brain::~Brain(void)
{
	if (ideas)
		delete[] ideas;
	std::cout << "Brain destructor called, ideas freed" << std::endl;
	return ;
}

void	Brain::rand_ideas(void)
{
	std::stringstream	num;
	
	if (ideas)
		delete [] ideas;
	this->ideas = new std::string[100];
	for (int i = 0; i < 100; i++)
	{
		num << i;
		this->ideas[i] = "idea " + num.str();
		num.str("");
	}
	return ;
}

Brain::Brain(const Brain &cpy)
{
	this->ideas = NULL;
	this->rand_ideas();
	for (int i = 0; i < 100; i++)
		this->ideas[i] = cpy.ideas[i];
	std::cout <<"Brain copy constructor called" << std::endl;
	return ;
}

Brain	Brain::operator=(const Brain &equal)
{	
	if (this != &equal)
	{
		for (int i = 0; i < 100; i++)
			this->ideas[i] = equal.ideas[i];
	}
	std::cout << "Brain overload operator = called" << std::endl;
	return (*this);
}

void	Brain::print_ideas(void) const
{
	if (ideas)
	{
		for (int i = 0; i < 100; i++)
			std::cout << this->ideas[i] << std::endl;
	}
	return ;
}
