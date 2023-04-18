/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smessal <smessal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 15:39:08 by smessal           #+#    #+#             */
/*   Updated: 2023/04/18 15:39:10 by smessal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    this->_hit = 100;
    this->_ener = 100;
    this->_atta = 30;
    std::cout << "FragTrap default constructor called" <<std::endl;
    return ;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    this->_hit = 100;
    this->_ener = 100;
    this->_atta = 30;
    std::cout << "FragTrap constructor initialised name" <<std::endl;
    return ;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap default destructor called" << std::endl;
    return ;
}

void    FragTrap::highFiveGuys(void) const
{
    std::cout << "Fragtrap asks for a high five" << std::endl;
    return ;
}
