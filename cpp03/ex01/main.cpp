#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap One("One");
	ScavTrap Two;

	std::cout << std::endl << "Attack:" << std::endl;
	One.attack("Victim_One");
	Two.attack("Victim_Two");

	std::cout << std::endl << "takeDamage:" << std::endl;
	One.takeDamage(5);
	Two.takeDamage(5);

	std::cout << std::endl << "beRepaired:" << std::endl;
	One.beRepaired(55);
	Two.beRepaired(55);

	std::cout << std::endl << "guardgate:" << std::endl;
	One.guardgate();
	Two.guardgate();

	std::cout << std::endl;

	return (0);
}
