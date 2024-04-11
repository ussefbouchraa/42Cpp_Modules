/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouchra <ybouchra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 11:11:59 by ybouchra          #+#    #+#             */
/*   Updated: 2024/01/30 14:46:25 by ybouchra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
    if(ac != 2)
        return(std::cout << "err: Syntax Error" << std::endl, 0);
        
    bool check;
    
    check = false;
    std::string str[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    for (int i = 0; i < 4; i++) {
        if (str[i] == (std::string)av[1])
            check = true;
    }
    if(check == false)
         return(std::cout << "err: Command Not Found" << std::endl, 0);
         
    Harl obj;
    obj.complain((std::string)av[1]);
    return(0);
}