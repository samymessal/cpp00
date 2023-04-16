/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smessal <smessal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 20:23:49 by smessal           #+#    #+#             */
/*   Updated: 2023/04/16 21:20:12 by smessal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ScavTrap_HPP
#define ScavTrap_HPP

#ifndef ClapTrap_HPP
#include "ClapTrap.hpp"
#endif

class ScavTrap : public ClapTrap
{
    public:
        ScavTrap();
        ScavTrap(std::string name);
        ~ScavTrap();
        void    guardGate() const;
        void    attack(const std::string& target);
};

#endif