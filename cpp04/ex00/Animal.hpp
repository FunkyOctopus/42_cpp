#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
	protected:
		std::string type;

	public:
		Animal(void);
		Animal(Animal const & input_class);
		virtual ~Animal(void);
		Animal & operator=(Animal const & input_class);

		std::string 	getType(void) const;
		virtual void	makeSound(void) const;
};

#endif
