/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smessal <smessal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 18:25:07 by smessal           #+#    #+#             */
/*   Updated: 2023/04/20 19:23:32 by smessal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Dog_HPP
# define Dog_HPP

# include "Animal.hpp"

class	Dog :public Animal
{
	public:
		Dog(void);
		Dog(std::string in_type);
		virtual ~Dog(void);
		virtual	void	makeSound(void) const;
};

#endif