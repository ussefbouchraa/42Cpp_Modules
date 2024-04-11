/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouchra <ybouchra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 03:58:27 by ybouchra          #+#    #+#             */
/*   Updated: 2024/03/17 06:36:30 by ybouchra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <class T>
class Array{
    private:
        T *arr;
    public:
        Array(void);
        Array(unsigned int n);
        Array(const Array &rhs);
        Array& operator=(const Array &rhs);
        ~Array();

        int size(); const
};

template <class T>
Array <T>::Array(){
    this->arr = new (T[]);
}

template <class T>
Array<T>::Array(unsigned int n){
    this->arr = new T[n];
    
}





