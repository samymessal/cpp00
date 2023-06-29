/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smessal <smessal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 15:46:42 by smessal           #+#    #+#             */
/*   Updated: 2023/06/29 16:37:15 by smessal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>
# include <stdexcept>

template <typename T>

class Array
{
	public:
		// Constructors
		Array();
		Array(unsigned int size);
		Array(const Array &copy);
		
		// Destructor
		~Array();
		
		// Operators
		Array & operator=(const Array &assign);
		const T& operator[](unsigned int index) const;
		T& operator[](unsigned int index);
		
		// Exceptions
		class IndOutofRange : public std::exception {
			virtual const char* what() const throw();
		};
		unsigned int	size() const;
		
	private:
		T				*my_arr;
		unsigned int	_size;
		
		
};

#include "Array.tpp" 
#endif