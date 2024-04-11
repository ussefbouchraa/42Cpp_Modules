/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouchra <ybouchra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 03:28:41 by ybouchra          #+#    #+#             */
/*   Updated: 2024/02/01 02:52:43 by ybouchra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "losers.hpp"

int main(int ac, char **av)
{
    if (ac != 4)
        return (std::cerr << "err : Syntax Error" << std::endl, 0);

    std::fstream existfile;
    std::fstream newfile;
    std::string line;
    std::string joined;

    existfile.open(av[1]);
    if (!existfile.is_open())
        return (std::cerr << "err : File Not Found !! " << std::endl, 0);

    joined = ((std::string)av[1] + ".replace");
    newfile.open(joined, std::ios::out);
    if (!newfile.is_open())
        return (std::cerr << "err : Openning Failed !! " << std::endl, 0);
 
    if (!*av[2] || !*av[3])
                return(0);

    while (std::getline(existfile, line) )
    {
        _set(line, (std::string)av[2], (std::string)av[3]);
        newfile << line ;
            newfile << "\n";
    }
    existfile.close();
    newfile.close();

    return 0;
}