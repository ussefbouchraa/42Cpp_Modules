/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouchra <ybouchra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 02:28:32 by ybouchra          #+#    #+#             */
/*   Updated: 2024/01/31 20:25:17 by ybouchra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &obj): name(name), weapon(obj){};

void HumanA::attack()
{
    std::cout << this->name << " attacks with their " ;
    std::cout <<  this->weapon.getType() << std::endl ;
}

