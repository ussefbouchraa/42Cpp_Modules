/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouchra <ybouchra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 00:43:32 by ybouchra          #+#    #+#             */
/*   Updated: 2024/02/12 05:16:18 by ybouchra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _Brain_HPP_
#define _Brain_HPP_

#include <iostream>

class	Brain
{
	private:
		std::string	ideas[100];
	public:
		Brain( void );
		Brain( std::string idea);
		~Brain( void );
		Brain( Brain const& src );
		Brain&	operator=( const Brain& src );
};

#endif
