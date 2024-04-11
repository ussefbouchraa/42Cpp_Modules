/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouchra <ybouchra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 10:50:27 by ybouchra          #+#    #+#             */
/*   Updated: 2024/01/30 12:30:27 by ybouchra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "losers.hpp"

 void _set(std::string &line, std::string s1, std::string s2)
 {
    size_t  i;
    size_t pos;
    
    pos = line.find(s1);
    i = -1;
    if(pos == std::string::npos)
        return;
    else
    {
        while(s2.size() > ++i && s1.size() > i)
            line[pos++] = s2[i];
    }
    return;
 }