/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smessal <smessal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 15:38:37 by smessal           #+#    #+#             */
/*   Updated: 2023/04/18 15:38:41 by smessal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name(""), _hit(10), _ener(10), _atta(0)
{
    std::cout << "ClapTrap default constructor called" << std::endl;
    return ;
}

ClapTrap::ClapTrap(std::string nom) : _name(nom), _hit(10), _ener(10), _atta(0)
{
    std::cout << "ClapTrap constructor initialised name" << std::endl;
    return ;
}

ClapTrap::ClapTrap(const ClapTrap &other) : _name(other._name), _hit(other._hit), \
                                            _ener(other._ener), _atta(other._atta)
{
    std::cout << "ClapTrap copy Constructor called" << std::endl;
    return ;
}

ClapTrap    ClapTrap::operator=(const ClapTrap &equal)
{
    this->_name = equal._name;
    this->_hit = equal._hit;
    this->_ener = equal._ener;
    this->_atta = equal._atta;
    std::cout << "ClapTrap overload operator = called" << std::endl;
    return (*this);
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap destructor called" << std::endl;
    return ;
}

void    ClapTrap::attack(const std::string& target)
{
    if (this->_ener > 0 && this->_hit > 0)
    {
        std::cout << "ClapTrap " << this->_name << " attacks " << target << " causing ";
        std::cout << this->_atta << " points of damage !" << std::endl;
        this->_ener -= 1;
    }
    else if (this->_hit > 0)
        std::cout << "No energy left, attack not possible" <<std::endl;
    else if (this->_ener > 0)
        std::cout << "No pv left, " << this->_name << " is dead" <<std::endl;
    return ;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_hit > 0)
    {
        this->_hit -= amount;
        std::cout << "ClapTrap " << this->_name << " lost " << amount << " of pv" <<std::endl;
    }
    else
        std::cout << "No pv left, " << this->_name << " is dead" <<std::endl;
    return ;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_ener > 0 && this->_hit > 0)
    {
        std::cout << "ClapTrap " << this->_name << " regenerated by " << amount << " pv" << std::endl;
        this->_ener -= 1; 
    }
    else if (this->_hit > 0)
        std::cout << "No energy left, regeneration not possible" <<std::endl;
    else if (this->_ener > 0)
        std::cout << "No pv left, the player is dead" <<std::endl;
    return ;
}
