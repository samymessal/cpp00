/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smessal <smessal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 18:22:41 by smessal           #+#    #+#             */
/*   Updated: 2023/06/22 12:17:09 by smessal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void)
{
	this->_type = "ice";
	std::cout << "Default constructor called for Ice" << std::endl;
}

Ice	&Ice::operator=(const Ice &equal)
{
	(void)equal;
	std::cout << "Overload Ice assignment operator called" << std::endl;
	return (*this);
}

Ice::Ice(const Ice &cpy)
{
	(void)cpy;
	std::cout << "Copy constructor Ice called" << std::endl;
}

Ice::~Ice()
{
	std::cout << "Default destructor Ice called" << std::endl;
}

AMateria*	Ice::clone() const
{
	Ice	*temp = new Ice();
	std::cout << "Clone function called" << std::endl;
	return (temp);
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}