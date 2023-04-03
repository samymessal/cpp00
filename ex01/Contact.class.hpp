/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smessal <smessal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 14:19:37 by smessal           #+#    #+#             */
/*   Updated: 2023/04/03 15:00:06 by smessal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
#define CONTACT_H

#include "PhoneBook.class.hpp"

class Contact
{
    public:
        Contact(void);
        ~Contact(void);
        int		index;
		std::string	fname;
		std::string	lname;
		std::string	nick;
		std::string phone;
		std::string secret;
        void    fill(int ind, std::string first, std::string last,
                    std::string nname, std::string mobile, std::string phrase);

};

#endif