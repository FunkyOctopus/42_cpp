#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"
# include "AMateria.hpp"
# include <iostream>

class MateriaSource : public IMateriaSource
{
	private:
		AMateria *Materias[4];

	public:
		MateriaSource(void);
		MateriaSource(MateriaSource const & input_class);
		~MateriaSource(void);
		MateriaSource & operator=(MateriaSource const & input_class);

		void learnMateria(AMateria* input_class);
		AMateria* createMateria(std::string const & type);
};

# endif
