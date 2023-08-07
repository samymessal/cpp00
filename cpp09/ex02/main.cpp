/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smessal <smessal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 17:01:28 by smessal           #+#    #+#             */
/*   Updated: 2023/08/07 17:13:33 by smessal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PMergeMe.hpp"

int	main(int ac, char **av)
{
	if (ac < 2)
	{
		std::cerr << "Incorrect number of arguments" << std::endl;
		return (1);
	}
	int					i = 1;
	unsigned int		digit = 0;
	std::vector<int>	orig;
	while (av && av[i])
	{
		std::istringstream	iss(av[i]);
		if (iss >> digit)
			orig.push_back(digit);
		else
		{
			std::cerr << "Error: Bad input" << std::endl;
			return (1);
		}
		i++;
	}
	PMergeMe	test(orig);
	test.get_pairs();
	test.print_vector();
}