/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ussef <ussef@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 07:15:25 by ybouchra          #+#    #+#             */
/*   Updated: 2024/03/22 12:04:05 by ussef            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

template <typename T>
void easyfind(T container, int value)
{   
        if (std::find(container.begin(), container.end(), value) != container.end()) 
            std::cout << "Item Found ." << std::endl;
        else
            throw(std::exception()); 

}
