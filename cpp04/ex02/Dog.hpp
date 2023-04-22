/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smessal <smessal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 16:50:45 by smessal           #+#    #+#             */
/*   Updated: 2023/04/22 16:50:47 by smessal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Dog_HPP
# define Dog_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class	Dog :public Animal
{
	private:
		Brain	mybrain;
	public:
		Dog(void);
		Dog(std::string in_type);
		virtual ~Dog(void);
		virtual	void	makeSound(void) const;
		virtual void	print_ideas(void) const;
};

#endif