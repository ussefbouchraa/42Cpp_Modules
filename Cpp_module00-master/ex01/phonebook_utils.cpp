/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook_utils.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ussef <ussef@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 01:18:41 by ybouchra          #+#    #+#             */
/*   Updated: 2024/01/20 18:45:17 by ussef            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int is_digit(const std::string &value)
{
    size_t i;

    i = -1;
    while(value.size() > ++i)
    {
        if(!(std::isdigit(value[i])))
            return(0);
    }
    return(1);      
}

bool is_empty(Contact &contact)
{
        if(contact.get_index().empty() || contact.get_firstname().empty())
            return(true);
        if(contact.get_lastname().empty() || contact.get_nickname().empty())
            return(true);
        return false;
}

bool valid_data(Contact &contact)
{
       
    if(is_digit(contact.get_firstname()) || is_digit(contact.get_lastname()) ||
        is_digit(contact.get_secret()) || is_digit(contact.get_nickname()))
             return(std::cerr << "\n" << "==> err : incorrect inputs " << "\n", false);

    if(!is_digit(contact.get_index()) || !is_digit(contact.get_phonenumber()) ||
         std::stoll(contact.get_index()) > 2147483647)
            return(std::cerr << "\n" << "==> err : incorrect inputs " << "\n", false);
    
    if(contact.get_phonenumber().size() != 10)
            return(std::cerr << "\n" <<"==> err : incorrect phone number" << "\n", false);
    return(true);
}

void print_list(Contact &contact)
{
    std::string idx = contact.get_index();
    std::string f_name = contact.get_firstname();
    std::string l_name = contact.get_lastname();
    std::string n_name = contact.get_nickname();
    
    if(contact.get_index().size() > 10)
    {
        idx.resize(9);
        idx.append(1, '.');
    }
    else
        idx.append((10 - idx.size()), ' ');
    if(contact.get_firstname().size() > 10)
    {
        f_name.resize(9);
        f_name.append(1, '.');
    }
    else
        f_name.append((10 - f_name.size()), ' ');
        
    if(contact.get_lastname().size() > 10)
    {
        l_name.resize(9);
        l_name.append(1, '.');
    }
    else
        l_name.append((10 - l_name.size()), ' ');
        
    if(contact.get_nickname().size() > 10)
    {
        n_name.resize(9);
        n_name.append(1, '.');
    }
    else
    n_name.append((10 - n_name.size()), ' ');

   
            std::cout << "\n";
            std::cout << "---------------------------------------------" << std::endl;
            std::cout << "|index     " <<"|firstname " << "|lastname  " << "|nickname  |" << "\n";
            std::cout << "---------------------------------------------" << std::endl;
            std::cout << "|" << idx << "|" << f_name << "|" << l_name <<"|" <<n_name << "|"<< std::endl;
            std::cout << "---------------------------------------------" << std::endl;
}