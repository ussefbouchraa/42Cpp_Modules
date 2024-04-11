#pragma once

#include <iostream>
#include "WrongAnimal.hpp"

class	WrongDog : public WrongAnimal
{
	public:
		WrongDog( void );
		WrongDog( std::string type );
		~WrongDog( void );
		WrongDog( WrongDog const& src );
		WrongDog&	operator=( const WrongDog& src );
		void	makeSound( void ) const;
};

