/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smessal <smessal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 16:18:13 by smessal           #+#    #+#             */
/*   Updated: 2023/06/12 17:56:07 by smessal          ###   ########.fr       */
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
    if (!this->_ener)
        this->_ener = 100;
    this->_atta = 30;
    std::cout << "FragTrap constructor initialised name" <<std::endl;
    return ;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other)
{
    this->_hit = 100;
    this->_ener = 100;
    this->_atta = 30;
    std::cout << "Copy FragTrap constructor called" << std::endl;
    return ;
}

FragTrap    &FragTrap::operator=(const FragTrap &other)
{
    ClapTrap::operator=(other);
     this->_hit = 100;
    this->_ener = 100;
    this->_atta = 30;
    std::cout << "Assignment FragTrap operator called" << std::endl;
    return (*this);
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
