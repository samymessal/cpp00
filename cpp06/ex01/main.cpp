/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smessal <smessal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 17:43:35 by smessal           #+#    #+#             */
/*   Updated: 2023/06/26 17:50:02 by smessal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int	main(void)
{
	Data	*test = new Data;
	unsigned int	*stock;
	Serializer	wow;
	test->x = 0;
	test->y = 'A';
	test->z = "lol";
	stock = wow.serialize(test);
	Data	*result = wow.deserialize(stock);
	std::cout << result->z << std::endl;
	delete test;
}