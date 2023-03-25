/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smessal <smessal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 13:19:28 by smessal           #+#    #+#             */
/*   Updated: 2023/03/25 13:27:13 by smessal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cctype>
#include <iostream>
using namespace std;

int main(int ac, char **av)
{
    int     i;
    int     j;
    char    c;
    
    if (ac < 1)
        return (1);
    if (ac == 1)
    {
        cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
        return (0);
    }
    i = 1;
    while (av && av[i])
    {
        j = 0;
        while (av[i] && av[i][j])
        {
            c = toupper(av[i][j]);
            cout << c;
            j++;
        }
        i++;
    }
    cout << "\n";
    return (0);
}