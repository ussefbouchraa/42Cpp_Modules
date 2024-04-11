/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouchra <ybouchra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 01:35:19 by ybouchra          #+#    #+#             */
/*   Updated: 2024/02/09 13:03:58 by ybouchra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap("Default")
{
    std::cout << "FragTrap Default Constructor Called" << std::endl;
    this->Hit_points = 100;
    this->Energy_points = 100;
    this->Attack_damage = 30;  
}
FragTrap::FragTrap(std::string name) : ClapTrap(name) 
{
    std::cout << "FragTrap " << this->Name << " born" << std::endl;
    this->Hit_points = 100;
    this->Energy_points = 100;
    this->Attack_damage = 30;  
}

FragTrap::FragTrap(const FragTrap &src) : ClapTrap(src)
{
    std::cout << "FragTrap Copy Constructor Called" << std::endl;
}

FragTrap & FragTrap::operator=(const FragTrap &src)
{
    std::cout<<"FragTrap Copy assignment operator called" << std::endl;
    if(this != &src)
        ClapTrap::operator=(src);
    return(*this);
}

FragTrap::~FragTrap()
{
    std::cout << " FragTrap Destructor Called" << std::endl;
}

void FragTrap::attack(const std::string& target)
{
    if(this->Hit_points > 0 && this->Energy_points > 0)
    {
        std::cout << "FragTrap "<< this->Name << " attacks " << target << " causing " << this->Attack_damage << " points of damage!"<< std::endl;
        this->Energy_points--; 
    }
    else
        std::cout << "FragTrap "<< this->Name << " can't attack" << target << std::endl;    
}
void FragTrap::highFivesGuys(void)
{
    std::cout << this->Name << " gives hight fives request " << std::endl;
}