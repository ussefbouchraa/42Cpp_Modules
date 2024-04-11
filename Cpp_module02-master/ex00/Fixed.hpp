/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouchra <ybouchra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 21:23:43 by ybouchra          #+#    #+#             */
/*   Updated: 2024/02/07 01:27:24 by ybouchra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Fixed
{
private:
    int                 FixedPoint;
    static  const int   frac = 8; // the number of fractional bits ;
public:
    Fixed(void);
    Fixed(const Fixed &fixed);
    ~Fixed();
    Fixed& operator=(Fixed const &src);
    int getRawBits( void ) const;
    void setRawBits( int const raw );
};
