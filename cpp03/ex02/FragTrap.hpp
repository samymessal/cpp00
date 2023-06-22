/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smessal <smessal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 20:23:49 by smessal           #+#    #+#             */
/*   Updated: 2023/06/12 16:10:19 by smessal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FragTrap_HPP
#define FragTrap_HPP

#ifndef ClapTrap_HPP
#include "ClapTrap.hpp"
#endif

class FragTrap : public ClapTrap
{
    public:
        FragTrap();
        FragTrap(std::string name);
        FragTrap(const FragTrap &other);
        FragTrap    &operator=(const FragTrap &other);
        virtual ~FragTrap();
        void    highFiveGuys(void) const;
};

#endif