/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smessal <smessal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 16:50:29 by smessal           #+#    #+#             */
/*   Updated: 2023/06/15 17:52:12 by smessal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(std::string in_type) : mybrain(new Brain)
{
	this->_type = in_type;
	std::cout << "Cat constructor called, the Cat has a name" << std::endl;
	return ;
}

Cat::Cat(void) : mybrain(new Brain)
{
	this->_type = "notype";
	std::cout << "Cat default constructor called" << std::endl;
	return ;
}

Cat::Cat(const Cat &other)
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
		if (mybrain)
			delete mybrain;
		this->mybrain = temp;
	}
	std::cout << "Cat assignment overload called" << std::endl;
	return (*this);
}

Cat::~Cat(void)
{
	if (mybrain)
		delete mybrain;
	std::cout << "Cat default destructor called" << std::endl;
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