#include "FragTrap.hpp"

FragTrap::FragTrap( void )
{
	std::cout << "FragTrap Default Constructor Called" << std::endl;
	name = "UNKNOWN";
	health = 100;
	energy = 100;
	attack_damage = 30;
}

FragTrap::FragTrap( FragTrap const & input_class )
{
	std::cout << "FragTrap Copy Constructor Called" << std::endl;
	*this = input_class;
}

FragTrap::FragTrap( std::string input_name )
{
	std::cout << "FragTrap Parameterized Constructor Called" << std::endl;
	name = input_name;
	health = 100;
	energy = 100;
	attack_damage = 30;
}

FragTrap::~FragTrap( void )
{
	std::cout << "FragTrap Deconstructor Called" << std::endl;
}

FragTrap & FragTrap::operator=( FragTrap const & input_class )
{
	std::cout << "Assignment operator called" << std::endl;
	name = input_class.name;
	health = input_class.health;
	energy = input_class.energy;
	attack_damage = input_class.attack_damage;
	return (*this);
}

void FragTrap::attack(const std::string& target)
{
	if (health > 0 && energy > 0)
	{
		std::cout << "FragTrap " << name << " attacks " << target <<
		", causing " << attack_damage << " points of damage!" << std::endl;
		energy -= 1;
	}
	else
		std::cout << "Not enough health and / or energy to take damage." << std::endl;
}

void FragTrap::highFivesGuys( void )
{
	std::cout << "High Fives Guys!" << std::endl;
}
