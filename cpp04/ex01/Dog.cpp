/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smessal <smessal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 18:25:01 by smessal           #+#    #+#             */
/*   Updated: 2023/04/20 18:25:03 by smessal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(std::string in_type) : Animal(in_type)
{
	std::cout << "Dog constructor called, the dog has a name" << std::endl;
	return ;
}

Dog::Dog(void) : Animal("Dog")
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
