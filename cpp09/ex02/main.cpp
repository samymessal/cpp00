/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smessal <smessal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 17:01:28 by smessal           #+#    #+#             */
/*   Updated: 2023/09/18 12:08:55 by smessal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PMergeMe.hpp"

double getTimeInMicroseconds() {
    struct timeval tv;
    gettimeofday(&tv, NULL);
    return tv.tv_sec * 1000000 + tv.tv_usec;
}

int	main(int ac, char **av)
{
	if (ac < 2)
	{
		std::cerr << "Incorrect number of arguments" << std::endl;
		return (1);
	}
	int					i = 1;
	long long int		digit = 0;
	std::vector<int>	orig;
	std::deque<int>		orig_deq;
	while (av && av[i])
	{
		std::istringstream	iss(av[i]);
		if (iss >> digit) {
			if (digit < 0 ) {
				std::cerr << "Only positive numbers are accepted change this number: " << digit << std::endl;
				return (1);
			} else if (digit > std::numeric_limits<int>::max()){
				std::cerr << "Overflow on maximum int value, please enter values lower than 2147483647" << std::endl;
				return (1);
			}
			orig.push_back(static_cast<int>(digit));
			orig_deq.push_back(static_cast<int>(digit));
		}
		else
		{
			std::cerr << "Error: Bad input" << std::endl;
			return (1);
		}
		i++;
	}


    // Output the result
	std::cout << "VECTOR" << std::endl << std::endl;
	std::cout << "Before:" << std::endl;
	for (size_t i = 0; i < orig.size(); i++)
		std::cout << orig[i] << " ";
	std::cout << std::endl;
	PMergeMe	test(orig);
	double start = getTimeInMicroseconds();
	test.execute_algo("vector");
    double stop = getTimeInMicroseconds();
	test.print_vector();
    double duration;
	 if(stop >= start) {
        duration = stop - start;
    } else {
        duration = (60.0 * 1000000 - start) + stop;
    }
    std::cout << "Time to process a range of " << orig.size() << " elements with vector : " << duration << " us" << std::endl;

	
	std::cout << std::endl;
	std::cout << "DEQUE" << std::endl << std::endl;
	std::cout << "Before:" << std::endl;
	for (size_t i = 0; i < orig_deq.size(); i++)
		std::cout << orig_deq[i] << " ";
	std::cout << std::endl;
	PMergeMe	test2(orig_deq);
	start = getTimeInMicroseconds();
	test2.execute_algo("deque");
	stop = getTimeInMicroseconds();
	test2.print_deq();
	if(stop >= start) {
        duration = stop - start;
    } else {
        duration = (60.0 * 1000000 - start) + stop;
    }
    std::cout << "Time to process a range of " << orig_deq.size() << " elements with vector : " << duration << " us" << std::endl;

}