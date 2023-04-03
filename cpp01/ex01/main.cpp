/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smessal <smessal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 20:29:57 by smessal           #+#    #+#             */
/*   Updated: 2023/04/03 21:08:45 by smessal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie  *newZombie(std::string name)
{
    Zombie  *nzombie = new Zombie(name);

    return (nzombie);
}

void    randomChump(std::string name)
{
    Zombie  rzombie(name);
    
    rzombie.announce();
    return ;
}

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

int main(void)
{
    Zombie  *test;

    test = zombieHorde(5, "Moi");
    int i = 0;
    while (i < 5)
    {
        test[i].announce();
        i++;
    }
    delete []test;
}
