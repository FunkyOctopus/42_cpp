#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void )
{
	FragTrap FragTrap;
	ScavTrap ScavTrap;

	std::cout << "DiamondTrap Default Constructor Called" << std::endl;
	name = "UNKNOWN";
	health = FragTrap.getHealth();
	energy = ScavTrap.getEnergy();
	attack_damage = FragTrap.getAttackDamage();
}

DiamondTrap::DiamondTrap( DiamondTrap const & input_class )
{
	std::cout << "DiamondTrap Copy Constructor Called" << std::endl;
	*this = input_class;
}

DiamondTrap::DiamondTrap( std::string input_name )
{
	std::cout << "DiamondTrap Parameterized Constructor Called" << std::endl;
	ClapTrap::name = input_name + "_clap_name";
	name = input_name;
	health = 100;
	energy = 50;
	attack_damage = 30;
}

DiamondTrap::~DiamondTrap( void )
{
	std::cout << "DiamondTrap Deconstructor Called" << std::endl;
}

DiamondTrap & DiamondTrap::operator=( DiamondTrap const & input_class )
{
	std::cout << "Assignment operator called" << std::endl;
	name = input_class.name;
	health = input_class.health;
	energy = input_class.energy;
	attack_damage = input_class.attack_damage;
	return (*this);
}

void DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap name: " << name << std::endl;
	std::cout << "ClapTrap name: " << ClapTrap::name << std::endl;
}
