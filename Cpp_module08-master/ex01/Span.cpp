/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouchra <ybouchra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 18:07:49 by ussef             #+#    #+#             */
/*   Updated: 2024/03/26 01:26:47 by ybouchra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{
}
Span::Span(unsigned int _N) : N(_N)
{
    
}
Span::Span(const Span &rhs)
{
    *this = rhs;
}
Span& Span::operator=(const Span &rhs)
{
    if(this != &rhs)
        *this = rhs;
    return(*this);
}
Span::~Span()
{
}
void Span::addNumber(long nbr)
{
    if( nbr > std::numeric_limits<int>::max() || nbr < std::numeric_limits<int>::min() )
            throw "Err: Out_Of_Limits_Int .";
    if(vec_numbers.size() >= N)
        throw "Err: Out of Range ";
    this->vec_numbers.push_back(nbr);
}

int Span::longestSpan()
{
    if(vec_numbers.empty())
          throw "Err: Empty_Container .";
    if(vec_numbers.size() < 2)
       throw "Err: Span Contains Less Than Two Nbrs .";

    std::sort(vec_numbers.begin(), vec_numbers.end());
    return(vec_numbers.back() - vec_numbers.front());
 }

int Span::shortestSpan()
{
    if(vec_numbers.empty())
        throw "Err: Empty_Container .";
    if(vec_numbers.size() < 2)
       throw "Err: Span Contains Less Than Two Nbrs .";
    std::sort(vec_numbers.begin(), vec_numbers.end());
    int min_span = vec_numbers[1] - vec_numbers[0];
    for (unsigned int i = 1; i < vec_numbers.size(); i++)
    {
        if((vec_numbers[i] - vec_numbers[i - 1]) < min_span)
            min_span = vec_numbers[i] - vec_numbers[i - 1];
    }
    return min_span;
}

   void Span::addNumber( std::vector<int> v)
    {

            if(v.size() + this->vec_numbers.size() > this->N )
                throw "Err: Out of Range ";
            this->vec_numbers.insert(this->vec_numbers.begin(), v.begin(), v.end());

        // std::vector<int>::iterator it1 = this->vec_numbers.begin();
        // for(; it1 != this->vec_numbers.end(); it1++)
        //     std::cout << "*** "<< *it1 <<std::endl;
    }
