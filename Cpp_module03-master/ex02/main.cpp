/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouchra <ybouchra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 04:33:31 by ybouchra          #+#    #+#             */
/*   Updated: 2024/02/09 13:03:17 by ybouchra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
    FragTrap frag("Fraggg");
	frag.attack("enemy");
	frag.takeDamage(50);
	frag.beRepaired(10);
	frag.highFivesGuys();
}