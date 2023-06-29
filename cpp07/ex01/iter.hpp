/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smessal <smessal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 12:54:34 by smessal           #+#    #+#             */
/*   Updated: 2023/06/29 15:28:33 by smessal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
template <typename T>

void	iter(const T *tab, std::size_t size, void (*func)(const T &d))
{
	if (tab)
	{
		for (std::size_t i = 0; i < size; i++)
			func(tab[i]);
	}
}

template <typename T>
void	print_test(T elem)
{
	std::cout << elem << std::endl;
}
;
#endif