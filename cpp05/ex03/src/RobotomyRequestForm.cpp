/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smessal <smessal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 20:50:48 by smessal           #+#    #+#             */
/*   Updated: 2023/06/23 20:50:49 by smessal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : AForm("RobotomyRequestForm", 72, 45)
{
	_directory = "";
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(std::string directory) : AForm("RobotomyRequestForm", 72, 45)
{
	_directory = directory;
	return ;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	return ;
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
	if (other.getSign())
		this->setSign();
	return *this;
}
		
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other)
{
	if (other.getSign())
		this->setSign();
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	int	random = std::rand();
	
	if (!this->getSign())
		throw RobotomyRequestForm::FormNotSigned();
	else if (executor.getGrade() > this->getToExec())
		throw RobotomyRequestForm::GradeTooLowException();
	else if (this->getSign() && executor.getGrade() <= this->getToExec())
	{
		std::cout << "Drilling noise" << std::endl;
		if (random % 2 == 0)
			std::cout << "Robotomy was successfull" << std::endl;
		else
			std::cout << "Robotomy has failed" << std::endl;
	}
}