/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouchra <ybouchra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 01:25:03 by ybouchra          #+#    #+#             */
/*   Updated: 2024/02/09 04:38:45 by ybouchra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap("Default")
{
    std::cout << "Default Constructor Called" << std::endl;
    this->Hit_points = 100;
    this->Energy_points = 50;
    this->Attack_damage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    
    std::cout << "ScavTrap " << this->Name << " born" << std::endl;
    this->Hit_points = 100;
    this->Energy_points = 50;
    this->Attack_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &src) : ClapTrap(src)
{
    std::cout << "Copy Constructor Called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &src)
{
    std::cout<<"Copy assignment operator called" << std::endl;
    if(this != &src)
    {
        ClapTrap::operator=(src);
    }
    return(*this);
}

void ScavTrap::guardGate()
{
    std::cout << this->Name << "ScavTrap is now in Gate keeper mode." << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "Destructor Called" << std::endl;
}