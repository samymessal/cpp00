/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smessal <smessal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 20:29:57 by smessal           #+#    #+#             */
/*   Updated: 2023/04/03 20:46:48 by smessal          ###   ########.fr       */
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

int main(void)
{
    Zombie  *test;

    test = newZombie("lol");
    randomChump("Tes fou");
    test->announce();
    delete test;
}