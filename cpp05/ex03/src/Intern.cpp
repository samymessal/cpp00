/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smessal <smessal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 21:03:09 by smessal           #+#    #+#             */
/*   Updated: 2023/06/23 21:34:32 by smessal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	return ;
}

Intern::~Intern()
{
	return ;
}

Intern::Intern(const Intern &other)
{
	(void)other;
	return ;
}

Intern	&Intern::operator=(const Intern &other)
{
	(void)other;
	return *this;
}

const char* Intern::UnvalidForm::what() const throw()
{
	return "Unvalid Form name";
}

AForm	*Intern::makeForm(std::string form_name, std::string target)
{
	std::string	forms[3] = {"shrubbery form", "robotomy request", "presidential pardon"};
	int	i = -1;
	for (int j = 0; j < 3; j++)
	{
		if (!form_name.compare(forms[j]))
			i = j;
	}
	if (i == -1)
		throw Intern::UnvalidForm();
	std::cout << "Intern creates " << form_name << std::endl;
	switch(i)
	{
		case 0:
			return (new ShrubberyCreationForm(target));
		case 1:
			return (new RobotomyRequestForm(target));
		case 2:
			return (new PresidentialPardonForm(target));
	}
	return (NULL);
}