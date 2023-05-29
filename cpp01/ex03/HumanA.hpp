/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smessal <smessal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 22:03:03 by smessal           #+#    #+#             */
/*   Updated: 2023/05/29 14:30:00 by smessal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
    private:
        Weapon      &_arme;
        std::string _name;
    public:
        HumanA(std::string id, Weapon weapon);
        ~HumanA(void);
        void    attack(void) const;
};

#endif