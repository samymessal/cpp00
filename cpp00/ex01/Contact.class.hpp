/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smessal <smessal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 14:19:37 by smessal           #+#    #+#             */
/*   Updated: 2023/05/25 16:47:31 by smessal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
#define CONTACT_H

#include "PhoneBook.class.hpp"

class Contact
{
    private:
        int			_index;
		std::string	_fname;
		std::string	_lname;
		std::string	_nick;
		std::string _phone;
		std::string _secret;
    public:
        Contact(void);
        ~Contact(void);
        void    fill(int ind, std::string first, std::string last,
                    std::string nname, std::string mobile, std::string phrase);
        int     	get_index(void) const;
        std::string	get_fname(void) const;
        std::string	get_lname(void) const;
        std::string	get_nick(void) const;
        std::string	get_phone(void) const;
        std::string	get_secret(void) const;
        void     	change_index(int i);


};

#endif