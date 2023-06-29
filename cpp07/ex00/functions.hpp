/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smessal <smessal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 12:06:10 by smessal           #+#    #+#             */
/*   Updated: 2023/06/29 12:46:49 by smessal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCTIONS_HPP
# define FUNCTIONS_HPP

#include <iostream>

template <typename T>
void		swap(T& first, T& second)
{
	T	temp = first;
	first = second;
	second = temp;
}

template <typename T>
T	min(T &first, T &second)
{
	if (second <= first)
		return (second);
	else
		return (first);
}

template <typename T>
T	max(T &first, T &second)
{
	if (second >= first)
		return (second);
	else
		return (first);
}

#endif