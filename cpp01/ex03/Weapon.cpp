/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smessal <smessal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 21:33:28 by smessal           #+#    #+#             */
/*   Updated: 2023/05/30 12:36:24 by smessal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void)
{
    std::cout << "Default Weapon constructor called" << std::endl;
    this->_type = "NULL";
    return ;
}

Weapon::Weapon(std::string set2) : _type(set2)
{
    std::cout << "Weapon type set to " << set2 << " by customized constructor" << std::endl;
    return ;
}

Weapon::~Weapon(void)
{
    std::cout << "Default Weapon destructor called for type: " << _type << std::endl;
    return ;
}

Weapon::Weapon(const Weapon &other)
{
    this->_type = other.getType();
    return ;
}

Weapon  Weapon::operator=(const Weapon &equal)
{
    this->_type = equal._type;
    return (*this);
}

const std::string &Weapon::getType(void) const
{
    return (this->_type);
}

void    Weapon::setType(std::string set3)
{
    this->_type = set3;
    return ;
}