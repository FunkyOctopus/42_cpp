#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	//std::cout << "MateriaSource Default Constructor called" << std::endl;
}

MateriaSource::MateriaSource(MateriaSource const & input_class)
{
	//std::cout << "MateriaSource Copy Constructor called" << std::endl;
	(void)input_class;
}

MateriaSource::~MateriaSource(void)
{
	//std::cout << "MateriaSource Deconstructor called" << std::endl;
}

MateriaSource & MateriaSource::operator=(MateriaSource const & input_class)
{
	(void)input_class;
	return (*this);
}

void MateriaSource::learnMateria(AMateria* input_class)
{
	int i = 0;

	while (i < 4)
	{
		if (!Materias[i])
		{
			Materias[i] = input_class;
			break ;
		}
		i++;
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	int i = 0;

	while (i < 4)
	{
		if (Materias[i]->getType() == type)
			return (Materias[i]->clone());
		i++;
	}
	return (0);
}
