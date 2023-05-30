/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smessal <smessal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 20:29:57 by smessal           #+#    #+#             */
/*   Updated: 2023/05/29 13:19:04 by smessal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie  *test;

    test = zombieHorde(10, "Moi");
    int i = 0;
    while (i < 10)
    {
        test[i].announce();
        i++;
    }
    delete []test;
}
