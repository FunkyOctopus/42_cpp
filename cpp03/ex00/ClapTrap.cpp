#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ) : name("UNKNOWN"), health(10), energy(10), attack_damage(0)
{
	std::cout << "ClapTrap Default Constructor Called" << std::endl;
}

ClapTrap::ClapTrap( ClapTrap const & input_class )
{
	std::cout << "ClapTrap Copy Constructor Called" << std::endl;
	*this = input_class;
}

ClapTrap::ClapTrap( std::string input_name ) : name(input_name), health(10), energy(10), attack_damage(0)
{
	std::cout << "ClapTrap Parameterized Constructor Called" << std::endl;
}

ClapTrap::~ClapTrap( void )
{
	std::cout << "ClapTrap Deconstructor Called" << std::endl;
}

ClapTrap & ClapTrap::operator=( ClapTrap const & input_class )
{
	std::cout << "ClapTrap Assignment operator called" << std::endl;
	name = input_class.name;
	health = input_class.health;
	energy = input_class.energy;
	attack_damage = input_class.attack_damage;
	return (*this);
}

void ClapTrap::attack(const std::string& target)
{
	if (health > 0 && energy > 0)
	{
		std::cout << "ClapTrap " << name << " attacks " << target <<
		", causing " << attack_damage << " points of damage!" << std::endl;
		energy -= 1;
	}
	else
		std::cout << "ClapTrap " << name << " does not have enough health and / or energy to attack." << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (health > 0 && energy > 0)
	{
		std::cout << "Health (Hit Points) of " << name << " decreased by " << amount << "." << std::endl;
		health -= amount;
	}
	else
		std::cout << "ClapTrap " << name << " does not have enough health and / or energy to take damage." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (health > 0 && energy > 0)
	{
		std::cout << "Health (Hit Points) of " << name << " increased by " << amount << "." << std::endl;
		health += amount;
		energy -= 1;
	}
	else
		std::cout << "ClapTrap " << name << " does not have enough health and / or energy to get repaired." << std::endl;
}
