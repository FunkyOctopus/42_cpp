#include "Zombie.hpp"

int	main(void)
{
	Zombie	stack = Zombie("stack");
	Zombie*	heap = new Zombie("heap");
	if (heap == NULL)
		return (-1);
	
	randomChump("stack2");
	Zombie* heap2 = newZombie("heap2");

	delete heap;
	delete heap2;
	return (0);
}
