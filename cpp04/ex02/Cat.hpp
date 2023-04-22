/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smessal <smessal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 16:50:33 by smessal           #+#    #+#             */
/*   Updated: 2023/04/22 16:50:35 by smessal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Cat_HPP
# define Cat_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class	Cat : public Animal
{
	private:
		Brain	mybrain;
	public:
		Cat(void);
		Cat(std::string in_type);
		virtual ~Cat(void);
		virtual	void	makeSound(void) const;
		virtual void	print_ideas(void) const;
};

#endif