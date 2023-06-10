/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smessal <smessal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 20:16:08 by smessal           #+#    #+#             */
/*   Updated: 2023/06/10 21:49:02 by smessal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(const std::string name,
		const int toSign, const int toExec) :_name(name), _sign(0), _toSign(toSign),
											_toExec(toExec)
{
	if (_toSign > 150 || _toExec > 150)
		throw Form::GradeTooLowException();
	else if (_toSign < 1 || _toExec < 1)
		throw Form::GradeTooHighException();
	return ;
}

Form::Form(const Form& other) : _name(other._name), _sign(0), _toSign(other._toSign),
								_toExec(other._toExec)
{
	return ;
}

const char*	Form::GradeTooHighException::what() const throw()
{
	return "Grade too high";
}

const char*	Form::GradeTooLowException::what() const throw()
{
	return "Grade too Low";
}

Form	&Form::operator=(const Form& other)
{
	this->_sign = other.getSign();
	std::cout << "Form " << this->getName() << " has the same signature as " << other.getName()  << std::endl;
	return (*this);
}

const std::string	&Form::getName() const
{
	return (this->_name);
}

const bool	&Form::getSign() const
{
	return (this->_sign);
}

const int	&Form::getToSign() const
{
	return (this->_toSign);
}

const int	&Form::getToExec() const
{
	return (this->_toExec);
}

void	Form::beSigned(const Bureaucrat &signer)
{
	if (this->_toSign >= signer.getGrade())
	{
		this->_sign = 1;
	}
	else
		throw Form::GradeTooLowException();
}

std::ostream	&operator<<(std::ostream &os, const Form &other)
{
	os << "Form Name: " << other.getName() << std::endl;
	if (other.getSign() != 0)
		os << "Signed :" << "Yes" << std::endl;
	else
		os << "Signed :" << "No" << std::endl;
	os << "Grade to sign: " << other.getToSign() << std::endl;
	os << "Grade to execute: " << other.getToExec() << std::endl;
	return (os);
}

Form::Form() : _name("noname"), _sign(0), _toSign(1),
				_toExec(1)
{
	return ;
}

Form::~Form()
{
	return ;
}