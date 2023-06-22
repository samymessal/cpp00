/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smessal <smessal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 11:37:07 by smessal           #+#    #+#             */
/*   Updated: 2023/06/22 12:15:25 by smessal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	for(int i = 0; i < 4; i++)
		_inventory[i] = NULL;
	std::cout << "Default Materia Source constructor called" << std::endl;
}

MateriaSource	&MateriaSource::operator=(const MateriaSource &equal)
{
	if (this != &equal)
	{
		for (int i = 0; i < 4; i++)
		{
			if (_inventory[i])
				delete _inventory[i];
			_inventory[i] = NULL;
		}
		for (int i = 0; i < 4; i++)
			_inventory[i] = equal._inventory[i]->clone();
	}
	return (*this);
}

MateriaSource::MateriaSource(const MateriaSource &cpy)
{
	for (int i = 0; i < 4; i++)
		_inventory[i] = NULL;
	*this = cpy;
	std::cout << "Copy MateriaSource constructor called" << std::endl;
}

MateriaSource::~MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i])
			delete _inventory[i];
	}
	std::cout << "Default MateriaSource destructor called" << std::endl;
}

void	MateriaSource::learnMateria(AMateria *materia)
{
	int	i = 0;
	
	while (_inventory[i])
		i++;
	if (i == 4)
		std::cout << "No slots available to learn materia" << std::endl;
	else
		_inventory[i] = materia;	
}

AMateria	*MateriaSource::createMateria(std::string const &type)
{
	if (type == "cure")
		return (new Cure());
	else if (type == "ice")
		return (new Ice());
	else
		std::cout << "Unknown type, unable to create materia" << std::endl;
	return (NULL);
}
