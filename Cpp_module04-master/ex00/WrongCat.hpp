#pragma once

#include <iostream>
#include "WrongAnimal.hpp"

class	WrongCat : public WrongAnimal
{
	public:
		WrongCat( void );
		WrongCat( std::string type );
		~WrongCat( void );
		WrongCat( WrongCat const& src );
		WrongCat&	operator=( const WrongCat& src );
		void	makeSound( void ) const;
};

