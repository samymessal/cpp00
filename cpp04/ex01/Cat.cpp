/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smessal <smessal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 18:24:49 by smessal           #+#    #+#             */
/*   Updated: 2023/04/22 14:01:25 by smessal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(std::string in_type) : Animal(in_type), mybrain()
{
	std::cout << "Cat constructor called, the Cat has a name" << std::endl;
	return ;
}

Cat::Cat(void) : Animal("Cat"), mybrain()
{
	std::cout << "Cat default constructor called" << std::endl;
	return ;
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

void	Cat::print_ideas(void) const
{
	mybrain.print_ideas();
	return ;
}