#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "Dog Default Constructor Called" << std::endl;
	brain = new Brain();
	type = "Dog";
}

Dog::Dog(Dog const & input_class)
{
	std::cout << "Dog Copy Constructor Called" << std::endl;
	brain = new Brain();
	*this = input_class;
}

Dog::~Dog(void)
{
	std::cout << "Dog Destructor Called" << std::endl;
	delete brain;
}

Dog & Dog::operator=(Dog const & input_class)
{
	type = input_class.type;
	*brain = *(input_class.brain);
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "Dog Sound" << std::endl;
}

Brain *	Dog::getBrain(void)
{
	return (brain);
}
