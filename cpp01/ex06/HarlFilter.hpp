/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HarlFilter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smessal <smessal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 12:07:46 by smessal           #+#    #+#             */
/*   Updated: 2023/04/07 15:26:53 by smessal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef HARLFILTER_HPP
# define HARLFILTER_HPP

#include <iostream>

class HarlFilter
{
    private:
        void	debug( void ) const;
        void	info( void ) const;
        void	warning( void ) const;
        void	error( void ) const;
        int     convert_to_int(std::string level) const;
    public:
        HarlFilter(void);
        ~HarlFilter(void);
		void    complain( std::string level ) const;
};

#endif