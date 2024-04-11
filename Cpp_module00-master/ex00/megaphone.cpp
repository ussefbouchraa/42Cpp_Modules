/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouchra <ybouchra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 16:32:03 by ybouchra          #+#    #+#             */
/*   Updated: 2024/01/19 10:25:33 by ybouchra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void set_arg(char *av)
{
    int i;

    i = -1;
    while(av[++i])
        std::cout << (char) std::toupper(av[i]);
}

int main(int ac, char **av)
{
    int i;

    i = 0;
    if(ac >= 2)
    {
        while(av[++i])
            set_arg(av[i]);
        std::cout << std::endl;  
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
}