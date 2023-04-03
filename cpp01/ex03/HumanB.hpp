/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smessal <smessal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 22:26:20 by smessal           #+#    #+#             */
/*   Updated: 2023/04/03 22:43:21 by smessal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
    private:
        std::string arme;
        std::string name;
    public:
        HumanB(std::string id);
        ~HumanB(void);
        void    attack(void) const;
        void    setWeapon(Weapon weapon);
};

#endif