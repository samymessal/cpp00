/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smessal <smessal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 11:49:30 by smessal           #+#    #+#             */
/*   Updated: 2023/04/03 19:21:46 by smessal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook(void)
{
    this->max = 8;
    this->len = 0;
};

PhoneBook::~PhoneBook(void)
{
    return ;
};

int PhoneBook::getmax(void) const
{
    return this->max;
};

int PhoneBook::older(void) const
{
    int i;

    i = 0;
    while (i < this->getmax())
    {
        if (this->Repertory[i].index == 0)
            return (i);
        i++;
    }
    return 0;
};

void    PhoneBook::maj_index(void)
{
    int i;

    i = 0;
    while (i < this->getmax())
    {
        this->Repertory[i].index--;
        i++;
    }
    return ;
};

int     PhoneBook::get_index(int find) const
{
    int i;

    i = 0;
    while (i < this->len)
    {
        if (this->Repertory[i].index == find)
            return (i);
        i++;
    }
    return (0);
}

void    PhoneBook::add(void)
{
    std::string first;
    std::string last;
    std::string nname;
    std::string mobile;
    std::string phrase;
    
    std::cout << "You can now enter, one by one the required fields" << std::endl;
    std::cout << "Enter the First Name: ";
    std::cin >> first;
    std::cout << "Last Name: ";
    std::cin >> last;
    std::cout << "Nick Name: ";
    std::cin >> nname;
    std::cout << "Phone Number: ";
    std::cin >> mobile;
    std::cout << "Secret: ";
    std::cin >> phrase;
    std::cout << "Your contact was succesfully saved" << std::endl;
    print(1);
    if (this->len < this->getmax())
    {
        this->Repertory[this->len].fill(this->len, first, last, nname,
            mobile, phrase);
        this->len++;
    }
    else if (this->len == this->getmax())
    {
        this->Repertory[this->older()].fill(8, first, last, nname,
            mobile, phrase);
        this->maj_index();
    }
};

void    PhoneBook::search(void) const
{
    int index;
    int i;
    
    i = 0;
    index = 0;
    std::cout << "All your contacts are printed below." <<std::endl;
    std::cout << std::setw(10) << std::right << "Index" ;
    std::cout << " | ";
    std::cout << std::setw(10) << std::right << "First Name";
    std::cout << " | ";
    std::cout << std::setw(10) << std::right << "Last Name";
    std::cout << " | ";
    std::cout << std::setw(10) << std::right << "Nickname" << std::endl;
    while (i < this->len)
    {
        std::cout << std::setw(10) << std::right << this->Repertory[i].index;
        std::cout << " | ";
        if (this->Repertory[i].fname.length() > 10)
            std::cout << std::setw(9) << std::right << this->Repertory[i].fname.substr(0, 9) << ".";
        else
            std::cout << std::setw(10) << std::right << this->Repertory[i].fname;
        std::cout << " | ";
        if (this->Repertory[i].lname.length() > 10)
            std::cout << std::setw(9) << std::right << this->Repertory[i].lname.substr(0, 9) << ".";
        else
            std::cout << std::setw(10) << std::right << this->Repertory[i].lname;   
        std::cout << " | ";
        if (this->Repertory[i].nick.length() > 10)
            std::cout << std::setw(9) << std::right << this->Repertory[i].nick.substr(0, 9) << ".";
        else
            std::cout << std::setw(10) << std::right << this->Repertory[i].nick;
        std::cout << std::endl;
        i++;
        
    }
    std::cout << "Select a contact by entering its index: " << std::endl;
    std::cin >> index;
    if (index >= this->len || index < 0)
        std::cout << "Unvalid index" << std::endl;
    else
    {
        std::cout << "First Name: " << this->Repertory[this->get_index(index)].fname << std::endl;
        std::cout << "Last Name: " << this->Repertory[this->get_index(index)].lname << std::endl;
        std::cout << "Nickname: " << this->Repertory[this->get_index(index)].nick << std::endl;
        std::cout << "Phone Number: " << this->Repertory[this->get_index(index)].phone << std::endl;
        std::cout << "Secret: " << this->Repertory[this->get_index(index)].secret << std::endl;
    }
}