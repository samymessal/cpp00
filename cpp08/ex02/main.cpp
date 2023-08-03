/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smessal <smessal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 14:21:42 by smessal           #+#    #+#             */
/*   Updated: 2023/08/03 14:30:34 by smessal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	std::cout << "test " << mstack.top() << std::endl;
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	std::cout << "Start printing" << std::endl;
	while (it != ite)
	{
	std::cout << *it << std::endl;
	++it;
	}

	std::stack<int> test;
	test.push(5);
	test.push(17);
	test.pop();
	test.push(3);
	test.push(5);
	test.push(737);
	test.push(0);
	unsigned int i = 0;
	std::cout << "Start printing test" << std::endl;
	while (i < test.size())
	{
		std::cout << test.top() << std::endl;
		test.pop();
	}
	return 0;
}