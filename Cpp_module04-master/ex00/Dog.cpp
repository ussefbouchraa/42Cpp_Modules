#include "Dog.hpp"


Dog::Dog( void ) : Animal("Dog")
{
	std::cout << "Dog Default constructor called\n";
}

Dog::Dog( std::string type) : Animal("Dog")
{
	(void)type;
	std::cout << "Dog parametrized constructor called\n";
}
Dog::~Dog( void )
{
	std::cout << "Dog Destructor called\n";
}

Dog::Dog( Dog const& src ) : Animal(src)
{
	std::cout << "Dog Copy constructor called\n";
}

Dog&	Dog::operator=( const Dog& src )
{
	std::cout << "Dog Copy assignment operator called\n";
	Animal::operator=(src);
	return (*this);
}

void	Dog::makeSound( void ) const 
{
	std::cout << "how, how..." << std::endl;
}