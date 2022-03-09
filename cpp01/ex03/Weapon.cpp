#include "Weapon.hpp"

Weapon::Weapon(std::string	inputName) : weaponName(inputName)
{
}

Weapon::~Weapon(void)
{
}

void	Weapon::setType(const std::string&	inputName)
{
	weaponName = inputName;
}

std::string& Weapon::getType(void)
{
	return (weaponName);
}
