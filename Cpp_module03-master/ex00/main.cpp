/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouchra <ybouchra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 06:48:15 by ybouchra          #+#    #+#             */
/*   Updated: 2024/02/09 05:56:32 by ybouchra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap CT1;
    ClapTrap CT2("ussef");
    ClapTrap CT3(CT2);
    CT1 = CT2;
    CT1.attack("enemy");
    CT1.takeDamage(1);
    CT1.beRepaired(1);

    

    return (0);
}