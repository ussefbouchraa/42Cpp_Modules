/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouchra <ybouchra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 18:38:25 by ybouchra          #+#    #+#             */
/*   Updated: 2024/02/07 04:21:20 by ybouchra         ###   ########.fr       */
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
    // std::cout << "getRawBits member function called" << std::endl;
    return (this->FixedPoint);
}

void Fixed::setRawBits(int const raw_value)
{
    // std::cout << "setRawBits member function called" << std::endl;
    this->FixedPoint = raw_value;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called " << std::endl;
}


Fixed::Fixed(const int i_nbr) : FixedPoint(i_nbr << frac)
{
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float f_nbr) : FixedPoint(roundf(f_nbr * (1 << frac)))
{
    std::cout << "Float constructor called" << std::endl;
}

float Fixed::toFloat( void )  const
{
    return static_cast<float>(this->FixedPoint) / ((1 << frac));
}

int Fixed::toInt()const
{
    return(this->FixedPoint >> frac);
}


std::ostream& operator<<( std::ostream& os, const Fixed& src ) {
    os << src.toFloat();
    return os;
}

