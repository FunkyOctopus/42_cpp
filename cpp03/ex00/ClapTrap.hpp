#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
	private:
		std::string	name;
		int			health;
		int			energy;
		int			attack_damage;

	public:
		ClapTrap( void );
		ClapTrap( ClapTrap const & input_class );
		ClapTrap( std::string input_name );
		~ClapTrap( void );
		ClapTrap & operator=( ClapTrap const & input_class );

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif
