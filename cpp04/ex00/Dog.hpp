#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include "Animal.hpp"

class Dog : public Animal
{
	private:

	public:
		Dog(void);
		Dog(Dog const & input_class);
		~Dog(void);
		Dog & operator=(Dog const & input_class);

		void	makeSound(void) const;
};

#endif
