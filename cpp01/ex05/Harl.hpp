/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smessal <smessal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 19:29:14 by smessal           #+#    #+#             */
/*   Updated: 2023/04/06 19:33:01 by smessal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef HARL_HPP
# define HARL_HPP

#include <iostream>

class Harl
{
    private:
        void	debug( void ) const;
        void	info( void ) const;
        void	warning( void ) const;
        void	error( void ) const;
    public:
        Harl(void);
        ~Harl(void);
		void    complain( std::string level ) const;
};

#endif