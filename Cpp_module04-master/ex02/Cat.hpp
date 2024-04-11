/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouchra <ybouchra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 00:43:43 by ybouchra          #+#    #+#             */
/*   Updated: 2024/02/12 04:33:23 by ybouchra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _Cat_HPP_
#define _Cat_HPP_

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class	Cat : public Animal
{
	private:
		Brain*	brain;
	public:
		Cat( void );
		Cat(std::string type);
		~Cat( void );
		Cat( Cat const& src );
		Cat&	operator=( const Cat& src );
		void	makeSound( void ) const;
};

#endif
