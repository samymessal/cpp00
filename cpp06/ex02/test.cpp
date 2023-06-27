/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smessal <smessal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 16:49:41 by smessal           #+#    #+#             */
/*   Updated: 2023/06/27 16:51:05 by smessal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.hpp"

int	main()
{
	int	random ;
	int range ;// Calculate the range size
	int randomNumber;

	while(1)
	{
		random = std::rand();
		range = 2 - 0 + 1;  // Calculate the range size
		randomNumber = std::rand() % range + 0;
		std::cout << randomNumber << std::endl;
	}
}