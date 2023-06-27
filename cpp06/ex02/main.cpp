/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smessal <smessal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 16:49:41 by smessal           #+#    #+#             */
/*   Updated: 2023/06/27 17:48:18 by smessal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.hpp"

int	main()
{
	Base	*test = generate();
	C		*test2 = dynamic_cast<C *>(test);
	Base		tester;
	Base		&test3 = tester;
	if (test2)
		std::cout<<"LOL" << std::endl;
	else
		std::cout << "NOP" << std::endl;
	
	identify(test);
	identify(test3);
}