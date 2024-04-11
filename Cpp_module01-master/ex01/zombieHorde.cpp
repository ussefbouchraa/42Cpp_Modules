/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouchra <ybouchra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 18:22:30 by ussef             #+#    #+#             */
/*   Updated: 2024/02/01 00:44:01 by ybouchra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    int i;
    i = -1;
    
    if(N < 0)
        {
            std::cout << "err: Invalid Size for Allocation" << std::endl;
            exit(0); 
        }
    Zombie *z = new Zombie[N];
    while(N > ++i)
    {
        z[i].set_name(name);
    } 
    return(z);
}