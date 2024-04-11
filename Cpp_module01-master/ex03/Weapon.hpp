/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouchra <ybouchra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 08:58:34 by ybouchra          #+#    #+#             */
/*   Updated: 2024/01/31 20:20:14 by ybouchra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef Weapon_HPP
# define Weapon_HPP

#include <iostream>

class Weapon{
    private :
        std::string type;
        
    public :
    Weapon(std::string value);
    const std::string  getType();
    void setType(std::string value);
};

#endif