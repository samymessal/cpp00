/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smessal <smessal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 17:03:01 by smessal           #+#    #+#             */
/*   Updated: 2023/06/23 20:47:49 by smessal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "prog_Bureau.hpp"

int	main(void)
{
	try
	{
		Bureaucrat	chief("chief", 1);
		AForm		*test = new ShrubberyCreationForm("");
		AForm		*test2 = new RobotomyRequestForm("");
		AForm		*test3 = new PresidentialPardonForm("");

		chief.signForm(*test);
		test->execute(chief);
		chief.executeForm(*test);

		chief.signForm(*test2);
		test2->execute(chief);
		chief.executeForm(*test2);

		chief.signForm(*test3);
		test3->execute(chief);
		chief.executeForm(*test3);
		
		delete test;
		delete test2;
		delete test3;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}