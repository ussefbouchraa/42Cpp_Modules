/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouchra <ybouchra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 01:23:58 by ybouchra          #+#    #+#             */
/*   Updated: 2024/02/09 01:24:01 by ybouchra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class ClapTrap
{
protected:
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

        /*   accessors  */
    unsigned int  get_hitpoint();
    void          set_hitpoint(unsigned int _hitpoint);
    unsigned int  get_energy();
    void          set_energy(unsigned int _energy);
    unsigned int  get_damage();
    void          set_damage(unsigned int _damage);
};