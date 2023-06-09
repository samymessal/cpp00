/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smessal <smessal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 17:30:26 by smessal           #+#    #+#             */
/*   Updated: 2023/06/11 18:09:08 by smessal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(std::string in_type) : Animal(in_type)
{
	std::cout << "Cat constructor called, the Cat has a name" << std::endl;
	return ;
}

Cat::Cat(void) : Animal("Cat")
{
	std::cout << "Cat default constructor called" << std::endl;
	return ;
}

Cat::Cat(const Cat &other) : Animal(other)
{
	std::cout << "Cat copy constructor called" << std::endl;
	return ;
}

Cat	&Cat::operator=(const Cat &other)
{
	Animal::operator=(other);
	std::cout << "Cat assignment overload called" << std::endl;
	return (*this);
}

Cat::~Cat(void)
{
	std::cout << "Cat default destructor called" << std::endl;
	return ;
}

void	Cat::makeSound(void) const
{
	std::cout << this->getType() << " is mew mewing" << std::endl;
	return ;
}