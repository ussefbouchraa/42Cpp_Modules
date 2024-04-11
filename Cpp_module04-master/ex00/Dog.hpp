#ifndef _Dog_HPP_
#define _Dog_HPP_

#include <iostream>
#include "Animal.hpp"

class	Dog : public Animal
{
	public:
		Dog( void );
		Dog(std::string type);
		~Dog( void );
		Dog( Dog const& src );
		Dog&	operator=( const Dog& src );
		void	makeSound( void ) const;
};

#endif
