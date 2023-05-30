/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smessal <smessal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 20:19:26 by smessal           #+#    #+#             */
/*   Updated: 2023/05/29 13:05:47 by smessal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>

class   Zombie
{
    private:
        std::string _name;
    public:
        Zombie(void);
        Zombie(std::string nom);
        ~Zombie(void);
        void    announce(void) const;
};

Zombie  *newZombie(std::string name);
void    randomChump(std::string name);

#endif