#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	protected:
		std::string type;

	public:
		AMateria(void);
		AMateria(std::string const & type);
		AMateria(AMateria const & input_class);
		virtual ~AMateria(void);
		AMateria & operator=(AMateria const & input_class);

		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif
