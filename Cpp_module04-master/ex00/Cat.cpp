#include "Cat.hpp"


Cat::Cat( void ) : Animal("Cat")
{
	std::cout << "Cat Default constructor called\n";
}

Cat::Cat( std::string type): Animal("Cat")
{
	(void)type;
	std::cout << "Cat parametrized constructor called\n";
}

Cat::~Cat( void )
{
	std::cout << "Cat Destructor called\n";
}

Cat::Cat( Cat const& src ) : Animal(src)
{
	std::cout << "Cat Copy constructor called\n";
}

Cat&	Cat::operator=( const Cat& src )
{
	std::cout << "Cat Copy assignment operator called\n";
	Animal::operator=(src);
	return (*this);
}

void	Cat::makeSound( void ) const 
{
	std::cout << "mew, mew..." << std::endl;
}