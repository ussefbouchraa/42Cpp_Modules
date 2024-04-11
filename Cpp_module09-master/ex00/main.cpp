/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouchra <ybouchra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 02:07:24 by ybouchra          #+#    #+#             */
/*   Updated: 2024/03/31 07:21:03 by ybouchra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"


bool is_leap_year(int year) {
    return (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0));
}


double ft_stod(std::string str)
{
    double res;
    std::istringstream iss (str);
    
    iss >> res;
    return(res);
}

int is_digit_skip(std::string inp, int item)
{
        int i = 0;
    
    if(inp[i] == '-' || inp[i] == '+')
        i++;
    if(!inp[i])
        return(0);
    while(inp[i])
    {
        if(inp[i] != item && !isdigit(inp[i]) )
            return(0);
        i++;
    }
    return(1);
}
int count_item(std::string sub_line, int item)
{
    size_t i = -1;
    int size = 0;
    while(sub_line[++i])
    {
        if(sub_line[i] == item)
        size++;
    }
    return(size);

}
int is_ValidDate(std::string date)
{
    if (date.empty() || date.size() != 10 || count_item(date, '-') != 2)
        return (0);
    int year, month, day;
    year = ft_stod(date.substr(0, 4).c_str());
    month = ft_stod(date.substr(5, 2).c_str());
    day = ft_stod(date.substr(8, 2).c_str());
    
    if (year < 2009 || month < 1 || month > 12 || day < 1)
        return 0;

    if (month == 2)
    {
        if (day > 29)
            return 0;
        if (day == 29 && !is_leap_year(year))
            return 0;
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11)
    {
        if (day > 30)
            return 0;
    }
    else
    {
        if (day > 31)
            return 0;
    }
    return 1;
}



int  is_ValidValue(std::string value)
{
    double v = ft_stod(value);
        if(count_item(value, '.') >= 2)
            return(std::cout << "Error: Too many points ." << std::endl , 0);
        else if(count_item(value, '-') >= 2 || count_item(value, '+') >= 2)
            return(std::cout << "Error: Too many sign ." << std::endl , 0);
        else if(!is_digit_skip(value, '.'))
              return(std::cout << "Error: Is Not Number ." << std::endl , 0);
        else if(v < 0)
            return(std::cout << "Error: not a positive number ." << std::endl , 0);
        else if(v > 1000 )
                   return(std::cout << "Error: too large number ." << std::endl , 0);
        return(1);
}
    
    

int main(int ac, char **av)
{
    if (ac != 2)
        return std::cerr << "Error: not enough arguments", 1;
    try {
        BitcoinExchange database("data.csv");
        std::ifstream    file(av[1]);
        std::string      line;
        
        if (!file.is_open())
            throw std::runtime_error("Error: could not open file.");
        if (!std::getline(file, line))
            throw std::runtime_error("Error: Empty File");
        if(line != "date | value")
            throw std::runtime_error("Error: Bad File format");
            
        while (std::getline(file, line)) 
        {
            if (line.empty()) {
                std::cerr << "Error: Empty File" << std::endl;
                continue;
            }
            size_t  pos = line.find(" | ");
            if ( line.size() < 14 || std::string::npos == pos) {
                std::cerr << "Error: Bad Input => " << line << std::endl;
                continue;
            }
            std::string date, value;
            date = line.substr(0, pos);
            value = line.substr(pos + 3);
       
            if (!is_ValidDate(date))
            {
                std::cerr << "Error: Bad Input => " << date << std::endl;
                continue; 
            }
            if(!is_ValidValue(value))
                continue;
                
            std::cout << date << " => " << value << " = " << database.getAmount(date, ft_stod(value))<< std::endl;      
        }
            
    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
        return 1;
    }
}
