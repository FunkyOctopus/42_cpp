#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	FragTrap One("One");
	FragTrap Two;

	std::cout << std::endl << "Attack:" << std::endl;
	One.attack("Victim_One");
	Two.attack("Victim_Two");

	std::cout << std::endl << "takeDamage:" << std::endl;
	One.takeDamage(5);
	Two.takeDamage(5);

	std::cout << std::endl << "beRepaired:" << std::endl;
	One.beRepaired(55);
	Two.beRepaired(55);

	std::cout << std::endl << "highFivesGuys:" << std::endl;
	One.highFivesGuys();
	Two.highFivesGuys();

	std::cout << std::endl;

	return (0);
}
