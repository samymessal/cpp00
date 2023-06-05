/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smessal <smessal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 21:04:36 by smessal           #+#    #+#             */
/*   Updated: 2023/06/05 21:19:50 by smessal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : _x(Fixed()), _y(Fixed())
{
	std::cout << "Default Point constructor called" << std::endl;
	return ;
}

Point::Point(const float x, const float y) : _x(Fixed(x)), _y(Fixed(y))
{
	std::cout << "Float Point constructor called" << std::endl;
	return ;
}

Point::Point(const Point& other)
{
	this->_x = other._x;
	this->_y = other._y;
	std::cout << "Copy Point constructor called" << std::endl;
	return ;
}

Point	Point::operator=(const Point &other)
{
	this->_x = other._x;
	this->_y = other._y;
	std::cout << "Assignment Point operator called" << std::endl;
	return ;
}

Point::~Point(void)
{
	std::cout << "Default Point destructor called" << std::endl;
}

const Fixed&	Fixed::get_x(void) const
{
	return (this->_x);
}

const Fixed&	Fixed::get_y(void) const
{
	return (this->_y);
};