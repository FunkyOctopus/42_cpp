#include "AMateria.hpp"

AMateria::AMateria(void)
{
	//std::cout << "AMateria Default Constructor called" << std::endl;
}

AMateria::AMateria(std::string const & type) : type(type)
{
	//std::cout << "AMateria Parameterized Constructor called" << std::endl;
}

AMateria::AMateria(AMateria const & input_class)
{
	//std::cout << "AMateria Copy Constructor called" << std::endl;
	*this = input_class;
}

AMateria::~AMateria(void)
{
	//std::cout << "AMateria Deconstructor called" << std::endl;
}

AMateria & AMateria::operator=(AMateria const & input_class)
{
	type = input_class.type;
	return (*this);
}

std::string const & AMateria::getType() const
{
	return (type);
}

//virtual AMateria* clone() const = 0;

void AMateria::use(ICharacter& target)
{
	(void)target;
}
