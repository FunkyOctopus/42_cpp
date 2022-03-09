#include "Animal.hpp"

Animal::Animal(void) : type("Animal")
{
	std::cout << "Animal Default Constructor Called" << std::endl;
}

Animal::Animal(Animal const & input_class)
{
	std::cout << "Animal Copy Constructor Called" << std::endl;
	*this = input_class;
}

Animal::~Animal(void)
{
	std::cout << "Animal Destructor Called" << std::endl;
}

Animal & Animal::operator=(Animal const & input_class)
{
	type = input_class.type;
	return (*this);
}

std::string Animal::getType(void) const
{
	return (type);
}

//void	Animal::makeSound(void) const
//{
//	std::cout << "Animal Sound" << std::endl;
//}
