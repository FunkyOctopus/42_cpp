#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	zombie_name = name;
}

Zombie::~Zombie(void)
{
	std::cout << "debug message zombie: " 
	<< Zombie::zombie_name << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << Zombie::zombie_name << 
	" BraiiiiiiinnnzzzZ" << std::endl;
}
