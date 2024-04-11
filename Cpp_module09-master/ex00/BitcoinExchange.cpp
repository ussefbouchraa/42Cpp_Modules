/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouchra <ybouchra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 02:07:59 by ybouchra          #+#    #+#             */
/*   Updated: 2024/03/29 22:27:50 by ybouchra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"


BitcoinExchange::BitcoinExchange(){};
BitcoinExchange::BitcoinExchange(const std::string& dataBasePath)
{
    std::ifstream    file(dataBasePath);
    std::string     line;

    if (!file.is_open())
        throw std::runtime_error("Error: can't open file");
    std::getline(file, line);
    while (std::getline(file, line)) {
        std::string key, value;
        key = line.substr(0, 10);
        value = line.substr(11);
        database[key] = std::strtod(value.c_str(), NULL);
    }
    file.close();
}


BitcoinExchange::BitcoinExchange( const BitcoinExchange& src )
{
    *this = src;   
}

BitcoinExchange&    BitcoinExchange::operator=( const BitcoinExchange& src )
{
    if (this != &src)
        this->database = src.database;
    return *this;
}

BitcoinExchange::~BitcoinExchange()
{
}

double  BitcoinExchange::getAmount(const std::string& date, double quantity)
{
    std::map<std::string, double>::iterator it;

    it = database.find(date);
    if (it == database.end()) 
    {
        it = database.lower_bound(date);
        if (it == database.begin())
            throw std::runtime_error("Error: date not found");
        it--;
    }
    return it->second * quantity;
}
