#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice")
{
	//std::cout << "Ice Default Constructor called" << std::endl;
}

Ice::Ice(Ice const & input_class) : AMateria(input_class)
{
	//std::cout << "Ice Copy Constructor called" << std::endl;
	(void)input_class;
}

Ice::~Ice(void)
{
	//std::cout << "Ice Deconstructor called" << std::endl;
}

Ice & Ice::operator=(Ice const & input_class)
{
	(void)input_class;
	return (*this);
}

AMateria* Ice::clone() const
{
	return (new Ice());
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " <<
	target.getName() << " *" << std::endl;
}
