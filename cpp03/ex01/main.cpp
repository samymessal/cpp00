/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smessal <smessal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 19:25:45 by smessal           #+#    #+#             */
/*   Updated: 2023/06/10 22:37:47 by smessal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    ClapTrap    test1("first");
    // ClapTrap    test2("second");
    ScavTrap    test3("two");
    // ClapTrap    test4(test2);
    
    test1.attack("junior");
    test1.beRepaired(54);
    test3.takeDamage(30);
    test3.attack("junior again");
    test3.guardGate();
    return (0);
}
