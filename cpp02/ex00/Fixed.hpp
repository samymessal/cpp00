/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smessal <smessal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 16:31:08 by smessal           #+#    #+#             */
/*   Updated: 2023/06/05 14:59:24 by smessal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class   Fixed
{
    private:
        int                 _num;
        static const int    _fract;
    
    public:
        Fixed(void);
        ~Fixed(void);
        Fixed(const Fixed &cpy);
        Fixed operator=(const Fixed& other);
        int     getRawBits(void) const;
        void    setRawBits(int const raw);
};

#endif