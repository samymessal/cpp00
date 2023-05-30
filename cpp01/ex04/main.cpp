/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smessal <smessal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 23:02:31 by smessal           #+#    #+#             */
/*   Updated: 2023/05/30 17:35:07 by smessal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int main(int ac, char **av)
{
    if (ac != 4)
    {
        std::cout << "Incorrect number of arguments" << std::endl;
        return (0);
    }
    std::ifstream	origin;
	std::ifstream	last_char;
    std::ofstream	replace;
    std::string		line;
	std::string		file_rep;
	std::string		file_origin;
	std::string		line_rep;
	std::string		s1;
	std::string		s2;
	// std::streamoff	add = 1;
	size_t			i;
	size_t			found;
	char			char_last;

    file_origin = av[1];
	s1 = av[2];
	s2 = av[3];
	file_rep = file_origin + ".replace";
	origin.open(av[1], std::ios::in);
	last_char.open(av[1], std::ios::in);
	last_char.seekg(-1, std::ios_base::end);
    last_char.get(char_last);
    if (origin.is_open())
    {
        replace.open(file_rep.c_str(), std::ios::trunc);
		if (replace.is_open())
		{
			while (getline (origin,line))
			{
				i = 0;
				found = 0;
				line_rep = "";
				while (found != std::string::npos)
				{
					found = line.find(s1, found);
					if (found != std::string::npos)
					{
						line_rep.append(line, i, found - i);
						line_rep.append(s2);
						i += found - i + s1.length();
						found += s1.length();
					}
				}
				line_rep.append(line, i, line.length());
				replace << line_rep;
				std::cout << origin.tellg() << std::endl;
				if (origin.tellg() == -1 && char_last != '\n')
					continue ;
				replace << std::endl;
			}
		}
		else
		{
			std::cout << "Could not open replace file" <<std::endl;
			origin.close();
			return (1);
		}
    }
	else
	{
		std::cout << "Could not open file" << std::endl;
		return (1);
	}
	origin.close();
	replace.close();
    return (0);
    
}