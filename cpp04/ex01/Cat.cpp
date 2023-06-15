/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smessal <smessal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 18:24:49 by smessal           #+#    #+#             */
/*   Updated: 2023/06/15 16:13:03 by smessal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(std::string in_type) : Animal(in_type), mybrain(new Brain)
{
	std::cout << "Cat constructor called, the Cat has a name" << std::endl;
	return ;
}

Cat::Cat(void) : Animal("Cat"), mybrain(new Brain)
{
	std::cout << "Cat default constructor called" << std::endl;
	return ;
}

Cat::Cat(const Cat &other) : Animal(other)
{
	std::cout << "Cat copy constructor called" << std::endl;
	this->mybrain = new Brain(*other.mybrain);
	return ;
}

Cat	&Cat::operator=(const Cat &other)
{
	if (this != &other)
	{
		Brain	*temp = new Brain(*other.mybrain);
		Animal::operator=(other);
		if (mybrain)
			delete mybrain;
		this->mybrain = temp;
	}
	std::cout << "Cat assignment overload called" << std::endl;
	return (*this);
}

Cat::~Cat(void)
{
	std::cout << "Cat default destructor called" << std::endl;
	if (mybrain)
		delete mybrain;
	return ;
}

void	Cat::makeSound(void) const
{
	std::cout << this->getType() << " is mew mewing" << std::endl;
	return ;
}

void	Cat::print_ideas(void) const
{
	mybrain->print_ideas();
	return ;
}