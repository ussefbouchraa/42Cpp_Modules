/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouchra <ybouchra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 01:30:20 by ybouchra          #+#    #+#             */
/*   Updated: 2024/02/09 13:11:35 by ybouchra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap("Default")
{
    std::cout << "ScavTrap Default Constructor Called" << std::endl;
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
    std::cout << "ScavTrap Copy Constructor Called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &src)
{
    std::cout<<"ScavTrap Copy assignment operator called" << std::endl;
    if(this != &src)
        ClapTrap::operator=(src);
    return(*this);
}

void ScavTrap::attack(const std::string& target)
{
     if(this->Hit_points > 0 && this->Energy_points > 0)
    {
        std::cout << "ScavTrap "<< this->Name << " attacks " << target << " causing " << this->Attack_damage << " points of damage!"<< std::endl;
        this->Energy_points--; 
    }
    else
        std::cout << "ScavTrap "<< this->Name << " can't attack" << target << std::endl;    
}

void ScavTrap::guardGate()
{
    std::cout << this->Name << " ScavTrap is now in Gate keeper mode." << std::endl;
}


ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap Destructor Called" << std::endl;
}