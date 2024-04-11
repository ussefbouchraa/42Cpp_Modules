/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ussef <ussef@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/23 07:33:21 by ussef             #+#    #+#             */
/*   Updated: 2024/03/23 17:18:42 by ussef            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <algorithm>
#include <stack>
#include <list>

template <class T>
class MutantStack: public std::stack<T>
{
    public:
    MutantStack(void){};
    MutantStack(const MutantStack &rhs)
    {
        *this = rhs;
    };
    MutantStack& operator=(const MutantStack &rhs)
    {
        if(this != &rhs)
            *this = rhs;
        return(*this);
    };
    ~MutantStack(){};
    
    typedef typename std::stack<T>::container_type::iterator iterator;
    iterator begin()
    {
        return this->c.begin();
    }
    iterator end()
    {
        return this->c.end();
    }
};