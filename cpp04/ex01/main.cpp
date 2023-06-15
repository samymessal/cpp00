/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smessal <smessal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 18:25:22 by smessal           #+#    #+#             */
/*   Updated: 2023/06/15 16:10:58 by smessal          ###   ########.fr       */
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
	// const Animal *j = new Dog(); 
	// const Animal* x = new Cat();
	// Animal	*arr_animal[10];

	// for (int i = 0; i < 5; i++)
	// 	arr_animal[i] = new Dog();
	// for (int i = 5; i < 10; i++)
	// 	arr_animal[i] = new Cat();

	// for(int i = 0; i < 10; i++)
	// 	arr_animal[i]->makeSound();
	// // test->print_ideas();
	// j->makeSound();
	// for(int i = 0; i < 10; i++)
	// 	delete arr_animal[i];
	// delete j;//should not create a leak 
	// delete x;
	Cat basic;
	{
		Cat tmp(basic);
	}
    return (0);
}
