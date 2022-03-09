#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : type("WrongAnimal")
{
	std::cout << "WrongAnimal Default Constructor Called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const & input_class)
{
	std::cout << "WrongAnimal Copy Constructor Called" << std::endl;
	*this = input_class;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal Destructor Called" << std::endl;
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal const & input_class)
{
	type = input_class.type;
	return (*this);
}

std::string WrongAnimal::getType(void) const
{
	return (type);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "WrongAnimal Sound" << std::endl;
}
