/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouchra <ybouchra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 01:25:24 by ybouchra          #+#    #+#             */
/*   Updated: 2024/02/09 01:25:26 by ybouchra         ###   ########.fr       */
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
    void guardGate();
    
};