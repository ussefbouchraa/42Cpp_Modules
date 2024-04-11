/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouchra <ybouchra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 18:39:00 by ybouchra          #+#    #+#             */
/*   Updated: 2024/02/07 04:39:13 by ybouchra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cmath>


class Fixed
{
private:
    int                 FixedPoint;
    static  const int   frac = 8; // the number of fractional bits ;
public:
    Fixed(void);
    Fixed(const Fixed &fixed);
    ~Fixed();
    int getRawBits( void ) const;
    void setRawBits( int const raw );
    Fixed& operator=(Fixed const &src);

    // additioanl functions and constuctors
    Fixed(const int i_nbr);
    Fixed(const float f_nbr);
    float toFloat(void)const;
    int toInt( void ) const;
};

std::ostream& operator<<( std::ostream& os, const Fixed& src );

