/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smessal <smessal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 18:22:54 by smessal           #+#    #+#             */
/*   Updated: 2023/06/15 20:00:54 by smessal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include <iostream>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class AMateria;
class ICharacter;

class Ice : public AMateria
{
	public:
		Ice(void);
		Ice	&operator=(const Ice &equal);
		Ice(const Ice &cpy);
		virtual ~Ice(void);
		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);
};

#endif