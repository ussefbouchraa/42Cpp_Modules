/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouchra <ybouchra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 02:47:41 by ybouchra          #+#    #+#             */
/*   Updated: 2024/02/01 01:39:40 by ybouchra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void)
    {
        std::cout << "[ DEBUG ]" << std::endl;
        std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!\n" << std::endl;
    }
 void Harl::info(void)
    {
        std::cout << "[ INFO ]" << std::endl;
        std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n" << std::endl;
    }
void Harl::warning(void)
    {
        std::cout << "[ WARNING ]" << std::endl;
        std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
        std::cout << "I've been coming for years whereas you started working here since last month.\n" << std::endl;
    }
void Harl::error(void)
    {
        std::cout << "[ ERROR ]" << std::endl;
        std::cout << "This is unacceptable! I want to speak to the manager now.\n" << std::endl;
    }

        
int check_state(const char *level)
{
 
 const char *arr[4] = { "DEBUG", "INFO", "WARNING", "ERROR"};
 for(int i = 0; i < 4; i++)
 {
    if(!std::strcmp(level, arr[i]))
        return(i);
 }
 return(-1);
    
}

void Harl::harlFilter(const char *level)
{
    typedef void (Harl::*pf)();
    pf func[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};


    int index = check_state(level);
    switch (index)
    {
    case 0 :
        (this->*func[0])();
    case 1 :
        (this->*func[1])();
    case 2 :
        (this->*func[2])();
    case 3 :
        (this->*func[3])();
        break;
    default:
        std::cout << "[ Probably complaining about insignificant problems ]" << "\n";
        break;
    }
    
}