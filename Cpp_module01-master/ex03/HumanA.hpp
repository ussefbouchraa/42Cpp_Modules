/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouchra <ybouchra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 02:32:47 by ybouchra          #+#    #+#             */
/*   Updated: 2024/01/31 20:25:08 by ybouchra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HumanA_HPP
#define HumanA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
        std::string name;
        Weapon      &weapon;
    
    public :
        HumanA(std::string name, Weapon &obj);
        void attack();
};

#endif