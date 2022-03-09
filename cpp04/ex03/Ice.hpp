#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"
# include <iostream>

class Ice : public AMateria
{
	private:

	public:
		Ice(void);
		Ice(Ice const & input_class);
		virtual ~Ice(void);
		Ice & operator=(Ice const & input_class);

		AMateria * clone() const;
		void use(ICharacter& target);
};

#endif
