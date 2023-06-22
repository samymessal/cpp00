/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smessal <smessal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 17:02:50 by smessal           #+#    #+#             */
/*   Updated: 2023/06/11 17:02:52 by smessal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(const std::string name,
		const int toSign, const int toExec) :_name(name), _sign(0), _toSign(toSign),
											_toExec(toExec)
{
	if (_toSign > 150 || _toExec > 150)
		throw AForm::GradeTooLowException();
	else if (_toSign < 1 || _toExec < 1)
		throw AForm::GradeTooHighException();
	return ;
}

AForm::AForm(const AForm& other) : _name(other._name), _sign(0), _toSign(other._toSign),
								_toExec(other._toExec)
{
	return ;
}

const char*	AForm::GradeTooHighException::what() const throw()
{
	return "Grade too high";
}

const char*	AForm::GradeTooLowException::what() const throw()
{
	return "Grade too Low";
}

const char*	AForm::FormNotSigned::what() const throw()
{
	return "Form not signed";
}

AForm	&AForm::operator=(const AForm& other)
{
	this->_sign = other.getSign();
	std::cout << "AForm " << this->getName() << " has the same signature as " << other.getName()  << std::endl;
	return (*this);
}

const std::string	&AForm::getName() const
{
	return (this->_name);
}

const bool	&AForm::getSign() const
{
	return (this->_sign);
}

const int	&AForm::getToSign() const
{
	return (this->_toSign);
}

const int	&AForm::getToExec() const
{
	return (this->_toExec);
}

void	AForm::beSigned(const Bureaucrat &signer)
{
	if (this->_toSign >= signer.getGrade())
	{
		this->_sign = 1;
	}
	else
		throw AForm::GradeTooLowException();
}

void	AForm::setSign()
{
	_sign = 1;
	return ;
}

std::ostream	&operator<<(std::ostream &os, const AForm &other)
{
	os << "AForm Name: " << other.getName() << std::endl;
	if (other.getSign() != 0)
		os << "Signed :" << "Yes" << std::endl;
	else
		os << "Signed :" << "No" << std::endl;
	os << "Grade to sign: " << other.getToSign() << std::endl;
	os << "Grade to execute: " << other.getToExec() << std::endl;
	return (os);
}

AForm::AForm() : _name("noname"), _sign(0), _toSign(1),
				_toExec(1)
{
	return ;
}

AForm::~AForm()
{
	return ;
}