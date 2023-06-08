/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smessal <smessal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 16:28:48 by smessal           #+#    #+#             */
/*   Updated: 2023/06/08 18:29:39 by smessal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

int	main(void)
{
	try
	{
		Bureaucrat	test("samy", 75);
		std::cout << "grade "<< test << std::endl;
		for (int i = 1; i < 150; i++)
			test.downgrade(1);
		for (int i = 1; i < 150; i++)
			test.promote(1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}