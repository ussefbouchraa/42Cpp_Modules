/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouchra <ybouchra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 23:31:35 by ybouchra          #+#    #+#             */
/*   Updated: 2024/02/07 01:43:34 by ybouchra         ###   ########.fr       */
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

    
    Fixed(const int i_nbr);
    Fixed(const float f_nbr);
    float toFloat(void)const;
    int toInt( void ) const;

    // additioanl functions
    
    bool    operator>( const Fixed &src ) const;
    bool    operator<( const Fixed &src ) const;
    bool    operator>=( const Fixed &src ) const;
    bool    operator<=( const Fixed &src ) const;
    bool    operator==( const Fixed &src ) const;
    bool    operator!=( const Fixed &src ) const;

    Fixed   operator+( const Fixed &src ) const;
    Fixed   operator-( const Fixed &src ) const;
    Fixed   operator*( const Fixed &src ) const;
    Fixed   operator/( const Fixed &src ) const;
    
    Fixed   operator++( void ); // prefix
    Fixed   operator--( void ); // prefix
    Fixed   operator++( int ); // postfix
    Fixed   operator--( int ); // postfix

    static Fixed& min( Fixed &a, Fixed &b );
    static const Fixed& min( const Fixed &a, const Fixed &b );
    static Fixed& max( Fixed &a, Fixed &b );
    static const Fixed& max( const Fixed &a, const Fixed &b );
    
};

/*
    many forms
    std::cout << addFixed(a, b) << '\n';
    std::cout << a + b << '\n';
*/

std::ostream& operator<<( std::ostream& os, const Fixed& src );
