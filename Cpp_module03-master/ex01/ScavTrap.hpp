/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouchra <ybouchra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 01:30:33 by ybouchra          #+#    #+#             */
/*   Updated: 2024/02/09 09:33:39 by ybouchra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
    
public:
    ScavTrap();
    ScavTrap(std::string name);
    ScavTrap(const ScavTrap &src);
    ScavTrap& operator=(const ScavTrap& src);
    ~ScavTrap();
    void attack(const std::string& target);
    void guardGate();
    
};

