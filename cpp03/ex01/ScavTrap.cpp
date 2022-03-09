#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void )
{
	std::cout << "ScavTrap Default Constructor Called" << std::endl;
	name = "UNKNOWN";
	health = 100;
	energy = 50;
	attack_damage = 20;
}

ScavTrap::ScavTrap( ScavTrap const & input_class )
{
	std::cout << "ScavTrap Copy Constructor Called" << std::endl;
	*this = input_class;
}

ScavTrap::ScavTrap( std::string input_name )
{
	std::cout << "ScavTrap Parameterized Constructor Called" << std::endl;
	name = input_name;
	health = 100;
	energy = 50;
	attack_damage = 20;
}

ScavTrap::~ScavTrap( void )
{
	std::cout << "ScavTrap Deconstructor Called" << std::endl;
}

ScavTrap & ScavTrap::operator=( ScavTrap const & input_class )
{
	std::cout << "Assignment operator called" << std::endl;
	name = input_class.name;
	health = input_class.health;
	energy = input_class.energy;
	attack_damage = input_class.attack_damage;
	return (*this);
}

void ScavTrap::attack(const std::string& target)
{
	if (health > 0 && energy > 0)
	{
		std::cout << "ScavTrap " << name << " attacks " << target <<
		", causing " << attack_damage << " points of damage!" << std::endl;
		energy -= 1;
	}
	else
		std::cout << "Not enough health and / or energy to take damage." << std::endl;
}

void ScavTrap::guardgate()
{
	std::cout << name << " ScavTrap is now in Gate keeper mode." << std::endl;
}
