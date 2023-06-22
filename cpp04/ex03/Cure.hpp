/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smessal <smessal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 18:26:32 by smessal           #+#    #+#             */
/*   Updated: 2023/06/22 10:56:45 by smessal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include <iostream>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class AMateria;
class ICharacter;

class Cure : public AMateria
{
	public:
		Cure(void);
		Cure	&operator=(const Cure &equal);
		Cure(const Cure &cpy);
		virtual ~Cure(void);
		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);
};

#endif