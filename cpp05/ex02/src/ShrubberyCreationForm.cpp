/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smessal <smessal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 16:52:18 by smessal           #+#    #+#             */
/*   Updated: 2023/06/22 17:28:40 by smessal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : AForm("ShrubberyCreationForm", 145, 137)
{
	_directory = "";
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string directory) : AForm("ShrubberyCreationForm", 145, 137)
{
	_directory = directory;
	return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	return ;
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
	if (other.getSign())
		this->setSign();
	return *this;
}
		
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other)
{
	if (other.getSign())
		this->setSign();
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	std::string filename = _directory + "_shrubbery";
	std::ofstream	myfile;

	if (!this->getSign())
		throw ShrubberyCreationForm::FormNotSigned();
	else if (executor.getGrade() > this->getToExec())
		throw ShrubberyCreationForm::GradeTooLowException();
	else if (this->getSign() && executor.getGrade() <= this->getToExec())
	{
		myfile.open(filename.c_str(), std::ios::app | std::ios::out);
		if (myfile.is_open())
		{
			myfile << "   *   " << std::endl;
			myfile << "  ***  " << std::endl;
			myfile << " ***** " << std::endl;
			myfile << "*******" << std::endl;
			myfile << "   |   " << std::endl;
		}
		else
		{
			std::cout << "Could not open file, error ShrubberyForm" << std::endl;
			return ;
		}
		myfile.close();
	}
}
