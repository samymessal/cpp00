/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smessal <smessal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 21:33:28 by smessal           #+#    #+#             */
/*   Updated: 2023/04/03 23:20:50 by smessal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void)
{
    return ;
}

Weapon::Weapon(std::string set2)
{
    this->type = set2;
    return ;
}

Weapon::~Weapon(void)
{
    return ;
}

const std::string &Weapon::getType(void) const
{
    static const std::string& str = this->type;
    return (str);
}

void    Weapon::setType(std::string set3)
{
    this->type = set3;
    return ;
}