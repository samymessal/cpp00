/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smessal <smessal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 18:52:23 by smessal           #+#    #+#             */
/*   Updated: 2023/04/16 20:20:17 by smessal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ClapTrap_HPP
# define ClapTrap_HPP

#include <iostream>

class ClapTrap
{
    private:
        std::string _name;
        int         _hit;
        unsigned int         _ener;
        unsigned int         _atta;
    public:
        ClapTrap(void);
        ClapTrap(std::string nom);
        ClapTrap(const ClapTrap &other);
        ClapTrap operator=(const ClapTrap &equal);
        ~ClapTrap(void);
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};



#endif