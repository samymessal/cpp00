/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smessal <smessal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 20:52:59 by smessal           #+#    #+#             */
/*   Updated: 2023/06/23 21:26:01 by smessal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include <string>

class Intern
{
	public:
		Intern();
		~Intern();
		Intern(const Intern &other);
		class UnvalidForm : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		Intern	&operator=(const Intern &other);
		AForm	*makeForm(std::string form_name, std::string target);
}

;
#endif