/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smessal <smessal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 12:46:34 by smessal           #+#    #+#             */
/*   Updated: 2023/08/03 14:04:32 by smessal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	try
	{
		Span sp = Span(10);
		std::vector<int> test;
		test.push_back(5);
		test.push_back(10);
		sp.addNumber(0);
		sp.addNumber(50);
		sp.addNumber(17);
		// sp.addNumber(std::numeric_limits<int>::max());
		// sp.addNumber(11);
		// sp.addNumber(std::numeric_limits<int>::min());
		sp.addArr(test);
		sp.addArr(200, 203);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return 0;
}