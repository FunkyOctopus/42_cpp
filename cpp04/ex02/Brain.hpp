#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include "Animal.hpp"

class Brain
{
	private:
		std::string ideas[100];

	public:
		Brain(void);
		Brain(Brain const & input_class);
		~Brain(void);
		Brain & operator=(Brain const & input_class);
};

#endif
