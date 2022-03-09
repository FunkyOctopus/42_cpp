#ifndef FRAGTRAP_H
# define FRAGTRAP_H

# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public:
		FragTrap( void );
		FragTrap( FragTrap const & input_class );
		FragTrap( std::string input_name );
		~FragTrap( void );
		FragTrap & operator=( FragTrap const & input_class );

		void attack(const std::string& target);
		void highFivesGuys( void );

		std::string	getName( void );
		int			getHealth( void );
		int			getEnergy( void );
		int			getAttackDamage( void );
};

#endif
