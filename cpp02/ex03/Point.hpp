/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smessal <smessal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 21:04:46 by smessal           #+#    #+#             */
/*   Updated: 2023/06/05 21:19:29 by smessal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include <iostream>
#include "Fixed.hpp"

class Point
{
	private:
		const Fixed	_x;
		const Fixed	_y;
	public:
		Point(void);
		Point(const float x, const float y);
		Point(const Point& other);
		Point	operator=(const Point &other);
		const Fixed&	get_x(void) const;
		const Fixed&	get_y(void) const;
		~Point();
};

bool	bsp(Point const a, Point const b, Point const c, Point const point);

#endif