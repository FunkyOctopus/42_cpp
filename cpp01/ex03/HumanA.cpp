#include "HumanA.hpp"

HumanA::HumanA(std::string inputName, Weapon& club) 
: name(inputName), weapon(club)
{
}

HumanA::~HumanA(void)
{
}

void	HumanA::attack(void) const
{
	std::cout << name << " attacks with his " <<
	HumanA::weapon.getType() << std::endl;
}
