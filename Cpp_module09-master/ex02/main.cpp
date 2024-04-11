/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouchra <ybouchra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 22:31:01 by ybouchra          #+#    #+#             */
/*   Updated: 2024/03/30 09:08:36 by ybouchra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"


std::ostream&	operator<<(std::ostream& os, std::vector<int> arr){
	for (size_t i = 0; i < arr.size(); i++) {
		os << arr[i] << " ";
	}
	return os;
}

std::ostream&	operator<<(std::ostream& os, std::deque<int> arr){
	for (size_t i = 0; i < arr.size(); i++) {
		os << arr[i] << " ";
	}
	return os;
}


std::string trim(std::string str) {
    size_t start = str.find_first_not_of("\t\v\r\n ");
    if (start != std::string::npos) {
        str = str.substr(start);
    }

    size_t end = str.find_last_not_of("\t\v\r\n ");
    if (end != std::string::npos) {
        str = str.substr(0, end + 1);
    }
	return str;
}


int main(int ac, char **av)
{
	if (ac < 2)
		return (std::cout << "Error : Not Enough args\n", 1);
	av += 1;
	std::vector<int> vec;

	int i = -1;
	while (av[++i])
	{
		std::stringstream	ss(trim(av[i]));
		long num;
		if (!(ss >> num) || !ss.eof() || (num < 0 || num > INT_MAX)) {
			return std::cerr << "Error: invalid argument" << std::endl, 1;
		}
		vec.push_back(num);
	}

	std::deque<int>	deq(vec.begin(), vec.end());
	
	std::cout << "Before: " << vec << std::endl;

	clock_t vecStart = clock();
	merge_sort(vec);
	double vecTime = static_cast<double>(clock() - vecStart) / CLOCKS_PER_SEC * 1000000;

	clock_t deqStart = clock();
	merge_sort(deq);
	double deqTime = static_cast<double>(clock() - deqStart) / CLOCKS_PER_SEC * 1000000;

	std::cout << "After: " << vec << std::endl;	

	std::cout << "Time to process a range of " << vec.size() << " elements with std::vector : " << vecTime  << " us" << std::endl;
	std::cout << "Time to process a range of " << vec.size() << " elements with std::deque  : " << deqTime  << " us" << std::endl;
}



