#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain *brain;

	public:
		Dog(void);
		Dog(Dog const & input_class);
		virtual ~Dog(void);
		Dog & operator=(Dog const & input_class);

		void	makeSound(void) const;
		Brain *	getBrain(void);
};

#endif
