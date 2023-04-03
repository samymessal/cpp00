/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smessal <smessal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 11:22:31 by smessal           #+#    #+#             */
/*   Updated: 2023/04/03 16:22:51 by smessal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <iostream>
# include <iomanip>
# include "Contact.class.hpp"

class PhoneBook
{
    int max;
    public:
        int len;
        PhoneBook(void);
        ~PhoneBook(void);
        void    search(void) const;
        int     getmax(void) const;
		int		older(void) const;
		void	maj_index(void);
		void	add(void);
        class Contact Repertory[8];
};

void    print(int num);
#endif