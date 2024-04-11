/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouchra <ybouchra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 01:52:38 by ybouchra          #+#    #+#             */
/*   Updated: 2024/02/01 00:31:40 by ybouchra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(int ac, char **av)
{
if(ac == 2)
{

    Zombie *zombies;

        zombies = newZombie(std::string(av[1]));
        zombies->announce();
        randomChump(std::string(av[1]));  
              
        delete zombies; 
}
else
    return (std::cout << "==>err : Syntax Error"<< std::endl, 0);

}


//  negative value for allocation //ex01

// nullptr //ex03

// new line // ex04

//add another contructor to humanb  it must have a 2 params . //ex03

// in humanb function attack must have all ready  check if the weapon exist before print it

//remove break from switch

