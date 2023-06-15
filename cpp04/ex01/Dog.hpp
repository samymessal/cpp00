/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smessal <smessal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 18:25:07 by smessal           #+#    #+#             */
/*   Updated: 2023/06/11 18:28:15 by smessal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Dog_HPP
# define Dog_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Brain;
class	Dog :public Animal
{
	private:
		Brain	*mybrain;
	public:
		Dog(void);
		Dog(std::string in_type);
		Dog(const Dog &other);
		Dog	&operator=(const Dog &other);
		virtual ~Dog(void);
		virtual	void	makeSound(void) const;
		virtual void	print_ideas(void) const;
};

#endif