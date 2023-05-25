/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smessal <smessal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 14:21:35 by smessal           #+#    #+#             */
/*   Updated: 2023/05/25 16:44:05 by smessal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"

Contact::Contact(void)
{
    this->_index = 0;
    return ;
}

Contact::~Contact(void)
{
    return ;
}

void    Contact::fill(int ind, std::string first, std::string last,
            std::string nname, std::string mobile, std::string phrase)
{
    this->_index = ind;
    this->_fname = first;
    this->_lname = last;
    this->_nick = nname;
    this->_phone = mobile;
    this->_secret = phrase;
    return ;
}

int		Contact::get_index(void) const
{
	return (this->_index);
}

std::string	Contact::get_fname(void) const
{
	return (this->_fname);
}

std::string	Contact::get_lname(void) const
{
	return (this->_lname);
}

std::string	Contact::get_nick(void) const
{
	return (this->_nick);
}

std::string	Contact::get_phone(void) const
{
	return (this->_phone);
}

std::string	Contact::get_secret(void) const
{
	return (this->_secret);
}

void     Contact::change_index(int i)
{
	this->_index = this->_index + i;
	return ;
}
