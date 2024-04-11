#include "WrongDog.hpp"


WrongDog::WrongDog( void ) : WrongAnimal("WrongDog")
{
	std::cout << "WrongDog Default constructor called\n";
}

WrongDog::WrongDog( std::string type ) : WrongAnimal("WrongDog")
{
	(void)type;
	std::cout << "WrongDog Parametrized constructor called\n";
}
WrongDog::~WrongDog( void )
{
	std::cout << "WrongDog Destructor called\n";
}

WrongDog::WrongDog( WrongDog const& src ) : WrongAnimal(src)
{
	std::cout << "WrongDog Copy constructor called\n";
}

WrongDog&	WrongDog::operator=( const WrongDog& src )
{
	std::cout << "WrongDog Copy assignment operator called\n";
	WrongAnimal::operator=(src);
	return (*this);
}

void	WrongDog::makeSound( void ) const 
{
	std::cout << "how, how..." << std::endl;
}