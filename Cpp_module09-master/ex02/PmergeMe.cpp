/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouchra <ybouchra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 22:31:11 by ybouchra          #+#    #+#             */
/*   Updated: 2024/03/31 03:12:53 by ybouchra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void merge_sort(std::vector<int> &vec)
{
	int struggler = -1;
	if (vec.size() % 2 != 0) {
		struggler = *(vec.end() - 1);
		vec.pop_back();
	}
	
	std::vector<std::vector<int> >	pairs((vec.size() / 2));
	int idx = 0;
	for (size_t i = 0; i < vec.size(); i += 2)
	{
		pairs[idx].push_back(vec[i]); 
		pairs[idx].push_back(vec[i + 1]);
		idx++;
	}
    

	for (size_t i = 0; i < pairs.size(); i++) {
        if (pairs[i][0] < pairs[i][1])
            std::swap(pairs[i][0], pairs[i][1]);
	}
	
    
	std::sort(pairs.begin(), pairs.end());

    
	vec.resize(pairs.size());
	for (size_t i = 0; i < pairs.size(); i++) {
		vec[i] = pairs[i][0];
	}


	for (size_t i = 0; i < pairs.size(); i++) {
		std::vector<int>::iterator	pos = std::lower_bound(vec.begin(), vec.end(), pairs[i][1]);
		vec.insert(pos, pairs[i][1]);
	}

 
	if (struggler != -1) {
		std::vector<int>::iterator	pos = std::lower_bound(vec.begin(), vec.end(), struggler);
		vec.insert(pos, struggler);
	}
}
void    merge_sort(std::deque<int> &deq)
{
	int struggler = -1;
	if (deq.size() % 2 != 0) {
		struggler = *(deq.end() - 1);
		deq.pop_back();
	}

	std::deque<std::deque<int> >	pairs((deq.size() / 2));

	int idx = 0;
	for (size_t i = 0; i < deq.size(); i += 2)
	{
		pairs[idx].push_back(deq[i]); 
		pairs[idx].push_back(deq[i + 1]);
		idx++;
	}
	
	for (size_t i = 0; i < pairs.size(); i++) {
        if (pairs[i][0] < pairs[i][1])
            std::swap(pairs[i][0], pairs[i][1]);
	}
	
	std::sort(pairs.begin(), pairs.end());


	deq.resize(pairs.size());
	for (size_t i = 0; i < pairs.size(); i++) {
		deq[i] = pairs[i][0];
	}

	for (size_t i = 0; i < pairs.size(); i++) {
		std::deque<int>::iterator	pos = std::lower_bound(deq.begin(), deq.end(), pairs[i][1]);
		deq.insert(pos, pairs[i][1]);
	}
	if (struggler != -1) {
		std::deque<int>::iterator	pos = std::lower_bound(deq.begin(), deq.end(), struggler);
		deq.insert(pos, struggler);
	}
}