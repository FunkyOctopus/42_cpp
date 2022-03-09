#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
	protected:
		std::string type;

	public:
		WrongAnimal(void);
		WrongAnimal(WrongAnimal const & input_class);
		~WrongAnimal(void);
		WrongAnimal & operator=(WrongAnimal const & input_class);

		std::string 	getType(void) const;
		void	makeSound(void) const;
};

#endif
