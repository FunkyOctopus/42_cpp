#include "Zombie.hpp"

Zombie* newZombie(std::string name)
{
	Zombie *newZombie = NULL;
	newZombie = new Zombie(name);
	if (newZombie == NULL)
		return (NULL);
	return(newZombie);
}
