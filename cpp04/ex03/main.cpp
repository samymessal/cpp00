/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smessal <smessal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 19:52:22 by smessal           #+#    #+#             */
/*   Updated: 2023/06/22 12:27:50 by smessal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include <iostream>

int	main(void)
{
	// Ice *test = new Ice();
	// Character player("samy");
	// std::cout << test->getType() << std::endl;
	// player.equip(test);
	// player.unequip(0);
	// delete test;
	IMateriaSource* src = new MateriaSource(); 
	src->learnMateria(new Ice()); 
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
	delete tmp;
    tmp = src->createMateria("cure");
    me->equip(tmp);
	ICharacter* bob = new Character("bob"); 
	me->use(0, *bob);
    me->use(1, *bob);
	delete bob; 
	delete me; 
	delete src;
	delete tmp;
	return 0;
}