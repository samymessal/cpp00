/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smessal <smessal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 16:40:10 by smessal           #+#    #+#             */
/*   Updated: 2023/06/11 18:03:37 by smessal          ###   ########.fr       */
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
		~WrongAnimal(void); // add virtual to show
		void	makeSound(void) const;
		std::string		getType(void) const;
};

#endif