/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouchra <ybouchra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 00:43:50 by ybouchra          #+#    #+#             */
/*   Updated: 2024/02/12 05:23:16 by ybouchra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ) : Animal("Dog")
{
	std::cout << "Dog Default constructor called\n";
		brain = new Brain();
}

Dog::Dog( std::string type ): Animal("Dog")
{
	(void)type;
	std::cout << "Dog Parametrized constructor called\n";
		brain = new Brain();
}

Dog::~Dog( void )
{
	delete brain;
	std::cout << "Dog Destructor called\n";
}

Dog::Dog( Dog const& src ) : Animal(src)
{
	std::cout << "Dog Copy constructor called\n";
	brain = new Brain(*src.brain);
}

Dog&	Dog::operator=( const Dog& src )
{
	std::cout << "Dog Copy assignment operator called\n";
	Animal::operator=(src);
	*brain = *src.brain;
	return (*this);
}

void	Dog::makeSound( void ) const 
{
	std::cout << "how, how..." << std::endl;
}