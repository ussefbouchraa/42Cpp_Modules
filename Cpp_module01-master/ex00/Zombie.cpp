/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouchra <ybouchra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 02:53:26 by ybouchra          #+#    #+#             */
/*   Updated: 2024/01/30 12:02:30 by ybouchra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
Zombie::Zombie(std::string name)
{
    this->name = name;
}

void Zombie::announce(void)
{
    std::cout  << this->name<< ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie(){
            std::cout << "zombie [" << this->name << "] : by" << "\n";
}