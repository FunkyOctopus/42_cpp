#pragma once

# include "Weapon.hpp"

class HumanB
{
private:
	std::string			name;
	Weapon				*weapon;

public:
	HumanB(std::string inputName);
	~HumanB(void);

	void				attack(void);
	void				setWeapon(Weapon& club);
};
