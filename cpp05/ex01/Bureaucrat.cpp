/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smessal <smessal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 19:37:01 by smessal           #+#    #+#             */
/*   Updated: 2023/06/10 21:51:45 by smessal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("noname"), _grade(0)
{
	std::cout << "Default Bureaucrat constructor called" << std::endl;
	return ;
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name), _grade(grade)
{
	if (_grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (_grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Default Bureaucrat destructor called" << std::endl;
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &other)
{
	this->_grade = other._grade;
	return *this;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : _name(other._name), _grade(other._grade)
{
	return ;	
}

const std::string	&Bureaucrat::getName() const
{
	return (this->_name);
}

const int	&Bureaucrat::getGrade() const
{
	return (this->_grade);
}

void	Bureaucrat::promote(int grade)
{
	if (grade <= 0)
		throw Bureaucrat::GradeTooLowException();
	else if (this->_grade - grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else
	{
		this->_grade -= grade;
		std::cout << "Bureaucrat " << this->_name << " got promoted to rank " << this->_grade << std::endl;
	}
}

void	Bureaucrat::downgrade(int grade)
{
	if (grade <= 0)
		throw Bureaucrat::GradeTooLowException();
	else if (this->_grade + grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
	{
		this->_grade += grade;
		std::cout << "Bureaucrat " << this->_name << " got downgraded to rank " << this->_grade << std::endl;
	}
}

void	Bureaucrat::signForm(Form &form) const
{
	const Bureaucrat&	temp(*this);

	if (this->getGrade() <= form.getToSign())
	{
		std::cout << "Bureaucrat " << this->getName() << " signed the form " << form.getName() << std::endl;
		form.beSigned(temp);
	}
	else
		std::cout << "Bureaucrat " << this->getName() << " could not sign form " << form.getName() << " because his grade is too low" << std::endl;
}

const char*	Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade too high";
}

const char*	Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade too Low";
}

std::ostream	&operator<<(std::ostream& os, const Bureaucrat &other)
{
	os << other.getGrade();
	return (os);
}
