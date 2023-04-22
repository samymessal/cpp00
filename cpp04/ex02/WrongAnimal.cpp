/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smessal <smessal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 16:50:59 by smessal           #+#    #+#             */
/*   Updated: 2023/04/22 16:51:01 by smessal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	std::cout << "WrongAnimal default constructor called" <<std::endl;
	return ;
}

WrongAnimal::WrongAnimal(std::string init_type) : _type(init_type)
{
	std::cout << "WrongAnimal constructor initialised type" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(const WrongAnimal &cpy) : _type(cpy.getType())
{
	std::cout <<"WrongAnimal copy constructor called" << std::endl;
	return ;
}

WrongAnimal	WrongAnimal::operator=(const WrongAnimal &equal)
{
	this->_type = equal._type;
	std::cout << "WrongAnimal overload operator = called" << std::endl;
	return (*this);
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal default destructor called" << std::endl;
	return ;
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "WrongAnimal sound not specified" << std::endl;
	return ;
}

std::string		WrongAnimal::getType(void) const
{
	return (this->_type);
}
