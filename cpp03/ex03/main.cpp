/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smessal <smessal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 19:25:45 by smessal           #+#    #+#             */
/*   Updated: 2023/04/18 14:52:38 by smessal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
    ClapTrap    test1("first");
    // ClapTrap    test2("second");
    FragTrap    test3;
    DiamondTrap    test4("Samy");
    
    test3.attack("junior");
    test1.beRepaired(54);
    test3.takeDamage(30);
    test3.attack("junior again");
    test3.highFiveGuys();
	test4.whoamI();
    return (0);
}
