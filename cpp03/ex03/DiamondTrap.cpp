/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smessal <smessal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 15:38:52 by smessal           #+#    #+#             */
/*   Updated: 2023/06/12 17:56:35 by smessal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ScavTrap(), FragTrap()
{
    std::cout << "DiamondTrap default constructor has been called" << std::endl;
	this->name = "";
	this->_name = "_clap_name";
	this->_hit = FragTrap::_hit;
	this->_ener = ScavTrap::_ener;
	this->_atta = FragTrap::_atta;
    return ;
}

DiamondTrap::DiamondTrap(std::string init_name) : ScavTrap(init_name + "_clap_name"),
                                                FragTrap(init_name + "_clap_name") \
{
    this->name = init_name;
	this->_name = init_name + "_clap_name";
	this->_hit = FragTrap::_hit;
	this->_ener = ScavTrap::_ener;
	this->_atta = FragTrap::_atta;
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

void    DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
	return ;
}
