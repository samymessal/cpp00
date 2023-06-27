/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smessal <smessal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 15:51:40 by smessal           #+#    #+#             */
/*   Updated: 2023/06/27 18:01:35 by smessal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.hpp"

Base	*generate(void)
{
	int range = 3; 
	std::srand(std::time(NULL));
	int randomNumber = std::rand() % range;
	std::string	derived[3] = {"A", "B", "C"};
	std::cout << randomNumber << std::endl;
	
	if (derived[randomNumber] == "A")
		return new A;
	else if (derived[randomNumber] == "B")
		return new B;
	else if (derived[randomNumber] == "C")
		return new C;
	else
		return NULL;
}

void	identify(Base* p)
{
	if (p)
	{
		A	*ptrA = dynamic_cast<A *>(p);
		B	*ptrB = dynamic_cast<B *>(p);
		C	*ptrC = dynamic_cast<C *>(p);
		Base	*ptrBase = dynamic_cast<Base *>(p);
		
		std::cout << "Type of pointer is: ";
		if (ptrA)
			std::cout << "A";
		else if (ptrB)
			std::cout << "B";
		else if (ptrC)
			std::cout << "C";
		else if (ptrBase)
			std::cout << "Base";
		else
			std::cout << "Unknown";
		std::cout << std::endl;
	}
}

void	identify(Base &p)
{
	std::cout << "Type of pointer is: ";
	try
	{
		A	&ptrA = dynamic_cast<A &>(p);
		(void)ptrA;
		std::cout << "A" << std::endl;
		return ;
	}
	catch(const std::exception& e)
	{
	}
	try
	{
		B	&ptrB = dynamic_cast<B &>(p);
		(void)ptrB;
		std::cout << "B" << std::endl;
		return ;
	}
	catch(const std::exception& e)
	{
	}
	try
	{
		C	&ptrC = dynamic_cast<C &>(p);
		(void)ptrC;
		std::cout << "C" << std::endl;
		return ;
	}
	catch(const std::exception& e)
	{
	}
	try
	{
		Base	&ptrBase = dynamic_cast<Base &>(p);
		(void)ptrBase;
		std::cout << "Base" << std::endl;
		return ;
	}
	catch(const std::exception& e)
	{
		std::cout << "Unknown" << std::endl;
		return ;
	}
}