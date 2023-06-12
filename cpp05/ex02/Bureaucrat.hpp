/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smessal <smessal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 17:02:45 by smessal           #+#    #+#             */
/*   Updated: 2023/06/11 17:02:47 by smessal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"

class Form;
class Bureaucrat
{
	private:
		const std::string	_name;
		int					_grade;
	public:
		Bureaucrat();
		Bureaucrat(const std::string name, int grade);
		~Bureaucrat();
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		Bureaucrat		&operator=(const Bureaucrat &other);
		Bureaucrat(const Bureaucrat &cpy);
		const std::string	&getName() const;
		const int			&getGrade() const;
		void				promote(int grade);
		void				downgrade(int grade);
		void				signForm(Form &form) const;
};

std::ostream	&operator<<(std::ostream &os, const Bureaucrat &other);
#endif