/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smessal <smessal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 18:25:39 by smessal           #+#    #+#             */
/*   Updated: 2023/04/20 18:25:40 by smessal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WrongAnimal_HPP
# define WrongAnimal_HPP

#include <iostream>

class WrongAnimal
{
	protected:
		std::string	_type;
	public:
		WrongAnimal(void);
		WrongAnimal(std::string init_type);
		WrongAnimal(const WrongAnimal &cpy);
		WrongAnimal	operator=(const WrongAnimal &equal);
		virtual ~WrongAnimal(void);
		void	makeSound(void) const;
		std::string		getType(void) const;
};

#endif