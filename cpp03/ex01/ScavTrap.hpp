#ifndef SCAVTRAP_H
# define SCAVTRAP_H

# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap( void );
		ScavTrap( ScavTrap const & input_class );
		ScavTrap( std::string input_name );
		~ScavTrap( void );
		ScavTrap & operator=( ScavTrap const & input_class );

		void attack(const std::string& target);
		void guardgate();
};

#endif
