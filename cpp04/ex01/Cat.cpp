#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "Cat Default Constructor Called" << std::endl;
	brain = new Brain();
	type = "Cat";
}

Cat::Cat(Cat const & input_class)
{
	std::cout << "Cat Copy Constructor Called" << std::endl;
	brain = new Brain();
	*this = input_class;
}

Cat::~Cat(void)
{
	std::cout << "Cat Destructor Called" << std::endl;
	delete brain;
}

Cat & Cat::operator=(Cat const & input_class)
{
	type = input_class.type;
	*brain = *(input_class.brain);
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "Cat Sound" << std::endl;
}
