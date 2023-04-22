/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smessal <smessal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 18:25:01 by smessal           #+#    #+#             */
/*   Updated: 2023/04/22 14:01:37 by smessal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(std::string in_type) : Animal(in_type), mybrain()
{
	std::cout << "Dog constructor called, the dog has a name" << std::endl;
	return ;
}

Dog::Dog(void) : Animal("Dog"), mybrain()
{
	std::cout << "Dog default constructor called" << std::endl;
	return ;
}

Dog::~Dog(void)
{
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
	mybrain.print_ideas();
	return ;
}
