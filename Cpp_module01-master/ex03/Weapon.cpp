/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouchra <ybouchra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 02:23:46 by ybouchra          #+#    #+#             */
/*   Updated: 2024/01/31 19:13:11 by ybouchra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

    Weapon::Weapon(std::string value)
    {
        this->type = value;
    }
    
    void Weapon::setType(std::string value)
    {
        this->type = value;
    }
    
    std::string const Weapon::getType() 
    {
        return this->type;
    }