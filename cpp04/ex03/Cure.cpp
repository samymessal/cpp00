/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smessal <smessal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 18:25:47 by smessal           #+#    #+#             */
/*   Updated: 2023/06/22 12:17:22 by smessal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void)
{
	this->_type = "Cure";
	std::cout << "Default constructor called for Cure" << std::endl;
}

Cure	&Cure::operator=(const Cure &equal)
{
	(void)equal;
	std::cout << "Overload Cure assignment operator called" << std::endl;
	return (*this);
}

Cure::Cure(const Cure &cpy)
{
	(void)cpy;
	std::cout << "Copy constructor Cure called" << std::endl;
}

Cure::~Cure()
{
	std::cout << "Default destructor Cure called" << std::endl;
}

AMateria*	Cure::clone() const
{
	Cure	*temp = new Cure();
	std::cout << "Clone function called" << std::endl;
	return (temp);
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals "<< target.getName() <<"’s wounds *" <<  std::endl;
}
