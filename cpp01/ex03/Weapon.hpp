#pragma once

# include <iostream>

class Weapon
{
private:
	std::string			weaponName;

public:
	Weapon(std::string	inputName);
	~Weapon(void);

	void				setType(const std::string	&inputName);
	std::string&		getType(void);
};
