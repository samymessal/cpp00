/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smessal <smessal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 22:26:20 by smessal           #+#    #+#             */
/*   Updated: 2023/05/30 13:22:27 by smessal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
    private:
        Weapon      *_arme;
        std::string _name;
    public:
        HumanB(std::string id);
        ~HumanB(void);
        void    attack(void) const;
        void    setWeapon(Weapon &weapon);
};

#endif