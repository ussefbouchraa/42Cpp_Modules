/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouchra <ybouchra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 01:27:04 by ybouchra          #+#    #+#             */
/*   Updated: 2024/02/09 12:24:42 by ybouchra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

class FragTrap : public ClapTrap
{

public:
    FragTrap(void);
    FragTrap(std::string name);
    FragTrap(const FragTrap &src);
    FragTrap& operator=(const FragTrap& src);
    ~FragTrap();

    void attack(const std::string& target);
    void highFivesGuys(void);
};
