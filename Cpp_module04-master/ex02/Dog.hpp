/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouchra <ybouchra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 00:44:00 by ybouchra          #+#    #+#             */
/*   Updated: 2024/02/12 05:20:54 by ybouchra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _Dog_HPP_
#define _Dog_HPP_

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class	Dog : public Animal
{
	private:
		Brain*	brain;
	public:
		Dog( void );
		Dog(std::string type);
		~Dog( void );
		Dog( Dog const& src );
		Dog&	operator=( const Dog& src );
		void	makeSound( void ) const;
};

#endif
