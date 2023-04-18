/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smessal <smessal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 19:25:45 by smessal           #+#    #+#             */
/*   Updated: 2023/04/16 21:34:05 by smessal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
    ClapTrap    test1("first");
    // ClapTrap    test2("second");
    FragTrap    test3;
    // ClapTrap    test4(test2);
    
    test3.attack("junior");
    test1.beRepaired(54);
    test3.takeDamage(30);
    test3.attack("junior again");
    test3.highFiveGuys();
    return (0);
}
