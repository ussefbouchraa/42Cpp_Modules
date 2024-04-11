/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouchra <ybouchra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 00:42:38 by ybouchra          #+#    #+#             */
/*   Updated: 2024/02/12 05:19:54 by ybouchra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ) : Animal("Cat")
{
	std::cout << "Cat Default constructor called\n";
	brain = new Brain();
}

Cat::Cat( std::string type): Animal("Cat")
{
	(void)type;
	std::cout << "Cat parametrized constructor called\n";
}

Cat::~Cat( void )
{
	delete brain;
	std::cout << "Cat Destructor called\n";
}

Cat::Cat( Cat const& src ) : Animal(src)
{
	std::cout << "Cat Copy constructor called\n";
	brain = new Brain(*src.brain);
}

Cat&	Cat::operator=( const Cat& src )
{
	std::cout << "Cat Copy assignment operator called\n";
	Animal::operator=(src);
	*brain = *src.brain;
	return (*this);
}

void	Cat::makeSound( void ) const 
{
	std::cout << "mew, mew..." << std::endl;
}