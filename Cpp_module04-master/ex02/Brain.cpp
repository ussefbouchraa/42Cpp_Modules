/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouchra <ybouchra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 00:43:21 by ybouchra          #+#    #+#             */
/*   Updated: 2024/02/12 00:43:24 by ybouchra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain( void )
{
	std::cout << "Brain Default constructor called\n";
}
Brain::Brain( std::string idea)
{
	ideas[0] = idea;
	std::cout << "Brain parametrized constructor called\n";
}



Brain::~Brain( void )
{
	std::cout << "Brain Destructor called\n";
}

Brain::Brain( Brain const& src )
{
	std::cout << "Brain Copy constructor called\n";
	*this = src;
}

Brain&	Brain::operator=( const Brain& src )
{
	std::cout << "Brain Copy assignment operator called\n";
	if (this != &src){
		for (int i = 0; i < 100; i++) {
			this->ideas[i] = src.ideas[i];
		}
	}
	return (*this);
}
