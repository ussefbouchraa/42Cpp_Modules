/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouchra <ybouchra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 17:29:44 by ybouchra          #+#    #+#             */
/*   Updated: 2024/01/21 08:35:47 by ybouchra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int main(int ac, char **av)
{
    (void)av;

    PhoneBook phonebook;
    if (ac == 1)
    {
        int i;
        int y;

        i = 0;
        y = 0;
        std::  string input;
        while (1)
        {
            std::getline(std::cin, input);
            if (input == "ADD" && input.size() == 3 )
            {
                if(i < 8)
                {
                    phonebook.ADD(i);
                    while (!valid_data(phonebook.contact[i]))
                        phonebook.ADD(i);
                    std::cout << "Contact Add With Succes !!" << std::endl;
                    std::cout << "--------------------------" << std::endl;
                    i++;
                }
                else
                {
                    if(y == 8)
                        y = 0;
                    phonebook.ADD(y);
                    while (!valid_data(phonebook.contact[y]))
                        phonebook.ADD(y);
                    std::cout << "Contact Added With Succes !!" << std::endl;
                    std::cout << "----------------------------" << std::endl;
                    y++;
                }
            }
            else if (input ==  "SEARCH" && input.size() == 6)
                phonebook.SEARCH();
            else if (input ==  "EXIT" && input.size() == 4)
                phonebook.EXIT();
            else if(!input.empty())
                std::cerr << "==> err : option unvailable !!" << "\n";
        }
    }
    else
    {
        std::cerr << "==> err: Syntax Err !!"<< "\n";
        std::cout << "----------------------" << std::endl;
        exit(0);
    }
}