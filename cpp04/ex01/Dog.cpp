/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smessal <smessal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 18:25:01 by smessal           #+#    #+#             */
/*   Updated: 2023/06/11 18:37:26 by smessal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(std::string in_type) : Animal(in_type), mybrain(new Brain)
{
	std::cout << "Dog constructor called, the dog has a name" << std::endl;
	return ;
}

Dog::Dog(void) : Animal("Dog"), mybrain(new Brain)
{
	std::cout << "Dog default constructor called" << std::endl;
	return ;
}

Dog::Dog(const Dog &other) : Animal(other)
{
	std::cout << "Dog copy constructor called" << std::endl;
	this->mybrain = new Brain(*(other.mybrain));
	return ;
}

Dog	&Dog::operator=(const Dog &other)
{
	Brain	*temp = new Brain(*other.mybrain);
	Animal::operator=(other);
	if (this != &other)
		this->mybrain = temp;
	else
		delete temp;
	std::cout << "Dog assignment overload called" << std::endl;
	return (*this);
}

Dog::~Dog(void)
{
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
