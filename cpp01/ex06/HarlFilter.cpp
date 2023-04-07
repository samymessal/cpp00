/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HarlFilter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smessal <smessal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 12:07:27 by smessal           #+#    #+#             */
/*   Updated: 2023/04/07 12:40:04 by smessal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

HarlFilter::HarlFilter(void)
{
	return ;
}

HarlFilter::~HarlFilter(void)
{
	return ;
}

void    HarlFilter::debug(void) const
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special- ketchup burger. I really do !" << std::endl;
}

void	HarlFilter::info(void) const
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
}

void	HarlFilter::warning(void) const
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	HarlFilter::error(void) const
{
	std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
}

void	HarlFilter::complain(std::string level) const
{
	void	Harl::complain(std::string level) const;

	switch (level)
	{
	case "DEBUG":
		ptr = &HarlFilter::debug;
		(this->*ptr)();
	case "INFO"
		ptr = &HarlFilter::info;
		(this->*ptr)();
	case "WARNING"
		ptr = &HarlFilter::warning;
		(this->*ptr)();
	case "ERROR"
		ptr = &HarlFilter::error;
		(this->*ptr)();
	default:
		break;
	}
}