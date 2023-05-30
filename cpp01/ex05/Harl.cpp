/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smessal <smessal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 19:28:55 by smessal           #+#    #+#             */
/*   Updated: 2023/05/30 14:27:45 by smessal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
	std::cout << "Default Harl constructor called" << std::endl;
	return ;
}

Harl::~Harl(void)
{
	std::cout << "Default Harl destructor called" << std::endl;
	return ;
}

void    Harl::debug(void) const
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do !" << std::endl;
}

void	Harl::info(void) const
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
}

void	Harl::warning(void) const
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void) const
{
	std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level) const
{
	typedef void	(Harl::*ptr)(void) const;
	ptr				array_ptr[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string		array_str[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	
	for (int i = 0; i < 4; i++)
	{
		if (!array_str[i].compare(level))
		{
			(this->*(array_ptr[i]))();
			return ;
		}
	}
	std::cout << "Not a valid message" << std::endl;
}
