/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smessal <smessal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 17:02:55 by smessal           #+#    #+#             */
/*   Updated: 2023/06/22 17:26:03 by smessal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;
class AForm
{
	private:
		const std::string	_name;
		bool				_sign;
		const int			_toSign;
		const int			_toExec;
	public:
		AForm();
		AForm(const std::string name, const int toSign, const int toExec);
		virtual ~AForm();
		AForm(const AForm& other);
		AForm	&operator=(const AForm& other);
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
		class FormNotSigned : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		const std::string	&getName() const;
		const bool			&getSign() const;
		const int			&getToSign() const;
		const int			&getToExec() const;
		void				setSign(void);
		void				beSigned(const Bureaucrat &signer);
		virtual	void		execute(Bureaucrat const & executor) const = 0;
};

std::ostream	&operator<<(std::ostream &os, const AForm &other);



#endif