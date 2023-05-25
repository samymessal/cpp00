/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smessal <smessal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 11:22:31 by smessal           #+#    #+#             */
/*   Updated: 2023/05/25 18:31:23 by smessal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <iostream>
# include <iomanip>
# include <cctype>
# include <limits>
# include "Contact.class.hpp"

class PhoneBook
{
    private:
        int max;
        int len;
        Contact Repertory[8];
    public:
        PhoneBook(void);
        ~PhoneBook(void);
        void    search(void) const;
        int     getmax(void) const;
		int		older(void) const;
        int     get_index(int find) const;
		void	maj_index(void);
		void	add(void);
};

void    print(int num);
#endif