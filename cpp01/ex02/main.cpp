/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smessal <smessal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 21:10:56 by smessal           #+#    #+#             */
/*   Updated: 2023/04/03 21:29:07 by smessal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
    std::string phrase = "HI THIS IS BRAIN";
    std::string *stringPTR = &phrase;
    std::string &stringREF = phrase;

    std::cout << "The address of the string is: " << static_cast <void*>(&phrase) << std::endl;
    std::cout << "The address of the pointer is: " << static_cast <void*>(stringPTR) << std::endl;
    std::cout << "The address of the reference is: " << static_cast <void*>(&stringREF) << std::endl;

    std::cout << "The value of the string is: " << phrase << std::endl;
    std::cout << "The value of the pointer is: " << *stringPTR << std::endl;
    std::cout << "The value of the reference is: " << stringREF << std::endl;
    return (0);
}
