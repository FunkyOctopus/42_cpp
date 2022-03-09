#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	std::cout << "WrongCat Default Constructor Called" << std::endl;
	type = "WrongCat";
}

WrongCat::WrongCat(WrongCat const & input_class)
{
	std::cout << "WrongCat Copy Constructor Called" << std::endl;
	*this = input_class;
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat Destructor Called" << std::endl;
}

WrongCat & WrongCat::operator=(WrongCat const & input_class)
{
	type = input_class.type;
	return (*this);
}

void	WrongCat::makeSound(void) const
{
	std::cout << "WrongCat Sound" << std::endl;
}
