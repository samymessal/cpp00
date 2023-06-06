/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smessal <smessal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 13:55:52 by smessal           #+#    #+#             */
/*   Updated: 2023/06/06 16:53:11 by smessal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::_fract = 8;

Fixed::Fixed(const int conv) : _num(conv << _fract)
{
	std::cout << "Int constructor called" << std::endl;
	return ;
}

Fixed::Fixed(const float conv) : _num(static_cast<int>(roundf(conv * (1 << _fract))))
{
	std::cout << "Float constructor called" << std::endl;
	return ;
}

Fixed::Fixed(void)
{
    this->_num = 0;
    std::cout << "Default constructor called" << std::endl;
    return ;
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
    return ;
}

Fixed::Fixed(const Fixed &cpy)
{
    this->_num = cpy._num;
    std::cout << "Copy constructor called" << std::endl;
    return ;
}

Fixed Fixed::operator=(const Fixed& other)
{
    this->_num = other._num;
    std::cout << "Copy assignment operator called" << std::endl;
    return (*this);
}

std::ostream& operator<<(std::ostream& os, const Fixed& other)
{
	os << other.toFloat();
	return (os);
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->_num);
}

void    Fixed::setRawBits(int const raw)
{
    this->_num = raw;
    std::cout << "SetRawBits member function called" << std::endl;
    return ;
}

float	Fixed::toFloat(void) const
{
	float	toF;

	toF = static_cast<float>(this->_num) / (1 << _fract);
	return (toF);
}

int		Fixed::toInt(void) const
{
	int	toI;

	toI = this->_num >> _fract;
	return (toI);
}
