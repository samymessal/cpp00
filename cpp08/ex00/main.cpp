/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smessal <smessal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 10:59:52 by smessal           #+#    #+#             */
/*   Updated: 2023/07/01 12:25:30 by smessal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>
#include <set>
#include <iostream>


int main()
{
    int vecArr[] = {1, 2, 3, 4, 5};
    std::vector<int> vec(vecArr, vecArr + sizeof(vecArr) / sizeof(vecArr[0]));

    int lstArr[] = {6, 7, 8, 9, 10};
    std::list<int> lst(lstArr, lstArr + sizeof(lstArr) / sizeof(lstArr[0]));

    int stArr[] = {11, 12, 13, 14, 15};
    std::set<int> st(stArr, stArr + sizeof(stArr) / sizeof(stArr[0]));

    int value = 8;

    try
	{
		if (easyfind(vec, value))
			std::cout << "Value found in vector" << std::endl;
		else
			std::cout << "Value not found in vector" << std::endl;

		if (easyfind(lst, value))
			std::cout << "Value found in list" << std::endl;
		else
			std::cout << "Value not found in list" << std::endl;

		if (easyfind(st, value))
			std::cout << "Value found in set" << std::endl;
		else
			std::cout << "Value not found in set" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Unknown error" << '\n';
	}
	

    return 0;
}
