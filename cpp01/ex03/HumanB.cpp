/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smessal <smessal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 22:26:14 by smessal           #+#    #+#             */
/*   Updated: 2023/04/03 22:44:22 by smessal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string id)
{
    this->name = id;
    return ;
};

HumanB::~HumanB(void)
{
    return ;
};

void    HumanB::attack(void) const
{
    std::cout << this->name << " attacks with their " << this->arme <<std::endl;
    return ;
}

void    HumanB::setWeapon(Weapon weapon)
{
    this->arme = weapon.getType();
    return ;
}