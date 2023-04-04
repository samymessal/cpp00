/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smessal <smessal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 23:02:31 by smessal           #+#    #+#             */
/*   Updated: 2023/04/04 23:57:58 by smessal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int ac, char **av)
{
    if (ac != 4)
    {
        std::cout << "Incorrect number of arguments" << std::endl;
        return (0);
    }
    std::ifstream	origin;
    std::ofstream	replace;
    std::string		line;
	std::string		file_rep;
	std::string		file_origin;
	std::string		s1;
	std::string		s2;
	size_t				i;

    file_origin = av[1];
	s1 = av[2];
	s2 = av[3];
	file_rep = file_origin + ".replace";
	origin.open(av[1]);
    if (origin.is_open())
    {
        replace.open(file_rep, std::ios::trunc);
		while (getline (origin,line))
        {
			if (replace.is_open())
			{
				i = 0;
				while (line[i])
				{
					if (!line.compare(i, 1, s1, 0, 1))
					{
						if (!line.compare(i, s1.length(), s1, 0, s1.length()))
						{
							replace << s2;
							i += s1.length();
						}
					}
					else
					{
						replace << line.substr(i, i + 1);
						i++;
					}
				}
				replace << std::endl;
			}
        }
    }
    std::cout << line;
    origin.close();
	replace.close();
    return (0);
    
}