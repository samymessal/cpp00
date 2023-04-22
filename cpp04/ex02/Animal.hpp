/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smessal <smessal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 16:50:11 by smessal           #+#    #+#             */
/*   Updated: 2023/04/22 16:57:04 by smessal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Animal_HPP
# define Animal_HPP

#include <iostream>

class Animal
{
	protected:
		std::string	_type;
		Animal(void);
		Animal(std::string init_type);
		Animal(const Animal &cpy);
		Animal	operator=(const Animal &equal);
	public:
		virtual ~Animal(void);
		virtual	void	makeSound(void) const;
		std::string		getType(void) const;
};

#endif