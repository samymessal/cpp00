/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smessal <smessal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 16:50:24 by smessal           #+#    #+#             */
/*   Updated: 2023/06/15 16:02:21 by smessal          ###   ########.fr       */
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
		Brain(Brain const &cpy);
		Brain	operator=(const Brain &equal);
		Brain(void);
		virtual ~Brain();
		virtual	void	print_ideas(void) const;
};

#endif