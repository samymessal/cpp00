/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smessal <smessal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 17:40:37 by smessal           #+#    #+#             */
/*   Updated: 2023/06/22 17:42:41 by smessal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : AForm("PresidentialPardonForm", 25, 5)
{
	_directory = "";
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(std::string directory) : AForm("PresidentialPardonForm", 25, 5)
{
	_directory = directory;
	return ;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	return ;
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
	if (other.getSign())
		this->setSign();
	return *this;
}
		
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other)
{
	if (other.getSign())
		this->setSign();
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (!this->getSign())
		throw PresidentialPardonForm::FormNotSigned();
	else if (executor.getGrade() > this->getToExec())
		throw PresidentialPardonForm::GradeTooLowException();
	else if (this->getSign() && executor.getGrade() <= this->getToExec())
	{
		std::cout << _directory << "has been pardoned by Zaphod Beeblebrox." << std::endl;
	}
}