/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouchra <ybouchra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 07:37:46 by ybouchra          #+#    #+#             */
/*   Updated: 2024/03/30 09:46:07 by ybouchra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char **argv)
{
    if (argc != 2) 
       return(std::cerr << "Error: The program takes one argument." << std::endl, 1);

    std::string inp = argv[1];

    if (inp.empty()) 
        return(std::cerr << "Error: Empty Format." << std::endl, 1);

    if(!valid_format(inp))
        return(std::cerr << "Error: Invalid Expression Format ." << std::endl,1);   
    evaluateRPN(inp);
    return 0;
}