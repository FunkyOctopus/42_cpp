#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include <iostream>
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	private:

	public:
		WrongCat(void);
		WrongCat(WrongCat const & input_class);
		~WrongCat(void);
		WrongCat & operator=(WrongCat const & input_class);

		void	makeSound(void) const;
};

#endif
