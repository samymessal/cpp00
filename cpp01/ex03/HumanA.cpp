/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smessal <smessal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 22:02:48 by smessal           #+#    #+#             */
/*   Updated: 2023/05/30 12:45:03 by smessal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string id, Weapon &weapon) : _arme(weapon), _name(id)
{
    std::cout << "HumanA personalised constructor called for " << this->_name << std::endl;
    return ;
}

HumanA::~HumanA(void)
{
    std::cout << "HumanA default constructor called for " << this->_name << std::endl;
    return ;
}

void    HumanA::attack(void) const
{
        std::cout << this->_name << " attacks with their " << this->_arme.getType() <<std::endl;
    return ;
}