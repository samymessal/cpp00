/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smessal <smessal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 16:18:08 by smessal           #+#    #+#             */
/*   Updated: 2023/06/12 16:20:39 by smessal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FragTrap_HPP
#define FragTrap_HPP

#ifndef ClapTrap_HPP
#include "ClapTrap.hpp"
#endif

class FragTrap : virtual public ClapTrap
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