#include "WrongCat.hpp"


WrongCat::WrongCat( void ) : WrongAnimal("WrongCat")
{
	std::cout << "WrongCat Default constructor called\n";
}

WrongCat::WrongCat( std::string type ) : WrongAnimal("WrongCat")
{
	(void)type;
	std::cout << "WrongCat parametrized constructor called\n";
}

WrongCat::~WrongCat( void )
{
	std::cout << "WrongCat Destructor called\n";
}

WrongCat::WrongCat( WrongCat const& src ) : WrongAnimal(src)
{
	std::cout << "WrongCat Copy constructor called\n";
}

WrongCat&	WrongCat::operator=( const WrongCat& src )
{
	std::cout << "WrongCat Copy assignment operator called\n";
	WrongAnimal::operator=(src);
	return (*this);
}

void	WrongCat::makeSound( void ) const 
{
	std::cout << "mew, mew..." << std::endl;
}