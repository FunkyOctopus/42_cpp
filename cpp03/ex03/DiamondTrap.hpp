#ifndef DIAMONDTRAP_H
# define DIAMONDTRAP_H

# include <iostream>
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : virtual public FragTrap, virtual public ScavTrap
{
	private:
		std::string name;

	public:
		DiamondTrap( void );
		DiamondTrap( DiamondTrap const & input_class );
		DiamondTrap( std::string input_name );
		~DiamondTrap( void );
		DiamondTrap & operator=( DiamondTrap const & input_class );

		void attack(const std::string& target);
		void whoAmI();
};

#endif
