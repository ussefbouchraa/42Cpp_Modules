/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouchra <ybouchra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 02:34:20 by ybouchra          #+#    #+#             */
/*   Updated: 2024/03/17 03:55:19 by ybouchra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"


template <typename T1>
void f(T1 target){
    std::cout << "The Target is: " << target << std::endl;
}

template <typename T1>
void iter(T1 *arr, int len, void (*f)(T1 target))
{
    for( int i = 0; i < len; i++)
        f(arr[i]);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    iter(arr, 5, f<int>);

std::cout << "-------------------\n";
    
    std::string tab[] = {"typename", "class"};
    iter(tab, 2, f<std::string>);
    
    return 0;
}