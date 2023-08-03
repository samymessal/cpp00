/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smessal <smessal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 14:18:42 by smessal           #+#    #+#             */
/*   Updated: 2023/08/03 14:23:15 by smessal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

# include <iostream>
# include <stack>

template <typename T> class MutantStack : public std::stack<T>	{

public:
	MutantStack() : std::stack<T>()									{}
	MutantStack &	operator=( const MutantStack & rhs )			{ std::stack<T>::operator=( rhs ); return *this;}
	MutantStack( MutantStack const & ref ) : std::stack<T>( ref )	{}
	virtual ~MutantStack()											{}

	typedef typename	std::stack<T>::container_type::iterator			iterator;
	typedef typename	std::stack<T>::container_type::const_iterator	const_iterator;
	iterator		begin() 										{ return std::stack<T>::c.begin(); }
	iterator		end() 											{ return std::stack<T>::c.end(); }
	const_iterator	begin() const									{ return std::stack<T>::c.begin(); }
	const_iterator	end() 	const									{ return std::stack<T>::c.end(); }
}
;
#endif