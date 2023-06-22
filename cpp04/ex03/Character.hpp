/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smessal <smessal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 17:01:10 by smessal           #+#    #+#             */
/*   Updated: 2023/06/22 10:56:44 by smessal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "ICharacter.hpp"
#include <iostream>

class Character : public ICharacter
{
	private:
		AMateria		*_inventory[4];
		AMateria		*dumbadd[100];
	public:
		Character(void);
		Character(const std::string &name);
		Character	&operator=(const Character &equal);
		Character(const Character &cpy);
		virtual ~Character(void);
		virtual std::string const & getName() const;
		virtual void equip(AMateria* m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter& target);
};

#endif