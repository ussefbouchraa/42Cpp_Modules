/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouchra <ybouchra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 01:03:48 by ybouchra          #+#    #+#             */
/*   Updated: 2024/01/27 02:12:21 by ybouchra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string str1 = "HI";
    std::string *PTR = &str;
    std::string& REF = str;
    
    std::cout << "memory adresse "<< std::endl;
     
    std::cout << "adress of str: " << &str << std::endl;
    std::cout << "adress of ptr: " << PTR << std::endl;
    std::cout << "adress of ref: " << &REF << std::endl;
    
    std::cout << "memory value "<< std::endl;
    
    std::cout << "value of str: " << str << std::endl;
    std::cout << "value of ptr: " << *PTR << std::endl;
    std::cout << "value of ref: " << REF << std::endl;
    
    
    
}