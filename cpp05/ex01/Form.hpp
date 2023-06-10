/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smessal <smessal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 19:52:54 by smessal           #+#    #+#             */
/*   Updated: 2023/06/10 21:41:53 by smessal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;
class Form
{
	private:
		const std::string	_name;
		bool				_sign;
		const int			_toSign;
		const int			_toExec;
	public:
		Form();
		Form(const std::string name, const int toSign, const int toExec);
		~Form();
		Form(const Form& other);
		Form	&operator=(const Form& other);
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
		const std::string	&getName() const;
		const bool			&getSign() const;
		const int			&getToSign() const;
		const int			&getToExec() const;
		void				beSigned(const Bureaucrat &signer);
};

std::ostream	&operator<<(std::ostream &os, const Form &other);



#endif