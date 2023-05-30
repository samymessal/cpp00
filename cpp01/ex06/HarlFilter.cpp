/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HarlFilter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smessal <smessal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 12:07:27 by smessal           #+#    #+#             */
/*   Updated: 2023/05/30 14:30:25 by smessal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HarlFilter.hpp"

HarlFilter::HarlFilter(void)
{
	std::cout << "Default HarlFilter constructor called" << std::endl;
	return ;
}

HarlFilter::~HarlFilter(void)
{
	std::cout << "Default HarlFilter destructor called" << std::endl;
	return ;
}

void    HarlFilter::debug(void) const
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do !" << std::endl;
}

void	HarlFilter::info(void) const
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
}

void	HarlFilter::warning(void) const
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	HarlFilter::error(void) const
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
}

void	HarlFilter::complain(std::string level) const
{
	void	(HarlFilter::*ptr)(void) const;
	int		conv = convert_to_int(level);
	switch (conv)
	{
		case 0:
			ptr = &HarlFilter::debug;
			(this->*ptr)();
		case 1:
			ptr = &HarlFilter::info;
			(this->*ptr)();
		case 2:
			ptr = &HarlFilter::warning;
			(this->*ptr)();
		case 3:
			ptr = &HarlFilter::error;
			(this->*ptr)();
			break ;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
	}
}

int     HarlFilter::convert_to_int(std::string level) const
{
	std::string	array_str[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int i = 0; i < 4; i++)
	{
		if (!array_str[i].compare(level))
			return (i);
	}
	return (4);
}
