/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smessal <smessal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 16:50:00 by smessal           #+#    #+#             */
/*   Updated: 2023/04/22 16:50:03 by smessal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
	std::cout << "Animal default constructor called" <<std::endl;
	return ;
}

Animal::Animal(std::string init_type) : _type(init_type)
{
	std::cout << "Animal constructor initialised type" << std::endl;
	return ;
}

Animal::Animal(const Animal &cpy) : _type(cpy.getType())
{
	std::cout <<"Animal copy constructor called" << std::endl;
	return ;
}

Animal	Animal::operator=(const Animal &equal)
{
	this->_type = equal._type;
	std::cout << "Animal overload operator = called" << std::endl;
	return (*this);
}

Animal::~Animal(void)
{
	std::cout << "Animal default destructor called" << std::endl;
	return ;
}

void	Animal::makeSound(void) const
{
	std::cout << "Animal sound not specified" << std::endl;
	return ;
}

std::string		Animal::getType(void) const
{
	return (this->_type);
}
