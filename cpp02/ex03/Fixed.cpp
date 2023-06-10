/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smessal <smessal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 20:55:20 by smessal           #+#    #+#             */
/*   Updated: 2023/06/10 14:30:13 by smessal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::_fract = 8;


Fixed::Fixed(const int conv) : _num(conv << _fract)
{
	// std::cout << "Int constructor called" << std::endl;
	return ;
}

Fixed::Fixed(const float conv) : _num(static_cast<int>(roundf(conv * (1 << _fract))))
{
	// std::cout << "Float constructor called" << std::endl;
	return ;
}

Fixed::Fixed(void)
{
    this->_num = 0;
    // std::cout << "Default constructor called" << std::endl;
    return ;
}

Fixed::~Fixed(void)
{
    // std::cout << "Destructor called" << std::endl;
    return ;
}

Fixed::Fixed(const Fixed &cpy)
{
    this->_num = cpy._num;
    // std::cout << "Copy constructor called" << std::endl;
    return ;
}

Fixed Fixed::operator=(const Fixed& other)
{
    this->_num = other._num;
    // std::cout << "Copy assignment operator called" << std::endl;
    return (*this);
}

std::ostream& operator<<(std::ostream& os, const Fixed& other)
{
	os << other.toFloat();
	return (os);
}

bool Fixed::operator>(const Fixed& other) const
{
	if (this->_num > other._num)
		return 1;
	else
		return 0;
}

bool Fixed::operator<(const Fixed& other) const
{
	if (this->_num < other._num)
		return 1;
	else
		return 0;
}

bool Fixed::operator>=(const Fixed& other) const
{
	if (this->_num >= other._num)
		return 1;
	else
		return 0;
}

bool Fixed::operator<=(const Fixed& other) const
{
	if (this->_num <= other._num)
		return 1;
	else
		return 0;
}

bool Fixed::operator==(const Fixed& other) const
{
	if (this->_num == other._num)
		return 1;
	else
		return 0;
}

bool Fixed::operator!=(const Fixed& other) const
{
	if (this->_num != other._num)
		return 1;
	else
		return 0;
}

Fixed Fixed::operator+(const Fixed& other) const
{
	int		temp;
	Fixed	fix;

	temp = this->_num + other._num;
	fix.setRawBits(temp);
	return (fix);
}

Fixed Fixed::operator-(const Fixed& other) const
{
	int		temp;
	Fixed	fix;

	temp = this->_num - other._num;
	fix.setRawBits(temp);
	return (fix);
}

Fixed Fixed::operator*(const Fixed& other) const
{
	int		temp;
	float	temp_f;
	Fixed	fix;

	temp_f = (this->_num * other._num) >> _fract;
	temp = static_cast<int>(roundf(temp_f));
	fix.setRawBits(temp);
	return (fix);
}

Fixed Fixed::operator/(const Fixed& other) const
{
	float	temp_f;

	temp_f = (this->toFloat() / other.toFloat());
	Fixed fix(temp_f);
	return (fix);
}

Fixed& Fixed::operator++()
{
	this->_num = this->_num + 1;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed	temp;
	
	temp.setRawBits(this->_num);
	this->_num = this->_num + 1;
	return (temp);
}

int Fixed::getRawBits(void) const
{
    // std::cout << "getRawBits member function called" << std::endl;
    return (this->_num);
}

void    Fixed::setRawBits(int const raw)
{
    this->_num = raw;
    // std::cout << "SetRawBits member function called" << std::endl;
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

Fixed	Fixed::min(Fixed& first, Fixed& second)
{
	if (first._num <= second._num)
		return (first);
	else
		return (second);
}

const Fixed	Fixed::min(const Fixed &first, const Fixed &second)
{
	if (first._num <= second._num)
		return (first);
	else
		return (second);
}

Fixed	Fixed::max(Fixed& first, Fixed& second)
{
	if (first._num >= second._num)
		return (first);
	else
		return (second);
}

const Fixed	Fixed::max(const Fixed &first, const Fixed &second)
{
	if (first._num >= second._num)
		return (first);
	else
		return (second);
}