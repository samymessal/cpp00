/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smessal <smessal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 20:19:14 by smessal           #+#    #+#             */
/*   Updated: 2023/05/29 13:45:01 by smessal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
    std::cout << "Default Zombie constructor called" << std::endl;
    this->_name = "noname";
    return ;
}

Zombie::Zombie(std::string nom) : _name(nom)
{
    return ;
}

Zombie::~Zombie(void)
{
    std::cout << "Default destructor called for " << this->_name << std::endl;
}

void    Zombie::fill(std::string filler)
{
    this->_name = filler;
    return ;
};

void    Zombie::announce(void) const
{
    std::cout << this->_name << ": BraiiiiiiizzzZ..." <<std::endl;
}
