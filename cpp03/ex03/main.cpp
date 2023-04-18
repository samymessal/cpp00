/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smessal <smessal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 15:39:20 by smessal           #+#    #+#             */
/*   Updated: 2023/04/18 15:39:22 by smessal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
    // ClapTrap    test1("first");
    // // ClapTrap    test2("second");
    // FragTrap    test3;
    DiamondTrap    test4("Samy");
    
    // test3.attack("junior");
    // test1.beRepaired(54);
    // test3.takeDamage(30);
    // test3.attack("junior again");
    // test3.highFiveGuys();
	test4.whoamI();
    test4.beRepaired(10);
    test4.highFiveGuys();
    test4.guardGate();
    test4.takeDamage(100);
    return (0);
}
