/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PMergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smessal <smessal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 17:13:05 by smessal           #+#    #+#             */
/*   Updated: 2023/08/07 19:22:45 by smessal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <string>
# include <vector>
# include <sstream>
# include <algorithm>

class PMergeMe
{
	public:
		// Constructors
		PMergeMe(std::vector<int> tab);
		PMergeMe();
		PMergeMe(const PMergeMe &copy);
		
		// Destructor
		~PMergeMe();
		
		// Operators
		PMergeMe & operator=(const PMergeMe &assign);
		typedef struct s_pair
		{
			int	a;
			int	b;
		}			t_pair;
		void	get_pairs();
		void	print_vector();
	private:
		size_t		binarysearch(int value);
		void	insert_sort();
		std::vector<t_pair>	pair_vec;
		std::vector<int>	original;
		std::vector<int>	result;
		static bool				comp_pairs(const t_pair &pair1, const t_pair &pair2);

};

#endif