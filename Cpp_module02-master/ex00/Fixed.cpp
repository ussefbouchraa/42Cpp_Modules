/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouchra <ybouchra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 21:39:03 by ybouchra          #+#    #+#             */
/*   Updated: 2024/02/07 01:20:53 by ybouchra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
    std::cout << "Default constructor called" << std::endl ;
   this->FixedPoint = 0; 
}

Fixed::Fixed(const Fixed &src)
{
    std::cout << "Copy constructor called" << std::endl;
    Fixed::operator=(src);
}

Fixed & Fixed::operator=(Fixed const &src)
{
    std::cout<<"Copy assignment operator called" << std::endl;

    if(this != &src)
        this->FixedPoint = src.getRawBits();

    return(*this);
}
    
    
int Fixed::getRawBits(void)const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->FixedPoint);
}

void Fixed::setRawBits(int const raw_value)
{
    std::cout << "setRawBits member function called" << std::endl;
    this->FixedPoint = raw_value;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called " << std::endl;
}



