/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouchra <ybouchra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 02:51:00 by ybouchra          #+#    #+#             */
/*   Updated: 2024/01/30 03:45:26 by ybouchra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char *av[])
{
    if(ac != 2)
        return(std::cout << "err: Syntax Error" << std::endl, 0);

    Harl obj;
    obj.harlFilter(av[1]);
    
}