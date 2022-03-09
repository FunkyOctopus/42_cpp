#include "Zombie.hpp"

int	main(void)
{
	Zombie *groupZombies = zombieHorde(5, "heap");

	int	i = 0;
	while (i < 5)
	{
		groupZombies[i].announce();
		i++;
	}

	delete[] groupZombies;
	return (0);
}
