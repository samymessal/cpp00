/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smessal <smessal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 16:50:40 by smessal           #+#    #+#             */
/*   Updated: 2023/06/15 17:51:12 by smessal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(std::string in_type) : mybrain(new Brain)
{
	this->_type = in_type;
	std::cout << "Dog constructor called, the dog has a name" << std::endl;
	return ;
}

Dog::Dog(void) : mybrain(new Brain)
{
	this->_type = "notype";
	std::cout << "Dog default constructor called" << std::endl;
	return ;
}

Dog::Dog(const Dog &other)
{
	std::cout << "Dog copy constructor called" << std::endl;
	this->mybrain = new Brain(*(other.mybrain));
	return ;
}

Dog	&Dog::operator=(const Dog &other)
{
	if (this != &other)
	{
		Brain	*temp = new Brain(*other.mybrain);
		if (this->mybrain)
			delete mybrain;
		this->mybrain = temp;
	}
	std::cout << "Dog assignment overload called" << std::endl;
	return (*this);
}

Dog::~Dog(void)
{
	if (mybrain)
		delete mybrain;
	std::cout << "Dog default destructor called" << std::endl;
	return ;
}

void	Dog::makeSound(void) const
{
	std::cout << this->getType() << " is barking" << std::endl;
	return ;
}

void	Dog::print_ideas(void) const
{
	mybrain->print_ideas();
	return ;
}
