/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smessal <smessal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 13:56:01 by smessal           #+#    #+#             */
/*   Updated: 2023/06/11 16:38:51 by smessal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class   Fixed
{
    private:
        int                 _num;
        static const int    _fract;
    
    public:
		Fixed(const int conv);
		Fixed(const float conv);
        Fixed(void);
        ~Fixed(void);
        Fixed(const Fixed &cpy);
        Fixed operator=(const Fixed& other);
        bool operator>(const Fixed& other);
        bool operator<(const Fixed& other);
        bool operator>=(const Fixed& other);
        bool operator<=(const Fixed& other);
        bool operator==(const Fixed& other);
        bool operator!=(const Fixed& other);
        Fixed operator+(const Fixed& other);
        Fixed operator-(const Fixed& other);
        Fixed operator*(const Fixed& other);
        Fixed operator/(const Fixed& other);
        Fixed& operator++();
        Fixed operator++(int);
		Fixed& operator--();
        Fixed operator--(int);
        int     getRawBits(void) const;
        void    setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
		static Fixed min(Fixed& first, Fixed& second);
		static const Fixed		min(const Fixed &first, const Fixed &second);
		static Fixed max(Fixed& first, Fixed& second);
		static const Fixed		max(const Fixed &first, const Fixed &second);
};

std::ostream& operator<<(std::ostream& os, const Fixed& other);

#endif