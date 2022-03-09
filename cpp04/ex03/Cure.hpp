#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"
# include <iostream>

class Cure : public AMateria
{
	private:

	public:
		Cure(void);
		Cure(Cure const & input_class);
		virtual ~Cure(void);
		Cure & operator=(Cure const & input_class);

		AMateria * clone() const;
		void use(ICharacter& target);
};

#endif
