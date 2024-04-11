/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouchra <ybouchra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 01:53:06 by ybouchra          #+#    #+#             */
/*   Updated: 2024/01/30 12:02:54 by ybouchra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie{
private :
    std::string name;
    
public :
    Zombie(std::string s);
    void announce( void );
    ~Zombie();
};

void randomChump(std::string name);
Zombie* newZombie(std::string name);

# endif