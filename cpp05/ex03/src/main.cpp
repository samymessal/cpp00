/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smessal <smessal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 20:50:34 by smessal           #+#    #+#             */
/*   Updated: 2023/06/23 21:33:15 by smessal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "prog_Bureau.hpp"

int	main(void)
{
	try
	{
		Intern		myintern;
		Bureaucrat	chief("chief", 10);
		AForm		*test = myintern.makeForm("shrubbery form", "");
		AForm		*test2 =  myintern.makeForm("robotomy request", "samy");
		AForm		*test3 =  myintern.makeForm("presidential pardon", "zako");

		chief.signForm(*test);
		test->execute(chief);
		chief.executeForm(*test);


		chief.signForm(*test2);
		test2->execute(chief);
		chief.executeForm(*test2);


		// chief.signForm(*test3);
		// test3->execute(chief);
		// chief.executeForm(*test3);
		
		delete test;
		delete test2;
		delete test3;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}