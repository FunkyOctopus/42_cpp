#pragma once

# include "Weapon.hpp"

class HumanA
{
private:
	std::string			name;
	Weapon&				weapon;

public:
	HumanA(std::string inputName, Weapon& club);
	~HumanA(void);
	
	void				attack(void) const;
};
