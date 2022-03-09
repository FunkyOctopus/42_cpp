#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	Zombie*	groupZombies = new Zombie[N];
	if (groupZombies == NULL)
		return (NULL);

	int i = 0;
	while (i < N)
	{
		groupZombies[i].set_name(name);
		i++;
	}

	return (&groupZombies[0]);
}
