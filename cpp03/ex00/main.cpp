/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smessal <smessal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 19:25:45 by smessal           #+#    #+#             */
/*   Updated: 2023/04/16 19:59:29 by smessal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap    test1("first");
    ClapTrap    test2("second");
    ClapTrap    test3;
    ClapTrap    test4(test2);
    
    test1.attack("junior");
    test2.beRepaired(54);
    test1.takeDamage(100);
    test1.attack("junior again");
    return (0);
}