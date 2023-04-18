/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smessal <smessal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 22:28:16 by smessal           #+#    #+#             */
/*   Updated: 2023/04/18 14:51:37 by smessal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ScavTrap(), FragTrap()
{
    std::cout << "DiamondTrap default constructor has been called" << std::endl;
	this->name = "";
	this->_name = ScavTrap::_name;
	this->_hit = FragTrap::_hit;
	this->_ener = ScavTrap::_hit;
	this->_atta = FragTrap::hit;
	this->attack = ScavTrap::attack;
    return ;
}

DiamondTrap::DiamondTrap(std::string init_name) : ScavTrap(init_name + "_clap_name"),
                                                FragTrap(init_name + "_clap_name") \
{
    this->name = init_name;
	this->_name = ScavTrap::_name;
	this->_hit = FragTrap::_hit;
	this->_ener = ScavTrap::_hit;
	this->_atta = FragTrap::hit;
	this->attack = ScavTrap::attack;
	std::cout << "DiamondTrap constructor initialized name" << std::endl;
    return ;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap default destructor called" << std::endl;
}

void	DiamondTrap::whoamI(void)
{
	std::cout << "I am Diamond " << this->name << " son of " << this->_name << std::endl;
	return ;
}
