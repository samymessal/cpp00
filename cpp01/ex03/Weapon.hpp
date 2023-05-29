/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smessal <smessal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 21:33:26 by smessal           #+#    #+#             */
/*   Updated: 2023/05/29 14:46:15 by smessal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

#include <iostream>

class Weapon
{
    private:
        std::string *_type;
    public:
        Weapon(std::string weapon);
        Weapon(void);
        ~Weapon(void);
        Weapon operator=(const Weapon &equal);
        const std::string &getType(void) const;
        void              setType(std::string set);
};

#endif