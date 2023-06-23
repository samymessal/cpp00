/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smessal <smessal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 20:49:44 by smessal           #+#    #+#             */
/*   Updated: 2023/06/23 20:49:46 by smessal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include "AForm.hpp"

class AForm;
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
		void				signForm(AForm &form) const;
		void				executeForm(AForm const & form);
};

std::ostream	&operator<<(std::ostream &os, const Bureaucrat &other);
#endif