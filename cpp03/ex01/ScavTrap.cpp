/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smessal <smessal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 20:32:36 by smessal           #+#    #+#             */
/*   Updated: 2023/04/16 21:00:13 by smessal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    this->_hit = 100;
    this->_ener = 50;
    this->_atta = 20;
    std::cout << "ScavTrap default constructor called" <<std::endl;
    return ;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    this->_hit = 100;
    this->_ener = 50;
    this->_atta = 20;
    std::cout << "ScavTrap constructor initialised name" <<std::endl;
    return ;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap default destructor called" << std::endl;
    return ;
}

void    ScavTrap::guardGate() const
{
    std::cout << "ScavTrap " << this->_name << " is in Gate Keeper Mode" <<std::endl;
    return ;
}
