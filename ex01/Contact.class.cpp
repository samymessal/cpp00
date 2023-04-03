/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smessal <smessal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 14:21:35 by smessal           #+#    #+#             */
/*   Updated: 2023/04/03 15:00:55 by smessal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"

Contact::Contact(void)
{
    this->index = 0;
    return ;
}

Contact::~Contact(void)
{
    return ;
}

void    Contact::fill(int ind, std::string first, std::string last,
            std::string nname, std::string mobile, std::string phrase)
{
    this->index = ind;
    this->fname = first;
    this->lname = last;
    this->nick = nname;
    this->phone = mobile;
    this->secret = phrase;
    return ;
}
