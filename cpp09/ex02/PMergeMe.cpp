/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PMergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smessal <smessal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 17:13:00 by smessal           #+#    #+#             */
/*   Updated: 2023/08/07 23:09:05 by smessal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PMergeMe.hpp"

// Constructors
PMergeMe::PMergeMe()
{
	std::cout << "\e[0;33mDefault Constructor called of PMergeMe\e[0m" << std::endl;
}

PMergeMe::PMergeMe(std::vector<int> tab)
{
	original = tab;
	return ;
}

PMergeMe::PMergeMe(const PMergeMe &copy)
{
	(void) copy;
	std::cout << "\e[0;33mCopy Constructor called of PMergeMe\e[0m" << std::endl;
}


// Destructor
PMergeMe::~PMergeMe()
{
	std::cout << "\e[0;31mDestructor called of PMergeMe\e[0m" << std::endl;
}


// Operators
PMergeMe & PMergeMe::operator=(const PMergeMe &assign)
{
	(void) assign;
	return *this;
}

void	PMergeMe::get_pairs()
{
	t_pair	keep;

	for (unsigned int i = 0; i < original.size(); i+=2)
	{
		if (i + 1 == original.size())
			break ;
		if (original[i] < original[i + 1])
		{
			keep.a = original[i + 1];
			keep.b = original[i];
		}
		else
		{
			keep.a = original[i];
			keep.b = original[i + 1];
		}
		pair_vec.push_back(keep);
	}
	std::sort(pair_vec.begin(), pair_vec.end(), comp_pairs);
}

void	PMergeMe::print_vector() {
    insert_sort();
	std::cout << "Res:\n";
	for (size_t i = 0; i < result.size(); ++i)
        std::cout << result[i] << ", ";
	std::cout << std::endl;
}

void	PMergeMe::insert_sort()
{
	if (pair_vec.size() < 1)
		return ;
	for (size_t i = 0; i < pair_vec.size(); i++)
		result.push_back(pair_vec[i].a);
	size_t	i = 0;
	while (i < pair_vec.size())
	{
		result.insert(result.begin() + binarysearch(pair_vec[i].b), pair_vec[i].b);
		i++;
	}
	if (original.size() % 2 != 0) {
		if (binarysearch(original.back()) == result.size() - 1)
			result.push_back(original.back());
		else
			result.insert(result.begin() + binarysearch(original.back()), original.back());
	}
	return ;
}

size_t	PMergeMe::binarysearch(int value)
{
	size_t	start = 0;
	size_t	end = result.size() - 1;
	size_t	mid;
	
	while (start < end)
	{
		mid = start + (end - start) / 2;
		if (result[mid] == value)
			return mid;
		if (value > result[mid])
			start = mid + 1;
		else
			end = mid;
	}
	return (start);
}

bool	PMergeMe::comp_pairs(const t_pair &pair1, const t_pair &pair2)
{
	return (pair1.a < pair2.a);
}