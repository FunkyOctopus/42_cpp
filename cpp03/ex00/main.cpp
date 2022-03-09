#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap One("One");
	ClapTrap Two;
	ClapTrap Three(Two);

	std::cout << std::endl << "Attack:" << std::endl;
	One.attack("Victim_One");
	Two.attack("Victim_Two");

	std::cout << std::endl << "takeDamage:" << std::endl;
	One.takeDamage(5);
	Two.takeDamage(5);

	std::cout << std::endl << "beRepaired:" << std::endl;
	One.beRepaired(5);
	Two.beRepaired(5);

	std::cout << std::endl;

	return (0);
}
