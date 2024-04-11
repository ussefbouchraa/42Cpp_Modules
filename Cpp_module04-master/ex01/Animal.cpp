/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouchra <ybouchra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 01:12:06 by ybouchra          #+#    #+#             */
/*   Updated: 2024/02/12 00:42:50 by ybouchra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"


Animal::Animal( void ) : type("Unknown")
{
	std::cout << "Animal Default constructor called\n";
}

Animal::Animal( std::string type ) : type(type) 
{
	std::cout << "Animal parametrized constructor called\n";
}

Animal::~Animal( void )
{
	std::cout << "Animal Destructor called\n";
}

Animal::Animal( Animal const& src )
{
	std::cout << "Animal Copy constructor called\n";
	*this = src;
}

Animal&	Animal::operator=( const Animal& src )
{
	std::cout << "Animal Copy assignment operator called\n";
	if (this != &src){
		this->type = src.type;
	}
	return (*this);
}


void	Animal::makeSound( void ) const 
{
	std::cout << "default animal sound" << std::endl;
}

std::string	Animal::getType( void ) const 
{
	return type;
}

