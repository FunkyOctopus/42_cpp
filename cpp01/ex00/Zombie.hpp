#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>

class Zombie
{
private:
	std::string	zombie_name;

public:
	Zombie(std::string name);
	~Zombie(void);

	void		announce(void);
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

#endif
