/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouchra <ybouchra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 18:09:06 by ussef             #+#    #+#             */
/*   Updated: 2024/03/26 01:57:18 by ybouchra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <algorithm>
#include <vector>

class Span
{
private:
    unsigned int N;
    std::vector <int> vec_numbers;
    
    Span();
public:
    Span(unsigned int _N);
    Span(const Span &rhs);
    Span& operator=(const Span &rhs);
    ~Span();
    
    void addNumber(long nbr);
    int shortestSpan();
    int longestSpan();
    void addNumber( std::vector<int> v);
};
