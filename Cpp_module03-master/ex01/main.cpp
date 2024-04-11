/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouchra <ybouchra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 01:24:03 by ybouchra          #+#    #+#             */
/*   Updated: 2024/02/09 13:13:45 by ybouchra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    ScavTrap Scav;
    std::cout << "Hit points -->" <<  Scav.get_hitpoint() << std::endl;
    std::cout << "Energy points -->" << Scav.get_energy() << std::endl;
    std::cout << "Attack damage -->"<< Scav.get_damage() << std::endl;
    
    ScavTrap ST1("ToTo");
    ClapTrap clp("ElGrand");
    
     ST1.takeDamage(120);
     
    clp.attack("enemy");

    ST1.guardGate();
    
    ST1.set_hitpoint(200);
    ST1.set_energy(5);
   
    ST1.set_damage(20);

    std::cout << "Hit points -->" <<  ST1.get_hitpoint() << std::endl;
    std::cout << "Energy points -->" << ST1.get_energy() << std::endl;
    std::cout << "Attack damage -->"<< ST1.get_damage() << std::endl;
}

