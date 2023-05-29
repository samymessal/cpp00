/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smessal <smessal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 21:33:28 by smessal           #+#    #+#             */
/*   Updated: 2023/05/29 15:01:03 by smessal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void)
{
    std::cout << "Default constructor called for Weapon" << std::endl;
    this->_type = NULL;
    return ;
}

Weapon::Weapon(std::string set2)
{
    this->_type = new std::string;
    *this->_type = set2;
    std::cout << "Weapon type set to " << set2 << " by customized constructor" << std::endl;
    return ;
}

Weapon::~Weapon(void)
{
    std::cout << "Default Weapon destructor called" << std::endl;
    if (this->_type)
        delete this->_type;
    return ;
}

Weapon  Weapon::operator=(const Weapon &equal)
{
    this->_type = equal._type;
    return (*this);
}

const std::string &Weapon::getType(void) const
{
    static const std::string& str = *this->_type;
    return (str);
}

void    Weapon::setType(std::string set3)
{
    *this->_type = set3;
    return ;
}