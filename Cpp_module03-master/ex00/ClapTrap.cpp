/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouchra <ybouchra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 06:49:59 by ybouchra          #+#    #+#             */
/*   Updated: 2024/02/09 05:56:13 by ybouchra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
    std::cout << "Default Constructor Called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
    this->Name = name;
    this->Hit_points = 10;
    this->Energy_points = 10;
    this->Attack_damage = 0; 
    std::cout << "ClapTrap " << this->Name << " born" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &src)
{
    std::cout << "Copy Constructor Called" << std::endl;
    *this = src;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &src)
{
    std::cout<<"Copy assignment operator called" << std::endl;
    if(this != &src)
        {
            this->Name = src.Name;
            this->Hit_points = src.Hit_points;
            this->Energy_points = src.Energy_points;
            this->Attack_damage = src.Attack_damage;
        }
    return(*this);
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor Called" << std::endl;
}




void ClapTrap::attack(const std::string& target)
{
    if(this->Hit_points > 0 && this->Energy_points > 0)
    {
        std::cout << "ClapTrap "<< this->Name << " attacks " << target << " causing " << this->Attack_damage << " points of damage!"<< std::endl;
        this->Energy_points--; 
    }
    else
        std::cout << "ClapTrap "<< this->Name << " can't attack" << target << std::endl;    
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if(amount >= Hit_points || Hit_points == 0)
        std::cout << "ClapTrap" << this->Name << " die" << std::endl;
    else
    {
        std::cout << "ClapTrap" << this->Name << " lose hit points" << std::endl;
        this->Hit_points -= amount;
    }
}
void ClapTrap::beRepaired(unsigned int amount)
{
    if(this->Hit_points > 0 && this->Energy_points > 0)
        {
            this->Hit_points += amount;
            this->Energy_points--;        
        }
    else
        std::cout << " ClapTrap " << this->Name << " can't repairs itself " << std::endl; 
}