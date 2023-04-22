/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smessal <smessal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 18:25:22 by smessal           #+#    #+#             */
/*   Updated: 2023/04/22 14:03:03 by smessal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main(void)
{
	const Animal* j = new Dog(); 
	const Animal* i = new Cat();
	const Dog*	test = new Dog();
	
	test->print_ideas();
	
	delete test;
	delete j;//should not create a leak 
	delete i;
    return (0);
}
