#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure")
{
	//std::cout << "Cure Default Constructor called" << std::endl;
}

Cure::Cure(Cure const & input_class) : AMateria(input_class)
{
	//std::cout << "Cure Copy Constructor called" << std::endl;
	(void)input_class;
}

Cure::~Cure(void)
{
	//std::cout << "Cure Deconstructor called" << std::endl;
}

Cure & Cure::operator=(Cure const & input_class)
{
	(void)input_class;
	return (*this);
}

AMateria* Cure::clone() const
{
	return (new Cure());
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " <<
	target.getName() << "'s wounds *" << std::endl;
}
