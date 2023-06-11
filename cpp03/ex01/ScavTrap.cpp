/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smessal <smessal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 20:32:36 by smessal           #+#    #+#             */
/*   Updated: 2023/06/10 22:38:29 by smessal          ###   ########.fr       */
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

void    ScavTrap::attack(const std::string& target)
{
    if (this->_ener > 0 && this->_hit > 0)
    {
        std::cout << "ScavTrap " << this->_name << " attacks " << target << " causing ";
        std::cout << this->_atta << " points of damage !" << std::endl;
        this->_ener -= 1;
    }
    else if (this->_hit > 0 || this->_ener == 0)
        std::cout << "No energy left, attack not possible" <<std::endl;
    else if (this->_ener > 0 || this->_hit == 0)
        std::cout << "No pv left, " << this->_name << " is dead" <<std::endl;
    return ;
}