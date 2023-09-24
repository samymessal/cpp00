/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PMergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smessal <smessal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 17:13:05 by smessal           #+#    #+#             */
/*   Updated: 2023/09/24 13:56:50 by smessal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <string>
# include <vector>
# include <deque>
# include <sstream>
# include <algorithm>
# include <limits>
# include <sys/time.h>

class PMergeMe
{
	public:
		// Constructors
		PMergeMe(std::vector<int> tab);
		PMergeMe(std::deque<int> tab);
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
		void	get_pairs_deq();
		void	print_deq();
		void	execute_algo(std::string);
	private:
		size_t		binarysearch(int value);
		void		merge_vec(int left, int mid, int right);
		void		mergeSort_vec();
		void		merge_deq(int left, int mid, int right);
		void		mergeSort_deq();
		void		insert_sort();
		size_t		binarysearch_deq(int value);
		void		insert_sort_deq();
		std::vector<t_pair>	pair_vec;
		std::vector<int>	original;
		std::vector<int>	result;
		std::deque<t_pair>	pair_deq;
		std::deque<int>		original_deq;
		std::deque<int>		result_deq;
		static bool				comp_pairs(const t_pair &pair1, const t_pair &pair2);

};

#endif