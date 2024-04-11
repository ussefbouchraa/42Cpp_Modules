/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouchra <ybouchra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 13:10:29 by ussef             #+#    #+#             */
/*   Updated: 2024/03/24 02:01:44 by ybouchra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <array>



int main()
{
        
    try
    {
        std::array <int, 3> arr = {400, 500, 600};
        easyfind<std::array<int, 3> >(arr, 50);
    }
    catch(const std::exception& ex)
    {
        std::cerr<< "Item Not Found ." << '\n';
    }
    
    std::cout << "-------------------------\n";
    
    try
    {
        std::vector <int> vec;
        vec.push_back(10);
        vec.push_back(20);
        vec.push_back(30);
        easyfind<std::vector<int> >(vec, 50);
    }
    catch(const std::exception& ex)
    {
        std::cerr<< "Item Not Found ." << '\n';
    }

    std::cout << "-------------------------\n";
    try
    {
        std::list <int> lst;
        lst.push_back(100);
        lst.push_back(200);
        lst.push_back(300);
        easyfind<std::list<int> >(lst, 200);
    }
    catch(const std::exception& ex)
    {
        std::cerr<< "Item Not Found ." << '\n';
    }
    


    
}