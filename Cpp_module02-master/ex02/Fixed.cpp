/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouchra <ybouchra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 23:30:23 by ybouchra          #+#    #+#             */
/*   Updated: 2024/02/07 02:10:10 by ybouchra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Fixed.hpp"

Fixed::Fixed(void)
{
    // std::cout << "Default constructor called" << std::endl ;
    this->FixedPoint = 0; 
}

Fixed::Fixed(const Fixed &src)
{
    // std::cout << "Copy constructor called" << std::endl;
    Fixed::operator=(src);
}

Fixed & Fixed::operator=(Fixed const &src)
{
    // std::cout<<"Copy assignment operator called" << std::endl;

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
    // std::cout << "Destructor called " << std::endl;
}


Fixed::Fixed(const int i_nbr) : FixedPoint(i_nbr << frac)
{
    // std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float f_nbr) : FixedPoint(roundf(f_nbr * (1 << frac)))
{
    // std::cout << "Float constructor called" << std::endl;
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


/* addional functions and constructors */


bool Fixed::operator>(const Fixed &src) const {
    return (this->FixedPoint > src.FixedPoint);
}


bool Fixed::operator<(const Fixed &src) const {
    return (this->FixedPoint < src.FixedPoint);
}
bool Fixed::operator>=(const Fixed &src) const {
    return (this->FixedPoint >= src.FixedPoint);
}
bool Fixed::operator<=(const Fixed &src) const {
    return (this->FixedPoint <= src.FixedPoint);
}
bool Fixed::operator==(const Fixed &src) const {
    return (this->FixedPoint == src.FixedPoint);
}
bool Fixed::operator!=(const Fixed &src ) const {
    return (this->FixedPoint != src.FixedPoint); 
}



// -------increment decrement operators-------//

Fixed Fixed::operator++(void){
    this->FixedPoint++;
    return(*this);
} 
Fixed Fixed::operator--(void){
    this->FixedPoint--;
    return(*this);
}  

Fixed Fixed::operator++(int){
     Fixed tmp = *this;
    this->FixedPoint++;
    return(tmp);   
}

Fixed Fixed::operator--(int){
    Fixed tmp = *this;
    this->FixedPoint--;
    return(tmp);
}

//---------arithmetic operator -----------//

Fixed   Fixed::operator+( const Fixed &src ) const {
    Fixed   result;

    result.setRawBits(FixedPoint + src.FixedPoint);
    return result;
}

Fixed   Fixed::operator-( const Fixed &src ) const {
    Fixed   result;

    result.setRawBits(FixedPoint - src.FixedPoint);
    return result;
}

Fixed   Fixed::operator*( const Fixed &src ) const {
    Fixed   result;

    result.setRawBits((FixedPoint * src.FixedPoint) / (1 << frac));
    return result;
}

Fixed   Fixed::operator/( const Fixed &src ) const {
    Fixed   result;

    result.setRawBits(roundf(static_cast<float>(FixedPoint) / static_cast<float>(src.FixedPoint) * (1 << frac)));
    return result;
}

//***********max min ***********//

Fixed&  Fixed::min(Fixed &a, Fixed &b)
{
    if(a.FixedPoint < b.FixedPoint)
        return(a);
    return (b);
}

const Fixed& Fixed::min(const Fixed &a, const Fixed &b)
{
    if(a.FixedPoint < b.FixedPoint)
        return(a);
    return (b);
}

Fixed& Fixed::max( Fixed &a, Fixed &b ) {
    if ( a.FixedPoint > b.FixedPoint )
        return a;
    return b;
}


const Fixed& Fixed::max( const Fixed &a, const Fixed &b ) {
    if ( a.FixedPoint > b.FixedPoint)
        return a;
    return b;
}