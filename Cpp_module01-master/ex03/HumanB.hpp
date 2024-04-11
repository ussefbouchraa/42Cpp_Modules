/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouchra <ybouchra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 02:35:09 by ybouchra          #+#    #+#             */
/*   Updated: 2024/02/01 00:55:27 by ybouchra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HumanB_HPP
#define HumanB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
    std::string name;
    Weapon*     weapon;
    
    public :
    HumanB(std::string name);
    HumanB(std::string name, Weapon &obj);
    void setWeapon(Weapon &obj);
    void attack();
};

#endif