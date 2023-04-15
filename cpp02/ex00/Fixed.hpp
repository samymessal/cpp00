/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smessal <smessal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 16:31:08 by smessal           #+#    #+#             */
/*   Updated: 2023/04/15 18:07:08 by smessal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class   Fixed
{
    private:
        int                 num;
        static const int    fract = 8;
    
    public:
        Fixed(void);
        ~Fixed(void);
        Fixed(const Fixed &cpy);
        Fixed operator=(const Fixed& other);
        int     getRawBits(void) const;
        void    setRawBits(int const raw);
};

#endif