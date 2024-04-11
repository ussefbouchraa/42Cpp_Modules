#pragma once

#include <iostream>

class	WrongAnimal
{
	protected:
		std::string type;
	public:
		WrongAnimal( void );
		WrongAnimal( std::string type );
		~WrongAnimal( void );
		WrongAnimal( WrongAnimal const& src );
		WrongAnimal&	operator=( const WrongAnimal& src );

		std::string	getType( void ) const;
		void	makeSound( void ) const;
};


