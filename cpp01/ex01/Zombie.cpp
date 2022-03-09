#include "Zombie.hpp"

Zombie::Zombie(void)
{
}

Zombie::~Zombie(void)
{
	std::cout << "debug message zombie: " <<
	Zombie::zombie_name << std::endl;
}

void	Zombie::set_name(std::string name)
{
	zombie_name = name;
}

void	Zombie::announce(void)
{
	std::cout << Zombie::zombie_name << 
	" BraiiiiiiinnnzzzZ" << std::endl;
}
