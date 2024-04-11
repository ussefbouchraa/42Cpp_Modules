/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouchra <ybouchra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 01:12:06 by ybouchra          #+#    #+#             */
/*   Updated: 2024/02/11 01:33:25 by ybouchra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"


WrongAnimal::WrongAnimal( void ) : type("Unknown")
{
	std::cout << "WrongAnimal Default constructor called\n";
}

WrongAnimal::WrongAnimal( std::string type ) : type("WrongAnimal") 
{
	(void)type;
	std::cout << "WrongAnimal parametrized constructor called\n";
}

WrongAnimal::~WrongAnimal( void )
{
	std::cout << "WrongAnimal Destructor called\n";
}

WrongAnimal::WrongAnimal( WrongAnimal const& src )
{
	std::cout << "WrongAnimal Copy constructor called\n";
	*this = src;
}

WrongAnimal&	WrongAnimal::operator=( const WrongAnimal& src )
{
	std::cout << "WrongAnimal Copy assignment operator called\n";
	if (this != &src){
		this->type = src.type;
	}
	return (*this);
}


void	WrongAnimal::makeSound( void ) const 
{
	std::cout << "default animal sound" << std::endl;
}

std::string	WrongAnimal::getType( void ) const 
{
	return type;
}

