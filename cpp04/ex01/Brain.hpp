/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smessal <smessal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 18:26:06 by smessal           #+#    #+#             */
/*   Updated: 2023/04/22 14:02:01 by smessal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Brain_HPP
# define Brain_HPP

#include <iostream>
#include <string>
#include <sstream>

class Brain
{
	private:
		std::string	*ideas;
		void	rand_ideas(void);
	public:
		Brain(const Brain &cpy);
		Brain	operator=(const Brain &equal);
		Brain(void);
		~Brain();
		virtual	void	print_ideas(void) const;
};

#endif