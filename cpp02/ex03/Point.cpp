/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smessal <smessal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 21:04:36 by smessal           #+#    #+#             */
/*   Updated: 2023/06/10 19:25:01 by smessal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : _x(Fixed()), _y(Fixed())
{
	// std::cout << "Default Point constructor called" << std::endl;
	return;
}

Point::Point(const float x, const float y) : _x(Fixed(x)), _y(Fixed(y))
{
	// std::cout << "Float Point constructor called" << std::endl;
	return;
}

Point::Point(const Fixed x, const Fixed y) : _x(x), _y(y)
{
	return;
}

Point::Point(const Point &other) : _x(other.get_x()), _y(other.get_y())
{
	// std::cout << "Copy Point constructor called" << std::endl;
	return;
}

Point Point::operator=(const Point &other)
{
	Point	temp(other.get_x(), other.get_y());
	
	// std::cout << "Assignment Point operator called" << std::endl;
	return temp;
}

Point Point::operator-(const Point &other) const
{
	Fixed temp_x;
	Fixed temp_y;

	temp_x = this->_x - other._x;
	temp_y = this->_y - other._y;
	Point res(temp_x, temp_y);
	return (res);
}

Fixed Point::operator*(const Point &other) const
{
	Fixed temp;

	temp = (this->_x * other._y) - (this->_y * other._x);
	return (temp);
}

Point::~Point(void)
{
	// std::cout << "Default Point destructor called" << std::endl;
}

const Fixed &Point::get_x(void) const
{
	return (this->_x);
}

const Fixed &Point::get_y(void) const
{
	return (this->_y);
};

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed zero;
	Fixed crossAB = (b - a) * (point - a);
	Fixed crossBC = (c - b) * (point - b);
	Fixed crossCA = (a - c) * (point - c);
	
	bool inside = (crossAB > zero && crossBC > zero && crossCA > zero) ||
		(crossAB < zero && crossBC < zero && crossCA < zero);
	return inside;
}
