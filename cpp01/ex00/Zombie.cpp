/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smessal <smessal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 20:19:14 by smessal           #+#    #+#             */
/*   Updated: 2023/04/03 21:06:06 by smessal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
    return ;
}

Zombie::Zombie(std::string nom) : name(nom)
{
    return ;
}

Zombie::~Zombie(void)
{
    std::cout << this->name <<" is gone"<< std::endl;
}

void    Zombie::announce(void) const
{
    std::cout << this->name <<std::endl;
};