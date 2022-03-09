#include "HumanB.hpp"

HumanB::HumanB(std::string inputName) : name(inputName), weapon(NULL)
{
}

HumanB::~HumanB(void)
{
}

void	HumanB::attack(void)
{
	if (weapon)
		std::cout << HumanB::name << " attacks with his " <<
		HumanB::weapon->getType() << std::endl;
	else
		std::cout << HumanB::name << " doesn't have a weapon!" << std::endl;

}

void	HumanB::setWeapon(Weapon& club)
{
	weapon = &club;
}
