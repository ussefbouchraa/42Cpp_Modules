/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouchra <ybouchra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 00:43:09 by ybouchra          #+#    #+#             */
/*   Updated: 2024/02/12 00:43:13 by ybouchra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _Animal_HPP_
#define _Animal_HPP_

#include <iostream>

class	Animal
{
	protected:
		std::string type;
	public:
		Animal( void );
		Animal( std::string type );
		virtual ~Animal( void );
		Animal( Animal const& src );
		Animal&	operator=( const Animal& src );

		std::string		getType( void ) const;
		virtual void	makeSound( void ) const;
};

#endif
