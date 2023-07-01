/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smessal <smessal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 10:34:17 by smessal           #+#    #+#             */
/*   Updated: 2023/07/01 12:24:24 by smessal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <stdexcept>
#include <iostream>
#include <algorithm>

template <typename T>

bool	easyfind(T container_int, int match)
{
	try
	{
		typename T::const_iterator it = std::find(container_int.begin(), container_int.end(), match);
		return it != container_int.end();
	}
	catch(const std::exception& e)
	{
		std::cerr << "Incorrect data type, this function accepts containers" << '\n';
		return false;
	}
	
}

;
#endif