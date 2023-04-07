/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smessal <smessal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 12:40:21 by smessal           #+#    #+#             */
/*   Updated: 2023/04/07 15:23:12 by smessal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HarlFilter.hpp"

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Incorrect number of arguments" << std::endl;
		return (0);
	}
	HarlFilter	test;
	std::string	level;

	level = av[1];
	test.complain(level);
	return (0);
}