/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouchra <ybouchra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 22:31:22 by ybouchra          #+#    #+#             */
/*   Updated: 2024/03/30 09:32:47 by ybouchra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <cstdlib>
#include <sstream>
#include <algorithm>
#include <deque>
#include <sys/time.h>
#include <ctime>
#include <iomanip>

void    merge_sort(std::vector<int> &vec);
void    merge_sort(std::deque<int> &vec);
