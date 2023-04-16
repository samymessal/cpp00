/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smessal <smessal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 22:28:16 by smessal           #+#    #+#             */
/*   Updated: 2023/04/16 22:45:57 by smessal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ScavTrap(), FragTrap()
{
    std::cout << "DiamondTrap default constructor has been called" << std::endl;
    return ;
}

DiamondTrap::DiamondTrap(std::string init_name) : ScavTrap(init_name + "_clap_name"),
                                                FragTrap(init_name + "_clap_name") \
{
    std::cout << "DiamondTrap constructor initialized name" << std::endl;
    return ;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap default destructor called" << std::endl;
}
