/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smessal <smessal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 17:15:16 by smessal           #+#    #+#             */
/*   Updated: 2023/04/15 18:05:14 by smessal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
    this->num = 0;
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
    this->num = cpy.num;
    std::cout << "Copy constructor called" << std::endl;
    return ;
}

Fixed Fixed::operator=(const Fixed& other)
{
    this->num = other.num;
    std::cout << "Copy assignment operator called" << std::endl;
    return (*this);
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->num);
}

void    Fixed::setRawBits(int const raw)
{
    this->num = raw;
    std::cout << "getRawBits member function called" << std::endl;
    return ;
}
