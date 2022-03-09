#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include "Animal.hpp"

class Cat : public Animal
{
	private:

	public:
		Cat(void);
		Cat(Cat const & input_class);
		~Cat(void);
		Cat & operator=(Cat const & input_class);

		void	makeSound(void) const;
};

#endif
