/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouchra <ybouchra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 20:59:39 by ybouchra          #+#    #+#             */
/*   Updated: 2024/01/21 08:40:52 by ybouchra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void PhoneBook::ADD(int i) {
    
    std::string str;
    str = "";
    
    std::cout << "\n" << "* Add Contact List [" << i << "] :\n";
    
    if (std::cout << "\t"<< "1- Enter The index :")
    {
        std::getline(std::cin, str);
        contact[i].set_index(str);
    }
        if(std::cout << "\t" << "2- Enter The First Name :")
    {
        std::getline(std::cin, str);
        contact[i].set_firstname(str);
    }
        if (std::cout << "\t" << "3- Enter The Last Name :")
    {
        std::getline(std::cin, str);
        contact[i].set_lastname(str);
    }
        if (std::cout << "\t" << "4- Enter The Nick Name :")
    {
        std::getline(std::cin, str);
        contact[i].set_nickname(str);
    }
        if (std::cout << "\t" << "5- Enter The secret :")
    {
        std::getline(std::cin, str);
        contact[i].set_secret(str);
    }
    if (std::cout << "\t" << "6- Enter The phonenumber :")
    {
        std::getline(std::cin, str);
        contact[i].set_phonenumber(str);
    }
     
}

void PhoneBook::SEARCH()
{
    int i = -1;
    int list = 0;

    std::string idx;
    std::cout << "\t"<< "1- Search For Index :";
    std::getline(std::cin, idx);

    while (++i < 8)
    {
        if(!is_empty(contact[i]))
            list++;
    }        
    if(!list)
    {
       std::cerr << "==> err:  Empty List Contact " << "\n";
        return;
    }
    i = -1;
    while( list > ++i)
    {
        if(idx == contact[i].get_index())
        {
            print_list(contact[i]);
            return;
        }
    }  
           std::cerr << "=> err: item " << idx << " Not Found !!" << "\n";
}   

void PhoneBook::EXIT()
{
    std::cout << "By <3" << "\n";
    exit(0);
}