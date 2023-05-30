/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smessal <smessal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 11:23:37 by smessal           #+#    #+#             */
/*   Updated: 2023/05/30 13:45:45 by smessal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	Harl	test;
	
	test.complain("ERROR");
	test.complain("INFO");
	test.complain("WARNING");
	test.complain("DEBUG");
	test.complain("weuu");
	return (0);
}
