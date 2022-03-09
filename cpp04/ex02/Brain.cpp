#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain Default Constructor Called" << std::endl;
}

Brain::Brain(Brain const & input_class)
{
	std::cout << "Brain Copy Constructor Called" << std::endl;
	*this = input_class;
}

Brain::~Brain(void)
{
	std::cout << "Brain Destructor Called" << std::endl;
}

Brain & Brain::operator=(Brain const & input_class)
{
	int i = 0;
	while (i < 100)
	{
		ideas[i] = input_class.ideas[i];
		i++;
	}
	return (*this);
}
