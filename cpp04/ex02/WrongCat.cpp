/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smessal <smessal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 16:51:09 by smessal           #+#    #+#             */
/*   Updated: 2023/04/22 16:51:11 by smessal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(std::string in_type) : WrongAnimal(in_type)
{
	std::cout << "WrongCat constructor called, the WrongCat has a name" << std::endl;
	return ;
}

WrongCat::WrongCat(void) : WrongAnimal("WrongCat")
{
	std::cout << "WrongCat default constructor called" << std::endl;
	return ;
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat default destructor called" << std::endl;
	return ;
}

void	WrongCat::makeSound(void) const
{
	std::cout << this->getType() << " is mew mewing" << std::endl;
	return ;
}