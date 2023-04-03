/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smessal <smessal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 15:01:20 by smessal           #+#    #+#             */
/*   Updated: 2023/04/03 18:44:30 by smessal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"

void    print(int num)
{
    if (num == 0)
        std::cout << "Welcome to my Phone Book:" << std::endl;
    std::cout << "Write ADD, if you want to add a contact." << std::endl;
    std::cout << "Write SEARCH to look for a contact" << std::endl;
    std::cout << "Write EXIT to terminate the program. THE CONTACTS WILL BE PERMANENTLY LOST" << std::endl;
    if (num == 0)
        std::cout << "Please write your first command and press ENTER" << std::endl;
    std::cout << "Command: ";
}

int main(void)
{
    PhoneBook   My_rep;
    std::string command;

    print(0);
    while (1)
    {
        std::cin >> command;
        if (!command.compare("ADD"))
        {
            My_rep.add();
        }
        else if (!command.compare("SEARCH"))
        {
            My_rep.search();       
        }
        else if (!command.compare("EXIT"))
        {
            std::cout << "Exiting the program" <<std::endl;
            break ;
        }
        else
        {
            std::cout << "Unknown command, please try again." << std::endl;
        }
        print(1);
    }
    return (0);
}