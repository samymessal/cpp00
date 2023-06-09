/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smessal <smessal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 20:55:07 by smessal           #+#    #+#             */
/*   Updated: 2023/06/10 20:02:57 by smessal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int	main( void ) 
{
	Point	A(3.0f, 2.0f);
	Point	B(6.0f, 4.0f);
	Point	C(4.0f, 6.0f);
	// Point	test(1.0f, 2.0f);

	// test = A;
	// std::cout << test.get_x() << std::endl;

	std::cout << bsp(A, B, C, Point(4.0f, 5.0f)) << std::endl;
	return 0;
}