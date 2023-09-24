/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PMergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smessal <smessal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 17:13:00 by smessal           #+#    #+#             */
/*   Updated: 2023/09/24 14:26:06 by smessal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PMergeMe.hpp"

// Constructors
PMergeMe::PMergeMe()
{
	// std::cout << "\e[0;33mDefault Constructor called of PMergeMe\e[0m" << std::endl;
}

PMergeMe::PMergeMe(std::vector<int> tab)
{
	original = tab;
	return ;
}

PMergeMe::PMergeMe(std::deque<int> tab)
{
	original_deq = tab;
	return ;
}

PMergeMe::PMergeMe(const PMergeMe &copy)
{
	*this = copy;
	// std::cout << "\e[0;33mCopy Constructor called of PMergeMe\e[0m" << std::endl;
}


// Destructor
PMergeMe::~PMergeMe()
{
	// std::cout << "\e[0;31mDestructor called of PMergeMe\e[0m" << std::endl;
}


// Operators
PMergeMe & PMergeMe::operator=(const PMergeMe &assign)
{
	if (this != &assign)
	{
		pair_vec = assign.pair_vec;
		original = assign.original;
		result = assign.result;
		pair_deq = assign.pair_deq;
		original_deq = assign.original_deq;
		result_deq = assign.result_deq;
	}
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
	// std::sort(pair_vec.begin(), pair_vec.end(), comp_pairs);
}

void	PMergeMe::merge_vec(int left, int mid, int right)
{
	int n1 = mid - left + 1;
    int n2 = right - mid;

    std::vector<int> L(n1), R(n2);

    for (int i = 0; i < n1; i++)
        L[i] = pair_vec[left + i].a;
    for (int j = 0; j < n2; j++)
        R[j] = pair_vec[mid + 1 + j].a;

    int i = 0, j = 0, k = left;

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            pair_vec[k].a = L[i];
            i++;
        } else {
            pair_vec[k].a = R[j];
            j++;
        }
        k++;
	}

	 while (i < n1) {
        pair_vec[k].a = L[i];
        i++;
        k++;
    }
	
    while (j < n2) {
        pair_vec[k].a = R[j];
        j++;
        k++;
    }
}

void	PMergeMe::mergeSort_vec() {
    int n = pair_vec.size();
    for (int curr_size = 1; curr_size <= n - 1; curr_size = 2 * curr_size) {
        for (int left_start = 0; left_start < n - 1; left_start += 2 * curr_size) {
            int mid = std::min(left_start + curr_size - 1, n - 1);
            int right_end = std::min(left_start + 2 * curr_size - 1, n - 1);

            merge_vec(left_start, mid, right_end);
        }
    }
}

void	PMergeMe::get_pairs_deq()
{
	t_pair	keep;

	for (unsigned int i = 0; i < original_deq.size(); i+=2)
	{
		if (i + 1 == original_deq.size())
			break ;
		if (original_deq[i] < original_deq[i + 1])
		{
			keep.a = original_deq[i + 1];
			keep.b = original_deq[i];
		}
		else
		{
			keep.a = original_deq[i];
			keep.b = original_deq[i + 1];
		}
		pair_deq.push_back(keep);
	}
	// std::sort(pair_deq.begin(), pair_deq.end(), comp_pairs);
}

void	PMergeMe::merge_deq(int left, int mid, int right)
{
	int n1 = mid - left + 1;
    int n2 = right - mid;

    std::vector<int> L(n1), R(n2);

    for (int i = 0; i < n1; i++)
        L[i] = pair_deq[left + i].a;
    for (int j = 0; j < n2; j++)
        R[j] = pair_deq[mid + 1 + j].a;

    int i = 0, j = 0, k = left;

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            pair_deq[k].a = L[i];
            i++;
        } else {
            pair_deq[k].a = R[j];
            j++;
        }
        k++;
	}

	 while (i < n1) {
        pair_deq[k].a = L[i];
        i++;
        k++;
    }
	
    while (j < n2) {
        pair_deq[k].a = R[j];
        j++;
        k++;
    }
}

void	PMergeMe::mergeSort_deq() {
    int n = pair_deq.size();
    for (int curr_size = 1; curr_size <= n - 1; curr_size = 2 * curr_size) {
        for (int left_start = 0; left_start < n - 1; left_start += 2 * curr_size) {
            int mid = std::min(left_start + curr_size - 1, n - 1);
            int right_end = std::min(left_start + 2 * curr_size - 1, n - 1);

            merge_deq(left_start, mid, right_end);
        }
    }
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

size_t	PMergeMe::binarysearch_deq(int value)
{
	size_t	start = 0;
	size_t	end = result_deq.size() - 1;
	size_t	mid;
	
	while (start < end)
	{
		mid = start + (end - start) / 2;
		if (result_deq[mid] == value)
			return mid;
		if (value > result_deq[mid])
			start = mid + 1;
		else
			end = mid;
	}
	return (start);
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

void	PMergeMe::insert_sort_deq()
{
	if (pair_deq.size() < 1)
		return ;
	for (size_t i = 0; i < pair_deq.size(); i++)
		result_deq.push_back(pair_deq[i].a);
	size_t	i = 0;
	while (i < pair_deq.size())
	{
		result_deq.insert(result_deq.begin() + binarysearch_deq(pair_deq[i].b), pair_deq[i].b);
		i++;
	}
	if (original_deq.size() % 2 != 0) {
		if (binarysearch_deq(original_deq.back()) == result_deq.size() - 1)
			result_deq.push_back(original_deq.back());
		else
			result_deq.insert(result_deq.begin() + binarysearch_deq(original_deq.back()), original_deq.back());
	}
	return ;
}


bool	PMergeMe::comp_pairs(const t_pair &pair1, const t_pair &pair2)
{
	return (pair1.a < pair2.a);
}

void	PMergeMe::execute_algo(std::string contain)
{
	if (contain == "vector")
	{
		get_pairs();
		mergeSort_vec();
		insert_sort();
	}
	else if (contain == "deque")
	{
		get_pairs_deq();
		mergeSort_deq();
		insert_sort_deq();
	}
	else
		std::cout << "Unknown container, please type vector or deque" << std::endl;
}

void	PMergeMe::print_vector() {
	std::cout << "After:\n";
	for (size_t i = 0; i < result.size(); ++i)
        std::cout << result[i] << " ";
	std::cout << std::endl;
}

void	PMergeMe::print_deq() {
	std::cout << "After:\n";
	for (size_t i = 0; i < result_deq.size(); ++i)
        std::cout << result_deq[i] << " ";
	std::cout << std::endl;
}