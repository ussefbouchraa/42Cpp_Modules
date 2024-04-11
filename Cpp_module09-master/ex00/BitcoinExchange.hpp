/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouchra <ybouchra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 02:08:07 by ybouchra          #+#    #+#             */
/*   Updated: 2024/03/30 09:51:42 by ybouchra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <fstream>
#include <sstream>
#include <cstdlib>
#include <map>

class   BitcoinExchange
{
    private:
        std::map<std::string, double>   database;
        BitcoinExchange();
    public:
        BitcoinExchange(const std::string& dataBasePath);
        BitcoinExchange( const BitcoinExchange& src );
        BitcoinExchange&    operator=( const BitcoinExchange& src );
        ~BitcoinExchange();
        double  getAmount( const std::string& date, double quantity);
};