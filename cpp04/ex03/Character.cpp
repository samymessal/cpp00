/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smessal <smessal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 18:34:54 by smessal           #+#    #+#             */
/*   Updated: 2023/06/15 20:03:31 by smessal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
	_name = "noname";
	_inventory[0] = NULL;
	_inventory[1] = NULL;
	_inventory[2] = NULL;
	_inventory[3] = NULL;
	for (int i = 0; i < 100; i++)
		dumbadd[i] = NULL;
	std::cout << "Default Character constructor called" << std::endl;
}

Character::Character(const std::string &name)
{
	_name = name;
	_inventory[0] = NULL;
	_inventory[1] = NULL;
	_inventory[2] = NULL;
	_inventory[3] = NULL;
	for (int i = 0; i < 100; i++)
		dumbadd[i] = NULL;
	std::cout << "Character constructor initialised name" << std::endl;
}


Character	&Character::operator=(const Character &equal)
{
	if (this != &equal)
	{
		this->_name = equal.getName();
		for (int i = 0; i < 4; i++)
		{
			if (this->_inventory[i])
				delete this->_inventory[i];
		}
		for (int i = 0; i < 4; i++)
			this->_inventory[i] = equal._inventory[i]->clone();
	}
	return (*this);
}

Character::Character(const Character &cpy)
{
	_inventory[0] = NULL;
	_inventory[1] = NULL;
	_inventory[2] = NULL;
	_inventory[3] = NULL;
	for (int i = 0; i < 100; i++)
		dumbadd[i] = NULL;
	*this = cpy;
	std::cout << "Copy Character constructor called" << std::endl;
}

std::string const	&Character::getName() const
{
	return (this->_name);
}

void	Character::equip(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (!_inventory[i])
		{
			_inventory[i] = m->clone();
			std::cout << "Equipment successfully equipped" << std::endl;
			return ;
		}
	}
	std::cout << "Could not equip item, inventory full" << std::endl;
}

void	Character::unequip(int idx)
{
	if (idx < 4 && idx >= 0 && _inventory[idx])
	{
		for (int i = 0; i < 100; i++)
		{
			if (!dumbadd[i])
			{
				dumbadd[i] = _inventory[idx];
				break ;
			}
			if (i == 99)
			{
				delete dumbadd[i];
				dumbadd[i] = _inventory[idx];
			}
		}
		_inventory[idx] = NULL;
		std::cout << "Equipment succesfully dropped" << std::endl;
	}
	else
		std::cout << "Could not drop equipment, unvalid index" << std::endl;
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx > 3 || !_inventory[idx])
	{
		std::cout << "Could not use Materia, unvalid index or empty slot" << std::endl;
		return ;
	}
	if (_inventory[idx])
		_inventory[idx]->use(target);
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i])
			delete _inventory[i];
	}
	for (int i = 0; i < 100; i++)
	{
		if (dumbadd[i])
			delete dumbadd[i];
	}
	std::cout << "Default Character destructor called" << std::endl;
}