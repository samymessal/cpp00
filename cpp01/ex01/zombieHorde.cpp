/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smessal <smessal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 13:44:41 by smessal           #+#    #+#             */
/*   Updated: 2023/05/29 13:45:13 by smessal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie  *zombieHorde(int N, std::string name)
{
    int i;
    Zombie  *Horde = new Zombie[N];
    
    i = 0;
    while (i < N)
    {
        Horde[i].fill(name);
        i++;
    }
    return (Horde);
}
