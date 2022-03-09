#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"
# include "Character.hpp"
# include "AMateria.hpp"
# include <iostream>

class Character : public ICharacter
{
	private:
		std::string name;
		AMateria *Inventory[4];

	public:
		Character(void);
		Character(std::string name);
		Character(Character const & input_class);
		~Character(void);
		Character & operator=(Character const & input_class);

		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter & target);
};

# endif
