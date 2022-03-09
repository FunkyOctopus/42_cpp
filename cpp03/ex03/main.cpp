#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap One("One");
	DiamondTrap Two("Two");

	std::cout << std::endl << "Attack:" << std::endl;
	One.attack("Victim_One");
	Two.attack("Victim_Two");

	std::cout << std::endl << "takeDamage:" << std::endl;
	One.takeDamage(50);
	Two.takeDamage(50);

	std::cout << std::endl << "beRepaired:" << std::endl;
	One.beRepaired(50);
	Two.beRepaired(50);

	std::cout << std::endl << "SpecialFunctions:" << std::endl;
	One.guardgate();
	Two.highFivesGuys();

	std::cout << std::endl << "whoAmI:" << std::endl;
	One.whoAmI();
	Two.whoAmI();

	std::cout << std::endl;

	return (0);
}
