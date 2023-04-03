/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smessal <smessal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 20:19:26 by smessal           #+#    #+#             */
/*   Updated: 2023/04/03 21:05:52 by smessal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>
class   Zombie
{
    private:
        std::string name;
    public:
        Zombie(void);
        Zombie(std::string nom);
        ~Zombie(void);
        void    fill(std::string filler);
        void    announce(void) const;
};

#endif