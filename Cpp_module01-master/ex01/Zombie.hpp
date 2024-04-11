/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ussef <ussef@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 18:22:21 by ussef             #+#    #+#             */
/*   Updated: 2024/01/26 18:22:24 by ussef            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie{
private :
    std::string name;
    
public :
    void set_name(std::string value);
    void announce( void );
    ~Zombie();
};
Zombie* zombieHorde(int N, std::string name);

# endif