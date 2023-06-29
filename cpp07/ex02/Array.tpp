/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smessal <smessal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 15:46:48 by smessal           #+#    #+#             */
/*   Updated: 2023/06/29 16:54:12 by smessal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ARRAY_TPP
#define ARRAY_TPP
// Constructors
template <typename T>

Array<T>::Array() : my_arr(NULL), _size(0) // my_arr(T[0])
{
	std::cout << "\e[0;33mDefault Constructor called of Array\e[0m" << std::endl;
}

template <typename T>
Array<T>::Array(unsigned int size) : my_arr(new T[size]), _size(size)
{
	std::cout << "\e[0;33mSize Constructor called of Array\e[0m" << std::endl;
}

template <typename T>
Array<T>::Array(const Array &copy)
{
	my_arr = NULL;
	_size = 0;
	*this = copy;
	std::cout << "\e[0;33mCopy Constructor called of Array\e[0m" << std::endl;
}

// Destructor
template <typename T>
Array<T>::~Array()
{
	std::cout << "\e[0;31mDestructor called of Array\e[0m" << std::endl;
	if (my_arr)
		delete[] my_arr;
}


// Operators
template <typename T>
Array<T> & Array<T>::operator=(const Array &assign)
{
	if (this != &assign)
	{
		_size = assign._size;
		if (my_arr)
			delete[] my_arr;
		this->my_arr = new T[assign._size];
		for (unsigned int i = 0; i < assign._size; i++)
			my_arr[i] = assign.my_arr[i];
	}
	return *this;
}

template <typename T>
T& Array<T>::operator[](unsigned int index) 
{
	if (index >= _size || !my_arr) {
		throw Array<T>::IndOutofRange();
	}
	return my_arr[index];
}

template <typename T>
const T& Array<T>::operator[](unsigned int index) const
{
	if (index >= _size || !my_arr) {
		throw Array<T>::IndOutofRange();
	}
	return my_arr[index];
}

// Exceptions
template <typename T>
const char * Array<T>::IndOutofRange::what() const throw()
{
	return "Index out of range";
}

template <typename T>
unsigned int	Array<T>::size() const
{
	return (_size);
}

#endif