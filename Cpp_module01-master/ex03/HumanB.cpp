/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouchra <ybouchra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 02:28:55 by ybouchra          #+#    #+#             */
/*   Updated: 2024/02/01 00:57:58 by ybouchra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->name = name;
    this->weapon = NULL;
}

HumanB::HumanB(std::string name, Weapon &obj)
{
    this->name = name;
    this->weapon = &obj;
}

void HumanB::attack()
{
    if(this->weapon)
        std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;

}

void HumanB::setWeapon(Weapon &obj)
{
    this->weapon = &obj;
}