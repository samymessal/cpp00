/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smessal <smessal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 15:51:40 by smessal           #+#    #+#             */
/*   Updated: 2023/06/27 16:56:48 by smessal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.hpp"

Base	*generate(void)
{
	int	random = std::rand();
	int range = 3; 
	int randomNumber = std::rand() % range;
	std::string	derived[3] = {"A", "B", "C"};
	
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
	
}