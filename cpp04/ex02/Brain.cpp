/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smessal <smessal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 16:50:17 by smessal           #+#    #+#             */
/*   Updated: 2023/04/22 16:50:19 by smessal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	this->rand_ideas();
	std::cout << "Brain default constructor called" << std::endl;
	return ;
}

Brain::~Brain(void)
{
	delete[] ideas;
	std::cout << "Brain destructor called, ideas freed" << std::endl;
	return ;
}

void	Brain::rand_ideas(void)
{
	std::stringstream	num;
	
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
	this->ideas = new std::string[100];
	for (int i = 0; i < 100; i++)
		this->ideas[i] = cpy.ideas[i];
	std::cout <<"Brain copy constructor called" << std::endl;
	return ;
}

Brain	Brain::operator=(const Brain &equal)
{
	if (this != &equal)
	{
		delete[] ideas;
		this->ideas = new std::string[100];
		for (int i = 0; i < 100; i++)
			this->ideas[i] = equal.ideas[i];
	}
	std::cout << "Brain overload operator = called" << std::endl;
	return (*this);
}

void	Brain::print_ideas(void) const
{
	for (int i = 0; i < 100; i++)
		std::cout << this->ideas[i] << std::endl;
	return ;
}
