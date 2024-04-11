/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouchra <ybouchra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 18:21:46 by ussef             #+#    #+#             */
/*   Updated: 2024/02/01 00:47:10 by ybouchra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    int i;
    int len;
    
    len = 0;
    Zombie *zombies;

    zombies = zombieHorde(len, "Foo");
       
    i = -1;
    while(len > ++i)
    zombies[i].announce();
    
        delete []zombies; 

}
