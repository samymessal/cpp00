/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smessal <smessal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 17:15:16 by smessal           #+#    #+#             */
/*   Updated: 2023/06/05 15:14:33 by smessal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::_fract = 8;

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
