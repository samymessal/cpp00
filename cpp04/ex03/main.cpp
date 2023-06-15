/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smessal <smessal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 19:52:22 by smessal           #+#    #+#             */
/*   Updated: 2023/06/15 20:07:27 by smessal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "ICharacter.hpp"
#include <iostream>

int	main(void)
{
	Ice *test = new Ice();
	Character player("samy");
	std::cout << test->getType() << std::endl;
	player.equip(test);
	player.unequip(0);
	delete test;
}