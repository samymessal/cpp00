/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smessal <smessal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 11:23:37 by smessal           #+#    #+#             */
/*   Updated: 2023/04/07 12:02:59 by smessal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	Harl	test;
	
	test.complain("ERROR");
	test.complain("LOL");
	test.complain("WARNING");
	test.complain("DEBUG");
	return (0);
}
