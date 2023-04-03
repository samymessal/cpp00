/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smessal <smessal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 22:02:48 by smessal           #+#    #+#             */
/*   Updated: 2023/04/03 23:00:01 by smessal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string id, Weapon weapon)
{
    this->arme = weapon.getType();
    this->name = id;
    return ;
}

HumanA::~HumanA(void)
{
    return ;
}

void    HumanA::attack(void) const
{
    std::cout << this->name << " attacks with their " << this->arme <<std::endl;
    return ;
}