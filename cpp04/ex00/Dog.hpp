/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smessal <smessal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 17:04:14 by smessal           #+#    #+#             */
/*   Updated: 2023/04/20 17:49:02 by smessal          ###   ########.fr       */
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
		~Dog(void);
		virtual	void	makeSound(void) const;
};

#endif