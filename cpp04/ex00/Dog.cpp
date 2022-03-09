#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "Dog Default Constructor Called" << std::endl;
	type = "Dog";
}

Dog::Dog(Dog const & input_class)
{
	std::cout << "Dog Copy Constructor Called" << std::endl;
	*this = input_class;
}

Dog::~Dog(void)
{
	std::cout << "Dog Destructor Called" << std::endl;
}

Dog & Dog::operator=(Dog const & input_class)
{
	type = input_class.type;
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "Dog Sound" << std::endl;
}
