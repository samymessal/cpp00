/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smessal <smessal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 22:26:14 by smessal           #+#    #+#             */
/*   Updated: 2023/05/29 14:17:34 by smessal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string id)
{
    this->_name = id;
    std::cout << "HumanB personalised constructor called for " << this->_name << std::endl;
    return ;
};

HumanB::~HumanB(void)
{
    std::cout << "HumanB default constructor called for " << this->_name << std::endl;
    return ;
};

void    HumanB::attack(void) const
{
    std::cout << this->_name << " attacks with their " << this->_arme.getType() <<std::endl;
    return ;
}

void    HumanB::setWeapon(Weapon weapon)
{
    this->_arme = weapon;
    return ;
}