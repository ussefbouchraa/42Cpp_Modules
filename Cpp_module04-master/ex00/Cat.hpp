#ifndef _Cat_HPP_
#define _Cat_HPP_

#include <iostream>
#include "Animal.hpp"

class	Cat : public Animal
{
	public:
		Cat( void );
		Cat( std::string type);
		~Cat( void );
		Cat( Cat const& src );
		Cat&	operator=( const Cat& src );
		void	makeSound( void ) const;
};

#endif
