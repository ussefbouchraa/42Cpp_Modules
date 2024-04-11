/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouchra <ybouchra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 06:49:48 by ybouchra          #+#    #+#             */
/*   Updated: 2024/02/09 08:33:57 by ybouchra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <iostream>

class ClapTrap
{
private:
    std::string  Name;
    unsigned int Hit_points;
    unsigned int Energy_points;
    unsigned int Attack_damage;
    
public: 
    ClapTrap(void);
    ClapTrap(std::string name);
    ClapTrap(const ClapTrap &src);
    ClapTrap& operator=(const ClapTrap& src);
    ~ClapTrap();
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

};

